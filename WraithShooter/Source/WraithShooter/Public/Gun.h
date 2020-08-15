// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShooterCharacter.h"
#include "Gun.generated.h"

class AShooterCharacter;
class UCameraShake;
class UParticleSystem;
class UAnimMontage;
class UAnimationAsset;

namespace EWeaponState
{
    enum Type
    {
        Idle,
        Firing,
        Reloading,
        Equipping,
    };
}

UCLASS()
class WRAITHSHOOTER_API AGun : public AActor
{
    GENERATED_BODY()
    
private:
    
    UPROPERTY(VisibleAnywhere)
    FName MuzzleFlashSocketName;
    
    UPROPERTY(VisibleDefaultsOnly, Category = "Weapon")
    FName TracerTargetName;
    
    UPROPERTY(VisibleDefaultsOnly, Category = "Weapon")
    FName GunShellSocket;
    
    UPROPERTY(EditAnywhere, Category = "Weapon",meta = (ClampMin=0.0f))
    float MaxRange;
    
    UPROPERTY(EditAnywhere, Category = "Weapon", meta = (ClampMin=0.0f))
    float RateOfFire;
    
    UPROPERTY(EditDefaultsOnly, Category = "Weapon", meta = (ClampMin=0.0f))
    float BulletSpread;
    
    UPROPERTY(EditAnywhere, Category = "Weapon", meta = (ClampMin=0.0f))
    float Damage;
    
    UPROPERTY(EditAnywhere,Category = "Weapon", meta = (ClampMin=0.0f))
    int32 StartAmmo;
    
    UPROPERTY(EditAnywhere, Category = "Weapon", meta = (ClampMin=0.0f))
    int32 MaxAmmo;
    
    UPROPERTY(EditAnywhere,Category = "Weapon", meta = (ClampMin=0.0f))
    int32 MaxAmmoInClip;
    
    UPROPERTY(EditAnywhere,Category = "Weapon", meta = (ClampMin=0.0f))
    int32 CurrentAmmoInClip;
    
    UPROPERTY(EditAnywhere,Category = "Weapon", meta = (ClampMin=0.0f))
    int32 CurrentAmmo;
    
    
protected:
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    USkeletalMeshComponent* Mesh;
    
    bool bCanFire = true;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
    bool bIsFiring;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
    bool bIsReloading;
    
    UPROPERTY()
    AShooterCharacter* SCharacter;
    
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
    
    EWeaponState::Type GetCurrentState() const;
    
    /** update weapon state */
    void SetWeaponState(EWeaponState::Type NewState);

    /** determine current weapon state */
    void DetermineWeaponState();
    
    /** current weapon state */
    EWeaponState::Type CurrentState;
    
    virtual void PostInitializeComponents() override;
    
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    
    
public:	
    // Sets default values for this actor's properties
    AGun();
    
    void PullTrigger();
    
    void StartAutomaticFire();
    
    void StopAutomaticFire();
    
    void Reload();
    
    void StartReload();
    
    void StopReload();
    
    void OnUnEquip();
    
    void OnEquipFinished();
    
    void AttachMeshToPawn(EInventorySlot Slot = EInventorySlot::Hands);
    
    void DetachMeshFromPawn();
    
    void SetOwningPawn(AShooterCharacter* MyPawn);
    
    void OnEquip(bool bPlayAnimation);
    
    USkeletalMeshComponent* GetWeaponMesh() const;
    
public:
    
    UFUNCTION(BlueprintPure)
    int GetCurrentAmmoInClip() const;
    
    UFUNCTION(BlueprintPure)
    int GetMaxAmmo() const;
    
    UFUNCTION(BlueprintPure)
    bool GetbCanFire() const;
    
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
    UParticleSystem* GunShellFX;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    UParticleSystem* MuzzleFlash;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    USoundBase* MuzzleSound;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    USoundBase* ImpactSound;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    UAnimationAsset* GunFireAnim;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    UAnimationAsset* ReloadIronSightAnim;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    UAnimationAsset* ReloadHipAnim;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    UAnimMontage* EquipAnim;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    UAnimMontage* PlayerGunFireMontage;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    UAnimMontage* PlayerReloadMontage;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
    UAnimMontage* PlayerHipReloadMontage;
    
    UFUNCTION()
    float PlayCharacterAnimations(UAnimMontage* CharacterAnims);
    
    UFUNCTION()
    void PlayGunAnimations(UAnimationAsset* GunAnims);
    
    UFUNCTION()
    void StopWeaponAnimation(UAnimMontage* Animation);
    
    UFUNCTION()
    bool IsPlayerAiming();
    
    UFUNCTION()
    bool CanReload() const;
    
    FTimerHandle TimerHandle_StopReload;
    
    FTimerHandle TimerHandle_ReloadWeapon;
    
    float GetEquipStartedTime() const;

    float GetEquipDuration() const;

    /** last time when this weapon was switched to */
    float EquipStartedTime;

    /** how much time weapon needs to be equipped */
    float EquipDuration;

    bool bIsEquipped;

    bool bPendingEquip;
    
    void OnEnterInventory(AShooterCharacter* NewOwner);
    
    FORCEINLINE EInventorySlot GetStorageSlot()
    {
        return StorageSlot;
    }
    
    /* The character socket to store this item at. */
    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    EInventorySlot StorageSlot;

    FTimerHandle TimerHandle_HandleFiring;

    FTimerHandle EquipFinishedTimerHandle;
    
    

};
