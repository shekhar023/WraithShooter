// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterCharacter.h"
#include "Gun.h"
#include "Components/CapsuleComponent.h"
#include "WraithShooter/WraithShooterGameModeBase.h"

// Sets default values
AShooterCharacter::AShooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    BasePitchValue = 45.f;
    BaseYawValue = 45.f;
    
}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();
    
    GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_None);
    
    Gun = GetWorld()->SpawnActor<AGun>(GunClass);
    Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("WeaponSocket"));
    Gun->SetOwner(this);
	
}

// Called every frame
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
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
    
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AShooterCharacter::Jump);
    
    PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &AShooterCharacter::Shoot);
    
}

void AShooterCharacter::moveForward(float AxisValue)
{
    AddMovementInput(GetActorForwardVector() * AxisValue);
}

void AShooterCharacter::moveRight(float AxisValue)
{
    AddMovementInput(GetActorRightVector() * AxisValue);
}

void AShooterCharacter::LookUpRate(float AxisValue)
{
    AddControllerPitchInput(AxisValue * BasePitchValue * GetWorld()->GetDeltaSeconds());
}

void AShooterCharacter::TurnRate(float AxisValue)
{
    AddControllerYawInput(AxisValue * BaseYawValue * GetWorld()->GetDeltaSeconds());
}

void AShooterCharacter::Shoot()
{
    Gun->PullTrigger();
}

bool AShooterCharacter::IsDead() const
{
    return Health <= 0;
}

float AShooterCharacter::GetHealthPercent() const
{
    return Health / MaxHealth;
}

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