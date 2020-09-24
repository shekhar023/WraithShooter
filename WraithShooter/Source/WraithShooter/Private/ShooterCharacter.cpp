// Fill out your copyright notice in the Description page of Project Settings.

#include "ShooterCharacter.h"
#include "Gun.h"
#include "Components/CapsuleComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/HealthComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "WraithShooter/WraithShooterGameModeBase.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimInstance.h"
#include "ShooterPlayerController.h"
#include "ShooterPlayerState.h"
#include "MagicPill.h"
#include "WraithProjectile.h"
#include "Components/TimelineComponent.h"
#include "DrawDebugHelpers.h"
#include "EngineUtils.h"
#include "Net/UnrealNetwork.h"
#include "Actors/WeaponPickup.h"
#include "WraithUIInterface.h"

#define OUT

//MARK: Constructor -> Sets default values
AShooterCharacter::AShooterCharacter()
{    
    BasePitchValue = 45.f;
    BaseYawValue = 45.f;
    InteractTraceLength = 100;
   // MaxHealth = 100.f;
    MaxEnergy = 100.f;
    CharacterScore = 100.f;
    
    JumpCount = 0;
    TimeToDrawAndDestroyArc = .01f;

    bIsAiming = false;
    bCanInteract = false;

    bIsOffensiveAbilityReady =true;
    bIsDefensiveAbilityReady = false;
    
    bHasFireball = false;
    bUsedFireball = false;
    bFireballReady = true;
    bIsGrenadeAiming = false;
    FireballCooldown = 1.13f;
    SpawnFireballDelay = 1.0f;
    
    
    bHasElectroSpark = false;
    bUsedElectroSpark = false;
    bElectroSparkReady = true;
    ElectroSparkCooldown = 2.1f;
    SpawnElectroSparkDelay = 1.0f;
    
    bHasArticBlast = false;
    bUsedArticBlast = false;
    bArticBlastReady = true;
    ArticBlastCooldown = 2.1f;
    SpawnArticBlastDelay = 1.0f;
    
    WeaponAttachPoint = TEXT("AttachWeapon");
    SecondaryWeaponAttachPoint = TEXT("SecondaryWeaponAttachPoint");
    PrimaryWeaponAttachPoint = TEXT("PrimaryWeaponAttachPoint");
    SideWeaponAttachPoint = TEXT("SideWeaponWeaponAttachPoint");
    FireballSocket = TEXT("FireballAttachPoint");
    
    HealthComp = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComp"));
    
    FloatingComp = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FloatingComp"));
    //Sets up particle system of the character.
    VisualFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("VFX"));
    VisualFX->SetupAttachment(RootComponent);
    
    GrenadeSpawnLocation = CreateDefaultSubobject<USceneComponent>(TEXT("GrenadeSpawnLocation"));
    GrenadeSpawnLocation->SetupAttachment(GetMesh());
    
    HealthText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("HealthText"));
    HealthText->SetupAttachment(RootComponent);
    
    
    auto ParticleSystem = ConstructorHelpers::FObjectFinder<UParticleSystem>(TEXT("ParticleSystem'/Game/ParagonWraith/FX/Particles/Abilities/TeleportTarget/FX/P_Wraith_Teleport_Residual.P_Wraith_Teleport_Residual'"));
    
    if(ParticleSystem.Object)
    {
        VisualFX->SetTemplate(ParticleSystem.Object);
    }
}
//MARK:BindDelegates -> Function implemented in this class
void AShooterCharacter::BindDelegates()
{
    if(GetWorld())
    {
        AWraithShooterGameModeBase* MyGameMode = GetWorld()->GetAuthGameMode<AWraithShooterGameModeBase>();
        if(MyGameMode)
        {
            MyGameMode->CharacterVisualEffectsDelegateStart.BindUObject(this, &AShooterCharacter::MakeVFXVisible);
            MyGameMode->CharacterVisualEffectsDelegateStop.BindUObject(this, &AShooterCharacter::MakeVFXInvisible);
        }
    }
}
//MARK:UnBindDelegates -> Function implemented in this class
void AShooterCharacter::UnBindDelegates()
{
    if(GetWorld())
    {
        AWraithShooterGameModeBase* MyGameMode = GetWorld()->GetAuthGameMode<AWraithShooterGameModeBase>();
        if(MyGameMode)
        {
            MyGameMode->CharacterVisualEffectsDelegateStart.Unbind();
            MyGameMode->CharacterVisualEffectsDelegateStop.Unbind();
        }
    }
}

//MARK: Setup for AI widget
void AShooterCharacter::SetTextComponents()
{
    HealthText->SetXScale(1.f);
    HealthText->SetYScale(1.f);
    HealthText->SetWorldSize(15);
    HealthText->SetText(FText::FromString(FString::Printf(TEXT("HP:%0.f "), HealthComp->GetHealth())));
}


//MARK:Begin Play
void AShooterCharacter::BeginPlay()
{
    Super::BeginPlay();
    //Set Health Default Value
    //Health = MaxHealth;
    Energy = MaxEnergy;
    
    SetTextComponents();
    
    GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_None);
    
    //SpawnInventory
    SpawnInventory();
    
    // Call BindDelegates
    BindDelegates();
    
    ShootFireball.AddUObject(this, &AShooterCharacter::UseFireball);
    ShootElectroSpark.AddUObject(this, &AShooterCharacter::UseElectroSpark);
    ShootArticeBlast.AddUObject(this, &AShooterCharacter::UseArticBlast);
    
}

//MARK:EndPlay to free Delegates
void AShooterCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    
    // Call UnBindDelegates
    UnBindDelegates();
}

//MARK:Spawn Inventory
void AShooterCharacter::SpawnInventory()
{
    int32 NumWeaponClass = GunClass.Num();
    for(int32 i = 0; i < NumWeaponClass; i++)
    {
        if(GunClass[i])
        {
            FActorSpawnParameters SpawnInfo;
            SpawnInfo.Owner = this;
            SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
            AGun* NewWeapon = GetWorld()->SpawnActor<AGun>(GunClass[i], SpawnInfo);
            NewWeapon->OnEnterInventory(this);
            Inventory.AddUnique(NewWeapon);
            
            if (Inventory.Num() > 0)
            {
                EquipWeapon(Inventory[i]);
            }
        }
        
    }
}

// MARK:EquipWeapon
void AShooterCharacter::EquipWeapon(AGun* Weapon)
{
    //ignore if trying to equip already equipped weapon
    if(Weapon == Gun){return;}
    
    if(Weapon)
    {
        SetCurrentWeapon(Weapon, Gun);
    }
}

//MARK:SetCurrentWeapon
void AShooterCharacter::SetCurrentWeapon(AGun* NewWeapon, AGun* LastWeapon)
{
    /* Maintain a reference for visual weapon swapping */
    PreviousGun = LastWeapon;
    
    AGun* LocalLastWeapon = nullptr;
    
    if (LastWeapon != nullptr)
    {
        LocalLastWeapon = LastWeapon;
    }
    else if (NewWeapon != Gun)
    {
        LocalLastWeapon = Gun;
    }
    
    // UnEquip the current
    bool bHasPreviousWeapon = false;
    // unequip previous
    if (LocalLastWeapon)
    {
        LocalLastWeapon->OnUnEquip();
        bHasPreviousWeapon = true;
    }
    
    Gun = NewWeapon;
    
    // equip new one
    if (NewWeapon)
    {
        NewWeapon->SetOwningPawn(this);
        NewWeapon->OnEquip(bHasPreviousWeapon);
    }
}

// MARK: Called to bind functionality to input
void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    
    PlayerInputComponent->BindAxis("MoveForward", this, &AShooterCharacter::moveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AShooterCharacter::moveRight);
    
    PlayerInputComponent->BindAxis("LookUp", this, &AShooterCharacter::AddControllerPitchInput);
    PlayerInputComponent->BindAxis("LookUpRate", this, &AShooterCharacter::LookUpRate);
    PlayerInputComponent->BindAxis("Turn", this, &AShooterCharacter::AddControllerYawInput);
    PlayerInputComponent->BindAxis("TurnRate", this, &AShooterCharacter::TurnRate);
    
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AShooterCharacter::CanJump);
    PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AShooterCharacter::StartCrouch);

    
    PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &AShooterCharacter::StartShoot);
    PlayerInputComponent->BindAction("Shoot", IE_Released, this, &AShooterCharacter::StopShoot);
    
    PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AShooterCharacter::Aim);
    PlayerInputComponent->BindAction("Aim", IE_Released, this, &AShooterCharacter::StopAim);
    
    PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AShooterCharacter::Reload);
    
    PlayerInputComponent->BindAction("SwitchToNextWeapon", IE_Pressed, this, &AShooterCharacter::NextWeapon);
    PlayerInputComponent->BindAction("SwitchToPreviousWeapon", IE_Pressed, this, &AShooterCharacter::PreviousWeapon);
    
    PlayerInputComponent->BindAction("EquipPrimaryWeapon", IE_Pressed, this, &AShooterCharacter::OnEquipPrimaryWeapon);
    PlayerInputComponent->BindAction("EquipSecondaryWeapon", IE_Pressed, this, &AShooterCharacter::OnEquipSecondaryWeapon);
    PlayerInputComponent->BindAction("EquipSideWeapon", IE_Pressed, this, &AShooterCharacter::OnEquipSecondaryWeapon);
    
    PlayerInputComponent->BindAction("PickingUp", IE_Pressed, this, &AShooterCharacter::PickObjects);
    PlayerInputComponent->BindAction("DropWeapon", IE_Pressed, this, &AShooterCharacter::DropWeapon);
    
    PlayerInputComponent->BindAction("OffensiveAbility", IE_Pressed, this, &AShooterCharacter::AimFirball);
    PlayerInputComponent->BindAction("OffensiveAbility", IE_Released, this, &AShooterCharacter::CastOffensiveAblity);
    
}

//MARK: Movement Input Binding Functions
void AShooterCharacter::moveForward(float AxisValue)
{
    AddMovementInput(GetActorForwardVector() * AxisValue);
}

void AShooterCharacter::moveRight(float AxisValue)
{
    AddMovementInput(GetActorRightVector() * AxisValue);
}

void AShooterCharacter::StartCrouch()
{
    // If we are crouching then CanCrouch will return false. If we cannot crouch then calling Crouch() wont do anything
    if (CanCrouch())
    {
        Crouch();
    }
    else
    {
        UnCrouch();
    }
}

void AShooterCharacter::CanJump()
{
    if(GetbIsAiming() == false && bIsUsingMist == false)
    {
        if(GetCharacterMovement()->IsFalling() == false && bHasDoubleJump == false)
        {
            Jump();
        }
        
        if(bHasDoubleJump == true)
        {
            switch (JumpCount)
            {
                case 0:
                    if(GetCharacterMovement()->IsFalling() == false)
                    {
                        Jump();
                        JumpCount++;
                    }
                    break;
                    
                case 1:DoubleJump();
                    break;
                    
                default:
                    break;
            }
        }
    }
}
void AShooterCharacter::DoubleJump()
{
    JumpCount++;
    bIsDoubleJumping = true;
    if(DoubleJumpData.VFX)
    {
        UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DoubleJumpData.VFX, GetActorLocation());
    }
    AShooterCharacter::LaunchCharacter(JumpVelocity, false, true);
    bIsDoubleJumping = false;
}
void AShooterCharacter::Landed(const FHitResult& Hit)
{
    JumpCount = 0;
}


void AShooterCharacter::LookUpRate(float AxisValue)
{
    AddControllerPitchInput(AxisValue * BasePitchValue * GetWorld()->GetDeltaSeconds());
}

void AShooterCharacter::TurnRate(float AxisValue)
{
    AddControllerYawInput(AxisValue * BaseYawValue * GetWorld()->GetDeltaSeconds());
}

//MARK:Action Mappings Input functions

void AShooterCharacter::ServerOnFire_Implementation()
{
    StartShoot();
}
//AIShooting function
void AShooterCharacter::Shoot()
{
    if(Gun)
    {
        Gun->PullTrigger();
    }
}

//AI to Stop Aiming function
void AShooterCharacter::StopAiming()
{
    bIsAiming = false;
}

//Player Shooting function
void AShooterCharacter::StartShoot()
{
    if(Gun)
    {
        if(bIsGrenadeAiming == false && bIsUsingMist == false)
        {
            Gun->StartAutomaticFire();
        }
        
    }
}
//StopShooting function
void AShooterCharacter::StopShoot()
{
    if(Gun)
    {
        
        Gun->StopAutomaticFire();
    }
}

//Aiming function
void AShooterCharacter::Aim()
{
    bIsAiming = true;
    Zoom(bIsAiming);
}

//Player StopAiming function
void AShooterCharacter::StopAim()
{
    bIsAiming = false;
    Zoom(bIsAiming);
}

// Weapon Reload function
void AShooterCharacter::Reload()
{
    Gun->StartReload();
}

//MARK: Use OffensiveAblity
void AShooterCharacter::CastOffensiveAblity()
{
    switch (OffensiveAbilitySlotted)
    {
        case EOffensiveAbility::Fireball:
            ShootFireball.Broadcast();
            break;
        case EOffensiveAbility::ElectroSpark:
            ShootElectroSpark.Broadcast();
            break;
        case EOffensiveAbility::ArticBlast:
            ShootArticeBlast.Broadcast();
            break;
        default:
            // Not implemented.
            break;
    }
}

//MARK: Exlposive Grenade
void AShooterCharacter::AimFirball()
{
    StopShoot();
    
    if(bIsOffensiveAbilityReady)
    {
        bIsGrenadeAiming = true;
        
        GetWorldTimerManager().SetTimer(DrawPath_TimerHandle, this, &AShooterCharacter::DrawThrowArc, TimeToDrawAndDestroyArc, true);
    }
    else
    {
        bIsGrenadeAiming = false;
    }
}

void AShooterCharacter::UseFireball()
{
    if(HaveEnoughEnergyToUseAbility(FireballAttributes) && bFireballReady == true && !bIsUsingMist)
    {
        UpdateEnergy(FireballAttributes);
        CameraEffects();
        
        UE_LOG(LogTemp, Warning, TEXT("UseFireball"));
        
        if(bIsGrenadeAiming)
        {
            bUsedFireball = true;
            bFireballReady = false;
            bIsGrenadeAiming = false;
            
            GetWorldTimerManager().SetTimer(Fireball_TimerHandle, this, &AShooterCharacter::SpawnFireball, SpawnFireballDelay, false);
            
            GetWorldTimerManager().SetTimer(FireballCooldown_TimerHandle, this, &AShooterCharacter::CanUseFireball, FireballCooldown, false);
        }
    }
}

void AShooterCharacter::SpawnFireball()
{
    if(FireballClass)
    {
        
        UE_LOG(LogTemp, Warning, TEXT("SpawnFireball"));
        //Params for Spawning Actors from GrenadeSpawnLocation
        auto GunOffset = FVector(100.0f, 0.0f, 10.0f);
        const FRotator SpawnRotation = GetControlRotation();
        const FVector SpawnLocation = ((GrenadeSpawnLocation != nullptr) ? GrenadeSpawnLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);
        FActorSpawnParameters SpawnInfo;
        SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
        
        GetWorld()->SpawnActor<AWraithProjectile>(FireballClass,SpawnLocation, SpawnRotation, SpawnInfo);
        GetWorldTimerManager().ClearTimer(DrawPath_TimerHandle);
    }
    //bFireballReady == false;
    bIsOffensiveAbilityReady = false;
}

void AShooterCharacter::CanUseFireball()
{
    bUsedFireball = false;
    bFireballReady = true;
    bIsOffensiveAbilityReady = true;
    
    GetWorldTimerManager().ClearTimer(Fireball_TimerHandle);
    GetWorldTimerManager().ClearTimer(FireballCooldown_TimerHandle);
    
}


//MARK:ElectroSpark

void AShooterCharacter::ElectroSparkOn()
{
    APlayerController* PlayerController = Cast<APlayerController>(GetController());
    if(GetCharacterMovement()->IsFalling() == false)
    {
        DisableInput(PlayerController);
    }
    
    if(GetCharacterMovement()->IsFalling() == true)
    {
        FloatingComp->Activate();
        GetCharacterMovement()->Deactivate();
        DisableInput(PlayerController);
    }
}

void AShooterCharacter::ElectroSparkOff()
{
    APlayerController* PlayerController = Cast<APlayerController>(GetController());
    
    EnableInput(PlayerController);
    FloatingComp->Deactivate();
    GetCharacterMovement()->Activate();
}

void AShooterCharacter::UseElectroSpark()
{
    if(HaveEnoughEnergyToUseAbility(ElectroSparkAttributes)  &&  bElectroSparkReady == true && !bIsUsingMist)
    {
        UpdateEnergy(ElectroSparkAttributes);
        CameraEffects();
        
        UE_LOG(LogTemp, Warning, TEXT("ElectroSpark"));
        
        if(bIsGrenadeAiming)
        {
            bUsedElectroSpark = true;
            bElectroSparkReady = false;
            bIsGrenadeAiming = false;
            
            ElectroSparkOn();
            
            GetWorldTimerManager().SetTimer(ElectroSpark_TimerHandle, this, &AShooterCharacter::SpawnElectroSpark, SpawnElectroSparkDelay, false);
            
            GetWorldTimerManager().SetTimer(ElectroSparkCoolDown_TimerHandle, this, &AShooterCharacter::CanUseElectroSpark, ElectroSparkCooldown, false);
        }
    }
}

void AShooterCharacter::SpawnElectroSpark()
{
    if(ElectroSparkClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("SpawnElectroSpark"));
        UWorld* const World = GetWorld();
        
        //Params for Spawning Actors from GrenadeSpawnLocation
        auto GunOffset = FVector(100.0f, 0.0f, 10.0f);
        const FRotator SpawnRotation = GetControlRotation();
        const FVector SpawnLocation = ((GrenadeSpawnLocation != nullptr) ? GrenadeSpawnLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);
        FActorSpawnParameters SpawnInfo;
        SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
        
        World->SpawnActor<AWraithProjectile>(ElectroSparkClass,SpawnLocation, SpawnRotation, SpawnInfo);
        
        GetWorldTimerManager().ClearTimer(DrawPath_TimerHandle);
    }
    bUsedElectroSpark = false;
    bIsOffensiveAbilityReady = false;
}

void AShooterCharacter::CanUseElectroSpark()
{
    bElectroSparkReady = true;
    bIsOffensiveAbilityReady = true;
    ElectroSparkOff();
    GetWorldTimerManager().ClearTimer(ElectroSpark_TimerHandle);
    GetWorldTimerManager().ClearTimer(ElectroSparkCoolDown_TimerHandle);
    
}

//MARK:SwitchWeapon
void AShooterCharacter::NextWeapon()
{
    AShooterPlayerController* MyPC = Cast<AShooterPlayerController>(Controller);
    if (MyPC)
    {
        if(Inventory.Num() >= 2)
        {
            const int32 CurrentWeaponIndex = Inventory.IndexOfByKey(Gun);
            AGun* NextWeapon = Inventory[(CurrentWeaponIndex + 1) % Inventory.Num()];
            EquipWeapon(NextWeapon);
        }
    }
}

void AShooterCharacter::AddWeapon(AGun* Weapon)
{
    if (Weapon)
    {
        Weapon->OnEnterInventory(this);
        Inventory.AddUnique(Weapon);
        
        // Equip first weapon in inventory
        if (Inventory.Num() > 0 && Gun == nullptr)
        {
            EquipWeapon(Inventory[0]);
        }
    }
}


void AShooterCharacter::RemoveWeapon(AGun* Weapon, bool bDestroy)
{
    if (Weapon)
    {
        bool bIsCurrent = Gun == Weapon;
        
        if (Inventory.Contains(Weapon))
        {
            Weapon->OnLeaveInventory();
        }
        Inventory.RemoveSingle(Weapon);
        
        /* Replace weapon if we removed our current weapon */
        if (bIsCurrent && Inventory.Num() > 0)
        {
            SetCurrentWeapon(Inventory[0], nullptr);
        }
        
        /* Clear reference to weapon if we have no items left in inventory */
        if (Inventory.Num() == 0)
        {
            SetCurrentWeapon(nullptr, nullptr);
        }
        
        if (bDestroy)
        {
            Weapon->Destroy();
        }
    }
}

//MARK: HitResult
FHitResult AShooterCharacter::GetHitResult()
{
    FHitResult Hit;
    
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(GetOwner());
    Params.AddIgnoredActor(this);
    
    GetWorld()->LineTraceSingleByChannel(OUT Hit, GetPlayerWorldPosition(), GetEndPoint(), ECollisionChannel::ECC_Visibility, Params);
    
    return Hit;
}

FVector AShooterCharacter::GetPlayerWorldPosition()
{
    FVector PlayerViewPointLocation;
    FRotator PlayerViewPointRotation;
    
    GetController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);
    
    return PlayerViewPointLocation;
    
}

FVector AShooterCharacter::GetEndPoint()
{
    FVector PlayerViewPointLocation;
    FRotator PlayerViewPointRotation;
    
    GetController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);
    
    FVector EndPoint = GetPlayerWorldPosition() + (GetDirection() * InteractTraceLength);
 
    return EndPoint;
    
}

FVector AShooterCharacter::GetDirection()
{
    FVector PlayerViewPointLocation;
    FRotator PlayerViewPointRotation;
    
    GetController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);
    
    FVector Direction = PlayerViewPointRotation.Vector();
    
    return Direction;
}

//MARK:DropWeapon
void AShooterCharacter::DropWeapon()
{
    if (Gun)
    {
        if (Controller == nullptr)
        {
            return;
        }
        
        FHitResult Hit = GetHitResult();
        FVector SpawnLocation;
        // Find farthest valid spawn location
        if (Hit.bBlockingHit)
        {
            //Slightly move away from impacted object
            SpawnLocation = Hit.ImpactPoint + (Hit.ImpactNormal * 20);
        }
        else
        {
            SpawnLocation = GetEndPoint();
        }
        
        // Spawn the "dropped" weapon
        FActorSpawnParameters SpawnInfo;
        SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        AWeaponPickup* NewWeaponPickup = GetWorld()->SpawnActor<AWeaponPickup>(Gun->WeaponPickupClass, SpawnLocation, FRotator::ZeroRotator, SpawnInfo);

        if (NewWeaponPickup)
        {
            // Apply torque to make it spin when dropped.
            UStaticMeshComponent* MeshComp = NewWeaponPickup->GetMeshComponent();
            if (MeshComp)
            {
                MeshComp->SetSimulatePhysics(true);
                MeshComp->AddTorqueInRadians(FVector(1, 1, 1) * 4000000);
            }
        }
        RemoveWeapon(Gun, true);
    }
}

//MARK: ArticBlast
void AShooterCharacter::UseArticBlast()
{
    if(HaveEnoughEnergyToUseAbility(ArticBlastAttributes)  &&  bElectroSparkReady == true && !bIsUsingMist)
    {
        UpdateEnergy(ArticBlastAttributes);
        CameraEffects();
        
        UE_LOG(LogTemp, Warning, TEXT("ElectroSpark"));
        
        if(bIsGrenadeAiming)
        {
            bUsedArticBlast = true;
            bArticBlastReady = false;
            bIsGrenadeAiming = false;
            
            GetWorldTimerManager().SetTimer(ArticBlast_TimerHandle, this, &AShooterCharacter::SpawnArticBlast, SpawnArticBlastDelay, false);
            
            GetWorldTimerManager().SetTimer(ArticBlastCooldown_TimerHandle, this, &AShooterCharacter::CanUseArticBlast, ArticBlastCooldown, false);
        }
    }
}

void AShooterCharacter::SpawnArticBlast()
{
    if(ArticBlastClass)
    {
        
        UE_LOG(LogTemp, Warning, TEXT("Articblast spawn"));
        //Params for Spawning Actors from GrenadeSpawnLocation
        auto GunOffset = FVector(100.0f, 0.0f, 10.0f);
        const FRotator SpawnRotation = GetControlRotation();
        const FVector SpawnLocation = ((GrenadeSpawnLocation != nullptr) ? GrenadeSpawnLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);
        FActorSpawnParameters SpawnInfo;
        SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
        
        GetWorld()->SpawnActor<AWraithProjectile>(ArticBlastClass,SpawnLocation, SpawnRotation, SpawnInfo);
        GetWorldTimerManager().ClearTimer(DrawPath_TimerHandle);
    }
    //bFireballReady == false;
    bIsOffensiveAbilityReady = false;
}

void AShooterCharacter::CanUseArticBlast()
{
    bArticBlastReady = true;
    bIsOffensiveAbilityReady = true;
    GetWorldTimerManager().ClearTimer(ArticBlast_TimerHandle);
    GetWorldTimerManager().ClearTimer(ArticBlastCooldown_TimerHandle);
}
void AShooterCharacter::PreviousWeapon()
{
    AShooterPlayerController* MyPC = Cast<AShooterPlayerController>(Controller);
    if (MyPC)
    {
        if(Inventory.Num() >= 2)
        {
            const int32 CurrentWeaponIndex = Inventory.IndexOfByKey(Gun);
            AGun* PreviousWeapon = Inventory[(CurrentWeaponIndex - 1 + Inventory.Num()) % Inventory.Num()];
            EquipWeapon(PreviousWeapon);
        }
    }
}

void AShooterCharacter::OnEquipPrimaryWeapon()
{
    
    if (Inventory.Num() >= 1)
    {
        /* Find first weapon that uses primary slot. */
        for (int32 i = 0; i < Inventory.Num(); i++)
        {
            AGun* Weapon = Inventory[i];
            if (Weapon->GetStorageSlot() == EInventorySlot::Primary)
            {
                EquipWeapon(Weapon);
            }
        }
    }
}

void AShooterCharacter::OnEquipSecondaryWeapon()
{
    
    if (Inventory.Num() >= 2)
    {
        /* Find first weapon that uses secondary slot. */
        for (int32 i = 0; i < Inventory.Num(); i++)
        {
            AGun* Weapon = Inventory[i];
            if (Weapon->GetStorageSlot() == EInventorySlot::Secondary)
            {
                EquipWeapon(Weapon);
            }
        }
    }
}

void AShooterCharacter::OnEquipSideWeapon()
{
    
    if (Inventory.Num() >= 3)
    {
        /* Find first weapon that uses secondary slot. */
        for (int32 i = 0; i < Inventory.Num(); i++)
        {
            AGun* Weapon = Inventory[i];
            if (Weapon->GetStorageSlot() == EInventorySlot::Side)
            {
                EquipWeapon(Weapon);
            }
        }
    }
}

bool AShooterCharacter::WeaponSlotAvailable(EInventorySlot CheckSlot)
{
    /* Iterate all weapons to see if requested slot is occupied */
    for (int32 i = 0; i < Inventory.Num(); i++)
    {
        AGun* Weapon = Inventory[i];
        if (Weapon)
        {
            if (Weapon->GetStorageSlot() == CheckSlot)
                return false;
        }
    }
    
    return true;
}


void AShooterCharacter::SwapToNewWeaponMesh()
{
    if (PreviousGun)
    {
        PreviousGun->AttachMeshToPawn(PreviousGun->GetStorageSlot());
    }
    
    if (Gun)
    {
        Gun->AttachMeshToPawn(EInventorySlot::Hands);
    }
}

//MARK:Pick Objects
void AShooterCharacter::PickObjects()
{
    FHitResult Hit = GetHitResult();
    
    AActor* HitActor = Hit.GetActor();
    
    if(Hit.bBlockingHit)
    {
        DrawDebugBox(GetWorld(), Hit.ImpactPoint, FVector(5,5,5), FColor::Emerald, false, 2.0f);
    }
    
    if(bCanInteract)
    {
        if(HitActor)
        {
            SetFocusedActor(HitActor);
        }
        
        if(FocusedActor)
        {
            IWraithUIInterface* Interface = Cast<IWraithUIInterface>(FocusedActor);
            if(Interface)
            {
                Interface->Execute_OnInteract(FocusedActor, this);
                UE_LOG(LogTemp, Warning, TEXT("OnInteract C++"));
                
            }
        }
    }
}

void AShooterCharacter::SetFocusedActor(AActor* HitActor)
{
    if(HitActor != FocusedActor)
    {
    UE_LOG(LogTemp, Warning, TEXT("Hitactor null"));
    if(FocusedActor)
    {
        UE_LOG(LogTemp, Warning, TEXT("focus actor found"));
        IWraithUIInterface* Interface = Cast<IWraithUIInterface>(FocusedActor);
        if(Interface)
        {
            Interface->Execute_EndFocus(FocusedActor);
        }
    }
    
    IWraithUIInterface* Interface = Cast<IWraithUIInterface>(HitActor);
    if(Interface)
    {
        Interface->Execute_StartFocus(HitActor);
    }
    FocusedActor = HitActor;
}
    
    else
    {
        if(FocusedActor)
        {
            IWraithUIInterface* Interface = Cast<IWraithUIInterface>(FocusedActor);
            if(Interface)
            {
                Interface->Execute_EndFocus(FocusedActor);
            }
        }
        FocusedActor = nullptr;
    }
}
//MARK: Return Functions
FName AShooterCharacter::GetInventoryAttachPoint(EInventorySlot Slot) const
{
    /* Return the socket name for the specified storage slot */
    switch (Slot)
    {
        case EInventorySlot::Hands:
            return WeaponAttachPoint;
        case EInventorySlot::Primary:
            return PrimaryWeaponAttachPoint;
        case EInventorySlot::Secondary:
            return SecondaryWeaponAttachPoint;
        case EInventorySlot::Side:
            return SideWeaponAttachPoint;
        default:
            // Not implemented.
            return "";
    }
}

//GetWeaponAttachPoint
FName AShooterCharacter::GetWeaponAttachPoint() const
{
    return WeaponAttachPoint;
}

//Get WeaponHostlerPoint
FName AShooterCharacter::GetGunHostlerPoint() const
{
    return PrimaryWeaponAttachPoint;
}

AGun* AShooterCharacter::GetCurrentWeapon() const
{
    return Gun;
}

//GetPawnMesh
USkeletalMeshComponent* AShooterCharacter::GetPawnMesh() const
{
    return GetMesh();
}

//Returns the Energy of Player
float AShooterCharacter::GetEnergy() const
{
    return Energy;
}

//returns if dead or not
bool AShooterCharacter::IsDead() const
{
    return HealthComp->GetHealth() <= 0;
    
}
// returns if Aiming or  not
bool AShooterCharacter::GetbIsAiming() const
{
    return bIsAiming;
}

float AShooterCharacter::GetScoreValue() const
{
    return CharacterScore;
}


//MARK: TakeDamage
void AShooterCharacter::OnHealthChanged(UHealthComponent* OwningHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
    HealthText->SetText(FText::FromString(FString::Printf(TEXT("HP: %0.f "), HealthComp->Health)));
    
    if (IsDead())
    {
        GetMovementComponent()->StopMovementImmediately();
        GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        DetachFromControllerPendingDestroy();
        
        SetLifeSpan(10.0f);
    }
}

//MARK:Update Energy
void AShooterCharacter::UpdateEnergy(FSkillsAttributes AbilityAttributes)
{
    if(Energy < AbilityAttributes.EnergyCost)
        return;
    
    Energy -= AbilityAttributes.EnergyCost;
}

bool AShooterCharacter::HaveEnoughEnergyToUseAbility(FSkillsAttributes AbilityAttributes)
{
    if(AbilityAttributes.EnergyCost <= Energy)
        return true;
    else
    {
        bIsGrenadeAiming = false;
        return false;
    }
    
}
//MARK: VFX functions

//MakeVFXVisible Binded to CharacterVisualEffectsDelegateStart Delegate
void AShooterCharacter::MakeVFXVisible()
{
    VisualFX->ActivateSystem(true);
}

//MakeVFXVisible Binded to CharacterVisualEffectsDelegateStop Delegate
void AShooterCharacter::MakeVFXInvisible()
{
    VisualFX->DeactivateSystem();
}

void AShooterCharacter::CameraEffects()
{
    APlayerController* PlayerController = Cast<APlayerController>(GetController());
    if (PlayerController)
    {
        PlayerController->ClientPlayCameraShake(ProjectileCameraShake);
    }
}
//MARK:Networking
void AShooterCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> & OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShooterCharacter, Killer);
    DOREPLIFETIME(AShooterCharacter, Gun);
    DOREPLIFETIME(AShooterCharacter, PreviousGun);
    DOREPLIFETIME(AShooterCharacter, Energy);
}

void AShooterCharacter::OnRep_Killer()
{
    if(IsLocallyControlled())
    {
        ShowDeathOnScreen();
    }
    
    GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    
    GetMesh()->SetSimulatePhysics(true);
    GetMesh()->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
    GetMesh()->SetCollisionResponseToAllChannels(ECR_Block);
    
    SetLifeSpan(10.f);
}

void AShooterCharacter::GetTimerWidgetRef(UWidgetComponent* TimerWidget)
{
    TimerWidgetRef = TimerWidget;
}
