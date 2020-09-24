// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnHealthChangedSignature, UHealthComponent*, OwningHealthComp, float, Health, float, HealthDelta, const class UDamageType*, DamageType, class AController*, InstigatedBy, AActor*, DamageCauser);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WRAITHSHOOTER_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

    bool bIsDead;
    
    UFUNCTION()
    void HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
    
public:
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = HealthComponent)
    float Health;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = HealthComponent)
    float DefaultHealth;
    
    UFUNCTION(BlueprintCallable)
    float GetHealth() const;
    
    //Create Custom Predefined event to be implemented in Blueprints
    UPROPERTY(BlueprintAssignable, Category = Events)
    FOnHealthChangedSignature OnHealthChanged;

};
