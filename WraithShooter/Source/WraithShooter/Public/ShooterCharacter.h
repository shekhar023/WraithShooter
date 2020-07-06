// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"

class AGun;

UCLASS()
class WRAITHSHOOTER_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShooterCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    
    void moveForward(float AxisValue);
    
    void moveRight(float AxisValue);
    
    void LookUpRate(float AxisValue);
    
    void TurnRate(float AxisValue);
    
    void Shoot();
    
    UPROPERTY(EditAnywhere)
    float BasePitchValue;
    
    UPROPERTY(EditAnywhere)
    float BaseYawValue;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxHealth;
    
    UPROPERTY(VisibleAnywhere)
    float Health;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AGun> GunClass;
    
    UPROPERTY()
    AGun* Gun;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    
    virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;

};
