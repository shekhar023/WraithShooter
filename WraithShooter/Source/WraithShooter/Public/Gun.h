// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

class AShooterCharacter;

UCLASS()
class WRAITHSHOOTER_API AGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGun();
    
    void PullTrigger();
    
    void StartAutomaticFire();
    
    void StopAutomaticFire();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    
    
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
    UFUNCTION(BlueprintPure)
    int GetCurrentAmmoInClip() const;
    
    UFUNCTION(BlueprintPure)
    int GetMaxAmmo() const;
    
    UFUNCTION(BlueprintPure)
    bool GetbCanFire() const;
    
    bool bCanFire = true;
    
    UPROPERTY(VisibleAnywhere)
    AShooterCharacter* SCharacter;
    
private:
    
    UPROPERTY(VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* MuzzleFlash;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ImpactEffect;
    
    UPROPERTY(EditAnywhere)
    USoundBase* MuzzleSound;
    
    UPROPERTY(EditAnywhere)
    USoundBase* ImpactSound;
    
    UPROPERTY(EditAnywhere)
    float MaxRange;
    
    UPROPERTY(EditAnywhere)
    float RateOfFire;
    
    UPROPERTY(EditAnywhere)
    float Damage;
    
    UPROPERTY(EditAnywhere)
    int32 MaxAmmo;
    
    UPROPERTY(EditAnywhere)
    int32 ClipSize;
    
    UPROPERTY(EditAnywhere)
    int32 AmmoInClip;
    
    bool GunTrace(FHitResult& Hit, FVector& ShotDirection);
    
    AController* GetOwnerController() const;
    
    void CalculateAmmo();
    
    FTimerHandle TimerHandle_TimeBetweenShots;

    float LastFireTime;
    
    // Derived from RateOfFire
    float TimeBetweenShots;

};
