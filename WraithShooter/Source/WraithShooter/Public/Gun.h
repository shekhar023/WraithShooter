// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

class AShooterCharacter;
class UCameraShake;
class UParticleSystem;
class UAnimMontage;

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
    
    void Reload();
    
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    
    bool bCanFire = true;
    
    UPROPERTY()
    AShooterCharacter* SCharacter;
    
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    FName TracerTargetName;
    
    AController* GetOwnerController() const;
    
    FTimerHandle TimerHandle_TimeBetweenShots;
    
    float LastFireTime;
    
    // Derived from RateOfFire
    float TimeBetweenShots;
    
    bool GunTrace(FHitResult& Hit, FVector& ShotDirection);
    
    void CalculateAmmo();
    
    void PlayFireEffects(FVector TraceEnd);
    
    void PlayImpactEffects(EPhysicalSurface MySurfaceType, FVector ImpactPoint);
    
    UPROPERTY()
    TEnumAsByte<EPhysicalSurface> SurfaceType;
    
    
public:
    
    UFUNCTION(BlueprintPure)
    int GetCurrentAmmoInClip() const;
    
    UFUNCTION(BlueprintPure)
    int GetMaxAmmo() const;
    
    UFUNCTION(BlueprintPure)
    bool GetbCanFire() const;
    
    void OnEquip(const AGun* LastWeapon);
    
    void OnUnEquip();
    
    void AttachMeshToPawn();
    
    void DetachMeshFromPawn();
    
    void SetOwningPawn(AShooterCharacter* MyPawn);
    
    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    TSubclassOf<UCameraShake> FireCamShake;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    UParticleSystem* TracerEffect;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    UParticleSystem* ImpactEffect;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    UParticleSystem* BodyImpactEffect;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    UParticleSystem* MetalImpactEffect;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    UParticleSystem* MuzzleFlash;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    USoundBase* MuzzleSound;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    USoundBase* ImpactSound;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    UAnimMontage* GunFireMontage;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    UAnimMontage* ReloadAnim;
    
    UFUNCTION()
    void PlayFireAnimation(UAnimMontage* FireAnim);
    
private:
    
    UPROPERTY(VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(VisibleAnywhere)
    FName MuzzleFlashSocketName;
    
    UPROPERTY(EditAnywhere)
    float MaxRange;
    
    UPROPERTY(EditAnywhere)
    float RateOfFire;
    
    UPROPERTY(EditDefaultsOnly, Category = "Weapon", meta = (ClampMin=0.0f))
    float BulletSpread;
    
    UPROPERTY(EditAnywhere)
    float Damage;
    
    UPROPERTY(EditAnywhere)
    int32 MaxAmmo;
    
    UPROPERTY(EditAnywhere)
    int32 ClipSize;
    
    UPROPERTY(EditAnywhere)
    int32 AmmoInClip;
    
};
