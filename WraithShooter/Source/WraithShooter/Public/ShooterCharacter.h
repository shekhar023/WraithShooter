// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WraithUIInterface.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"

//MARK: Classes forward Declerations
class AGun;
class UAnimMontage;
class UBehaviorTree;
class UParticleSystem;
class UParticleSystemComponent;
class UTextRenderComponent;
class AShooterPlayerState;
class USoundBase;

UCLASS()
class WRAITHSHOOTER_API AShooterCharacter : public ACharacter, public IWraithUIInterface // inherited IWraithUIInterface
{
    GENERATED_BODY()
    
public:
    // Sets default values for this character's properties
    AShooterCharacter();
    
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    
    void SetTextComponents();
    
protected:
    //MARK: Axis Bindings Declerations
    
    void moveForward(float AxisValue);
    
    void moveRight(float AxisValue);
    
    void LookUpRate(float AxisValue);
    
    void TurnRate(float AxisValue);
    
    virtual void Landed(const FHitResult& Hit);
    
public:
    //MARK:Action Bindind Decleration
    void CanJump();
    
    void Aim();
    
    void StopAim();
    
    void StartShoot();
    
    void StopShoot();
    
    void Reload();
    
    //AI Shooting
    void Shoot();
    
    //For AI to Stop Aiming
    void StopAiming();
    
public:
    //MARK:Variables
    
    UPROPERTY(EditAnywhere)
    float BasePitchValue;
    
    UPROPERTY(EditAnywhere)
    float BaseYawValue;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    FName GunAttachSocket;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    FName GunHostlerSocket;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    FName FootSocketName;
    
    UPROPERTY(EditAnywhere)
    bool bIsAiming;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Energy;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxHealth;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Health;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float CharacterScore;
    
   UPROPERTY(EditAnywhere, BlueprintReadWrite)
   USoundBase* JumpSound;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundBase* LandSound;
    
    UFUNCTION()
    void PlaySoundEffects();
    
protected:
    
    //MARK: Gun Variables and Data Structures
    UPROPERTY(BlueprintReadOnly)
    AGun* Gun;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gun)
    TArray<TSubclassOf<AGun>> GunClass;
    
    UPROPERTY(Transient)
    TArray<AGun*> Inventory;
    
protected:
    
    //MARK: Gun Functions
    void SpawnInventory();
    
    void SwitchWeapon();
    
    void EquipWeapon(AGun* Weapon);
    
    void SetCurrentWeapon(AGun* NewWeapon, AGun* LastWeapon);
    
public:
    
    //MARK: Components
    UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = Interface)
    UTextRenderComponent* HealthText;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Effects)
    UParticleSystemComponent* VisualFX;
    
    UPROPERTY(EditAnywhere, Category = "AI Behavior")
    UBehaviorTree* ShooterBT;

    
public:
    //MARK: Return Functions
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintPure)
    bool GetbIsAiming() const;
    
    UFUNCTION(BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnergy() const;
    
    UFUNCTION()
    FName GetWeaponAttachPoint() const;
    
    UFUNCTION()
    FName GetGunHostlerPoint() const;
    
    UFUNCTION()
    USkeletalMeshComponent* GetPawnMesh() const;
    
    UFUNCTION(BlueprintPure)
    float GetScoreValue() const;
    
public:
    
    //MARK: Function for Binding Delegates created in WraithShooterGameModeBase.h
    UFUNCTION()
    void BindDelegates();
    
    UFUNCTION()
    void UnBindDelegates();
    
public:
    
    //MARK: VFX function Decleration
    UFUNCTION()
    void MakeVFXVisible();
    
    UFUNCTION()
    void MakeVFXInvisible();
    
    
public:
    //MARK: Virtual function Take Damage, GetTestName, PostInitializeComponents, ReactToPlayerEntered, ReactToPlayerEntered_Implementation
    
    //damage function
    virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
    
    //Declare override of interface
    virtual FString GetTestName() override;
    
    virtual void PostInitializeComponents() override;
    
    //Declared function must be implmented in c++
    bool ReactToPlayerEntered();
    bool ReactToPlayerEntered_Implementation() override;    
    
public:
    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
