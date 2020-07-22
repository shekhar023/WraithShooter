// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterCharacter.h"
#include "Gun.h"
#include "Components/CapsuleComponent.h"
#include "WraithShooter/WraithShooterGameModeBase.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Actor.h"
#include "ShooterPlayerController.h"

// Sets default values
AShooterCharacter::AShooterCharacter()
{
    BasePitchValue = 45.f;
    BaseYawValue = 45.f;
    MaxHealth = 100;
    Health = MaxHealth;
    GunAttachSocket = "WeaponSocket";
    bIsAiming = false;
}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
    Super::BeginPlay();
    
    GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_None);
    SpawnInventory();
}

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

//MARK:IsDead
bool AShooterCharacter::IsDead() const
{
    return Health <= 0;
    
}
//MARK: GetbIsAiming
bool AShooterCharacter::GetbIsAiming() const
{
    return bIsAiming;
}

//MARK: GetHealthPercent
float AShooterCharacter::GetHealthPercent() const
{
    return Health/ MaxHealth;
}

//MARK:GetWeaponAttachPoint
FName AShooterCharacter::GetWeaponAttachPoint() const
{
    return GunAttachSocket;
}

//MARK:GetPawnMesh
USkeletalMeshComponent* AShooterCharacter::GetPawnMesh() const
{
    return GetMesh();
}
// Called to bind functionality to input
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
    
    PlayerInputComponent->BindAction("SwitchWeapon", IE_Pressed, this, &AShooterCharacter::OnNextWeapon);
    
}

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

//MARK:AIShoot
void AShooterCharacter::Shoot()
{
    if(Gun)
    {
        Gun->PullTrigger();
    }
}
//MARK: StartShoot
void AShooterCharacter::StartShoot()
{
    if(Gun)
    {
        Gun->StartAutomaticFire();
    }
}
//MARK: StopShoot
void AShooterCharacter::StopShoot()
{
    if(Gun)
    {
        Gun->StopAutomaticFire();
    }
}
//MARK:Aim
void AShooterCharacter::Aim()
{
    
    bIsAiming = true;
}
//MARK:StopAim
void AShooterCharacter::StopAim()
{
    bIsAiming = false;
}

//MARK:StopAiming
void AShooterCharacter::StopAiming()
{
    bIsAiming = false;
}

//MARK: Reload
void AShooterCharacter::Reload()
{
    Gun->Reload();
}
//MARK: TakeDamage
float AShooterCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
    float DamageToApply = Super::TakeDamage(DamageAmount,DamageEvent, EventInstigator, DamageCauser);
    
    DamageToApply = FMath::Min(Health, DamageToApply);
    Health -= DamageToApply;
    
    UE_LOG(LogTemp, Warning, TEXT("Health left: %f"), Health);
    
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

//Inventory

//MARK:OnNextWeapon
void AShooterCharacter::OnNextWeapon()
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
//MARK:EquipWeapon
void AShooterCharacter::EquipWeapon(AGun* Weapon)
{
    if(Weapon)
    {
        SetCurrentWeapon(Weapon, Gun);
    }
}
//MARK: SetCurrentWeapon
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
