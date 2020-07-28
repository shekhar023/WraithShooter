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
#include "MagicPill.h"


// Sets default values
AShooterCharacter::AShooterCharacter()
{    
    BasePitchValue = 45.f;
    BaseYawValue = 45.f;
    MaxHealth = 100;
    
    GunAttachSocket = "WeaponSocket";
    bIsAiming = false;
    
    //Sets up particle system of the character.
    VisualFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("VFX"));
    VisualFX->SetupAttachment(RootComponent);
    
    HealthText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("HealhText"));
    HealthText->SetupAttachment(RootComponent);
    
    
    auto ParticleSystem = ConstructorHelpers::FObjectFinder<UParticleSystem>(TEXT("ParticleSystem'/Game/ParagonWraith/FX/Particles/Abilities/TeleportTarget/FX/P_Wraith_Teleport_Residual.P_Wraith_Teleport_Residual'"));
    
    if(ParticleSystem.Object)
    {
        VisualFX->SetTemplate(ParticleSystem.Object);
    }
    
    PickupMode = false;
}

void AShooterCharacter::BindDelegates()
{
    if(GetWorld())
    {
        AWraithShooterGameModeBase* MyGameMode = Cast<AWraithShooterGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
        if(MyGameMode)
        {
            MyGameMode->CharacterVisualEffectsDelegateStart.BindUObject(this, &AShooterCharacter::MakeVFXVisible);
            MyGameMode->CharacterVisualEffectsDelegateStop.BindUObject(this, &AShooterCharacter::MakeVFXInvisible);
        }
    }
}

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

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
    Super::BeginPlay();
    
    GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_None);
    
    SpawnInventory();
    
    BindDelegates();
    
    Health = MaxHealth;
    
    HealthText->SetRelativeLocation(FVector(0, -30, 75));
    HealthText->SetRelativeRotation(FRotator(0, 180.f, 0));
    HealthText->SetXScale(1.f);
    HealthText->SetYScale(1.f);
    HealthText->SetWorldSize(15);
    HealthText->SetText(FText::FromString(FString::Printf(TEXT("HP: %f "), GetHealthPercent())));
}


void AShooterCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    
    UnBindDelegates();
}

void AShooterCharacter::MakeVFXVisible()
{
    VisualFX->ActivateSystem(true);
    
}

void AShooterCharacter::MakeVFXInvisible()
{
    VisualFX->DeactivateSystem();
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
    return Health;
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
    
    PlayerInputComponent->BindAction("PickingUp", IE_Pressed, this, &AShooterCharacter::PickObjects);
    
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
    HealthText->SetText(FText::FromString(FString::Printf(TEXT("HP: %f "), GetHealthPercent())));
    
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

float AShooterCharacter::PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName)
{
    
    USkeletalMeshComponent* UseMesh = GetPawnMesh();
    if(AnimMontage && UseMesh && UseMesh->AnimScriptInstance)
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayAnimMontage"));
        return UseMesh->AnimScriptInstance->Montage_Play(AnimMontage, InPlayRate);
    }
    
    return 0.0f;
}

void AShooterCharacter::PickObjects()
{
    PickupMode = !PickupMode;
    if(PickupMode)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Pick Up ON"));
    }
    else
    {
         GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Pick Up OFF"));
    }
}


void AShooterCharacter::OnOverlapBegin_Implementation(UPrimitiveComponent* Comp,
    AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult) {
    
    AMagicPill* isPill= Cast<AMagicPill>(otherActor);

    if (isPill != nullptr) {
        if (PickupMode) {
            GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Blue,
                FString::Printf(TEXT("Colliding with %s!!!"), *(otherActor->GetName())));
            Health += isPill->GetPillEffect();
            isPill->Destroy();
           HealthText->SetText(FText::FromString(FString::Printf(TEXT("HP: %f "), GetHealthPercent())));
        }
    }
}

void AShooterCharacter::PostInitializeComponents() {
    Super::PostInitializeComponents();
    if (RootComponent) {
        GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AShooterCharacter::OnOverlapBegin);
    }

}
