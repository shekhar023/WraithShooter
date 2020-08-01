// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterCharacter.h"
#include "Gun.h"
#include "Components/CapsuleComponent.h"
#include "Components/TextRenderComponent.h"
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


//MARK: Constructor -> Sets default values
AShooterCharacter::AShooterCharacter()
{    
    BasePitchValue = 45.f;
    BaseYawValue = 45.f;
    MaxHealth = 100;
    GunAttachSocket = "WeaponSocket";
    bIsAiming = false;
    CharacterScore = 100.f;
    
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
//MARK: PostInitializeComponents
void AShooterCharacter::PostInitializeComponents() {
    
    Super::PostInitializeComponents();
    
    if (RootComponent)
    {
        // GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AShooterCharacter::OnOverlapBegin);
    }
}

void AShooterCharacter::SetTextComponents()
{
    //Setup for AI widget
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
            Inventory.AddUnique(NewWeapon);
        }
    }
    
    if (Inventory.Num() > 0)
    {
        EquipWeapon(Inventory[0]);
    }
}

// MARK:EquipWeapon
void AShooterCharacter::EquipWeapon(AGun* Weapon)
{
    if(Weapon)
    {
        SetCurrentWeapon(Weapon, Gun);
    }
}

//MARK:SetCurrentWeapon
void AShooterCharacter::SetCurrentWeapon(AGun* NewWeapon, AGun* LastWeapon)
{
    AGun* LocalLastWeapon = nullptr;
    
    if (LastWeapon != nullptr)
    {
        LocalLastWeapon = LastWeapon;
    }
    else if (NewWeapon != Gun)
    {
        LocalLastWeapon = Gun;
    }
    
    // unequip previous
    if (LocalLastWeapon)
    {
        LocalLastWeapon->OnUnEquip();
    }
    
    Gun = NewWeapon;
    
    // equip new one
    if (NewWeapon)
    {
        NewWeapon->SetOwningPawn(this);
        NewWeapon->OnEquip(LastWeapon);
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
    
    PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &AShooterCharacter::StartShoot);
    PlayerInputComponent->BindAction("Shoot", IE_Released, this, &AShooterCharacter::StopShoot);
    
    PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AShooterCharacter::Aim);
    PlayerInputComponent->BindAction("Aim", IE_Released, this, &AShooterCharacter::StopAim);
    
    PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AShooterCharacter::Reload);
    
    PlayerInputComponent->BindAction("SwitchWeapon", IE_Pressed, this, &AShooterCharacter::SwitchWeapon);
    
    //PlayerInputComponent->BindAction("PickingUp", IE_Pressed, this, &AShooterCharacter::PickObjects);
    
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

void AShooterCharacter::CanJump()
{
    if(GetbIsAiming() == false)
    {
        Jump();
    }
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
}

//Player StopAiming function
void AShooterCharacter::StopAim()
{
    bIsAiming = false;
}

// Weapon Reload function
void AShooterCharacter::Reload()
{
    Gun->Reload();
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

//MARK: Return Functions

// Name of Class
FString AShooterCharacter::GetTestName()
{
    FString MyName = this->GetName();
    return MyName;
}


//GetWeaponAttachPoint
FName AShooterCharacter::GetWeaponAttachPoint() const
{
    return GunAttachSocket;
}

//GetPawnMesh
USkeletalMeshComponent* AShooterCharacter::GetPawnMesh() const
{
    return GetMesh();
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
