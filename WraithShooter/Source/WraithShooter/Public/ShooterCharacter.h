// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"

class AGun;
class UAnimMontage;
class UParticleSystemComponent;
class UParticleSystem;
class UTextRenderComponent;

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
    
    
    
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    
    void moveForward(float AxisValue);
    
    void moveRight(float AxisValue);
    
    void LookUpRate(float AxisValue);
    
    void TurnRate(float AxisValue);
    
    void CanJump();
    
    UPROPERTY(EditAnywhere)
    bool bIsAiming;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    FName GunAttachSocket;
    
    UPROPERTY(EditAnywhere)
    float BasePitchValue;
    
    UPROPERTY(EditAnywhere)
    float BaseYawValue;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxHealth;
    
    UPROPERTY(VisibleAnywhere)
    float Health;
    
    
    
    
//MARK: Gun and Inventory
protected:
    
    void SpawnInventory();
    
    void OnNextWeapon();
    
    void EquipWeapon(AGun* Weapon);
    
    void SetCurrentWeapon(AGun* NewWeapon, AGun* LastWeapon);
    
    UPROPERTY(BlueprintReadOnly)
    AGun* Gun;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gun)
    TArray<TSubclassOf<AGun>> GunClass;
    
    UPROPERTY(Transient)
    TArray<AGun*> Inventory;
    
public:
    
    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    
    virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
    
    void StartShoot();
    
    UFUNCTION(BlueprintCallable)
    void StopShoot();
    
    //AI Shooting
    void Shoot();
    
    void Reload();
    
    void Aim();
    
    void StopAim();
    
    //For AI to Stop Aiming
    void StopAiming();
    
    virtual float PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate = 1.f, FName StartSectionName = NAME_None) override;
 
//MARK: Return Functions
public:
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintPure)
    bool GetbIsAiming() const;
    
    UFUNCTION(BlueprintPure)
    float GetHealthPercent() const;
    
    FName GetWeaponAttachPoint() const;
    
    USkeletalMeshComponent* GetPawnMesh() const;
    
    bool PickupMode;
    
    void PickObjects();
    
    // Collision functionality setup
    UFUNCTION(BlueprintNativeEvent, Category = Collision)
    void OnOverlapBegin(UPrimitiveComponent* Comp, AActor* otherActor, UPrimitiveComponent* otherComp,
                        int32 otherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    virtual void PostInitializeComponents() override;
    
    UTextRenderComponent* HealthText;
    
    
    
public:
    
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Effects)
    UParticleSystemComponent* VisualFX;
    
   
//MARK: Binding these functions to delegate created in WraithShooterGameModeBase.h
    UFUNCTION()
    void MakeVFXVisible();
    
    UFUNCTION()
    void MakeVFXInvisible();
    
    UFUNCTION()
    void BindDelegates();
    
    UFUNCTION()
    void UnBindDelegates();
    
};
