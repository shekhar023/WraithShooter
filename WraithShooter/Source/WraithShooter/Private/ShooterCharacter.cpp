// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterCharacter.h"
#include "Gun.h"
#include "Components/CapsuleComponent.h"
#include "Components/TextRenderComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "WraithShooter/WraithShooterGameModeBase.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimInstance.h"
#include "ShooterPlayerController.h"
#include "ShooterPlayerState.h"
#include "MagicPill.h"
#include "DrawDebugHelpers.h"


static int32 DebugWeaponDrawing = 0;
FAutoConsoleVariableRef CVARDebugWeaponDrawing(TEXT("COOP.DebugWeapons"), DebugWeaponDrawing, TEXT("Draw Debug Lines for Weapons"),ECVF_Cheat);

//MARK: Constructor -> Sets default values
AShooterCharacter::AShooterCharacter()
{    
    BasePitchValue = 45.f;
    BaseYawValue = 45.f;
    InteractTraceLength = 100;
    MaxHealth = 100.f;
    CharacterScore = 100.f;
    Energy = 50.f;
    JumpCount = 0;
    BackDashCooldown = 0.35f;
    BackDashLeftAmount.X = -20.f;
    BackDashRightAmount.X = 20.f;
    BackDashForwardAmount.Y = 20.f;
    BackDashAmount.Y = -20.f;
    
    bIsAiming = false;
    bCanInteract = false;
    bIsBackDashing = false;
    bHasBackDash = false;
    
    bIsBackDashReady = true;
    
    
    WeaponAttachPoint = TEXT("AttachWeapon");
    SpineAttachPoint = TEXT("WeaponHostler");
    PelvisAttachPoint = TEXT("PelvisSocket");
    
    //Sets up particle system of the character.
    VisualFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("VFX"));
    VisualFX->SetupAttachment(RootComponent);
    
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
    HealthText->SetText(FText::FromString(FString::Printf(TEXT("HP:%0.f "), GetHealth())));
}


//MARK:Begin Play
void AShooterCharacter::BeginPlay()
{
    Super::BeginPlay();
    //Set Health Default Value
    Health = MaxHealth;
    
    SetTextComponents();
    
    GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_None);
    
    //SpawnInventory
    SpawnInventory();
    
    // Call BindDelegates
    BindDelegates();

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
    PlayerInputComponent->BindAction("BackDash", IE_Pressed, this, &AShooterCharacter::BackDash);
    
    PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &AShooterCharacter::StartShoot);
    PlayerInputComponent->BindAction("Shoot", IE_Released, this, &AShooterCharacter::StopShoot);
    
    PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AShooterCharacter::Aim);
    PlayerInputComponent->BindAction("Aim", IE_Released, this, &AShooterCharacter::StopAim);
    
    PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AShooterCharacter::Reload);
    
    PlayerInputComponent->BindAction("SwitchWeapon", IE_Pressed, this, &AShooterCharacter::SwitchWeapon);
    
    PlayerInputComponent->BindAction("EquipPrimaryWeapon", IE_Pressed, this, &AShooterCharacter::OnEquipPrimaryWeapon);
    PlayerInputComponent->BindAction("EquipSecondaryWeapon", IE_Pressed, this, &AShooterCharacter::OnEquipSecondaryWeapon);
    
    PlayerInputComponent->BindAction("PickingUp", IE_Pressed, this, &AShooterCharacter::PickObjects);
    
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
    if(GetbIsAiming() == false)
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

void AShooterCharacter::BackDash()
{
   
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
        Gun->StartAutomaticFire();
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

//MARK:SwitchWeapon
void AShooterCharacter::SwitchWeapon()
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


void AShooterCharacter::PickObjects()
{
    FHitResult Hit;
    FVector ShotDirection;
    bool bSuccess = ObjectTrace(Hit, ShotDirection);
    
    AActor* HitActor = Hit.GetActor();
    
    if(bCanInteract)
    {
        if(HitActor != nullptr)
        {
            if (HitActor->GetClass()->ImplementsInterface(UWraithUIInterface::StaticClass()))
            {
                const auto &Interface = Cast<IWraithUIInterface>(HitActor);
                if (Interface)
                {
                    Interface->Execute_ObjectInteractedWith(HitActor);
                }
                // Else, Execute Interface on Blueprint layer instead:
                else if (HitActor->GetClass()->ImplementsInterface(UWraithUIInterface::StaticClass()))
                {
                    IWraithUIInterface::Execute_ObjectInteractedWith(HitActor);
                    
                }
            }
        }
    }
}

//MARK: Return Functions

// Name of Class
FString AShooterCharacter::GetTestName()
{
    FString MyName = this->GetName();
    return MyName;
}



FName AShooterCharacter::GetInventoryAttachPoint(EInventorySlot Slot) const
{
    /* Return the socket name for the specified storage slot */
    switch (Slot)
    {
    case EInventorySlot::Hands:
        return WeaponAttachPoint;
    case EInventorySlot::Primary:
        return SpineAttachPoint;
    case EInventorySlot::Secondary:
        return PelvisAttachPoint;
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
    return SpineAttachPoint;
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

//Returns Health of player
float AShooterCharacter::GetHealth() const
{
    return Health;
}

//returns if dead or not
bool AShooterCharacter::IsDead() const
{
    return Health <= 0;
    
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

bool AShooterCharacter::ObjectTrace(FHitResult& Hit, FVector& ShotDirection)
{
    AController* OwnerController = GetController();
    if(!OwnerController){return false;}
    
    FVector Location;
    FRotator Rotation;
    
    OwnerController->GetPlayerViewPoint(Location, Rotation);
    
    ShotDirection = -Rotation.Vector();

    FVector EndPoint = Location + Rotation.Vector() * InteractTraceLength;
    
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(GetOwner());
    Params.AddIgnoredActor(this);
    Params.bTraceComplex = true;
    Params.bReturnPhysicalMaterial = true;
    
    if (DebugWeaponDrawing > 0)
        {
            DrawDebugLine(GetWorld(), Location, EndPoint, FColor::Red, false, 1.0f, 0, 1.0f);
        }
    
    return GetWorld()->LineTraceSingleByChannel(Hit, Location, EndPoint, ECollisionChannel::ECC_GameTraceChannel1, Params);
}

//MARK: TakeDamage
float AShooterCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
    float DamageToApply = Super::TakeDamage(DamageAmount,DamageEvent, EventInstigator, DamageCauser);
    
    DamageToApply = FMath::Min(Health, DamageToApply);
    Health -= DamageToApply;
    HealthText->SetText(FText::FromString(FString::Printf(TEXT("HP: %0.f "), GetHealth())));
    
    if(IsDead())
    {
        AWraithShooterGameModeBase* GameMode = GetWorld()->GetAuthGameMode<AWraithShooterGameModeBase>();
        
        if(GameMode != nullptr)
        {
            GameMode->PawnKilled(this);
        }
        DetachFromControllerPendingDestroy();
        GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        
    }
    return DamageToApply;
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

//MARK: Interface Function
bool AShooterCharacter::ReactToPlayerEntered_Implementation()
{
    Health -= 100.f;
    HealthText->SetText(FText::FromString(FString::Printf(TEXT("HP: %0.f "), GetHealth())));
    return true;
    
}

void AShooterCharacter::PlaySoundEffects()
{
   
}
