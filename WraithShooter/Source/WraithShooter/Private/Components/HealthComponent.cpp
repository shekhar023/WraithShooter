// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/HealthComponent.h"
#include "WraithShooter/WraithShooterGameModeBase.h"


// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
    DefaultHealth = 100;
    bIsDead = false;
    
   
}

// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

    AActor* MyOwner = GetOwner();
    if(MyOwner)
    {
        //Apply Damage to the player
        MyOwner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::HandleTakeAnyDamage);
    }
    
    Health = DefaultHealth;
}

//function to handle OnTakeAnyDamage event.
void UHealthComponent::HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
    if(Damage <= 0 || bIsDead)
    {
        return;
    }
    
    // Update health clamped
    Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);
    
    bIsDead = Health <= 0.0f;
    
    UE_LOG(LogTemp, Log, TEXT("Health Changed: %s"), *FString::SanitizeFloat(Health));
    
    OnHealthChanged.Broadcast(this, Health, Damage,DamageType, InstigatedBy, DamageCauser);
    
    AWraithShooterGameModeBase* GameMode = GetWorld()->GetAuthGameMode<AWraithShooterGameModeBase>();
    
    if(bIsDead)
    {
        if(GameMode != nullptr)
        {
            APawn* OwnerPawn = Cast<APawn>(GetOwner());
            GameMode->PawnKilled(OwnerPawn);
        }
    }
}

float UHealthComponent::GetHealth() const
{
    return Health;
}
