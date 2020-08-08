// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WraithUIInterface.h"
#include "GameFramework/Character.h"
#include "SkillStructures.h"
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
class UDamageType;

//MARK: Delegate Decleration
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAiming, bool, IsAiming);

//MARK: ShooterCharacter Class
UCLASS()
class WRAITHSHOOTER_API AShooterCharacter : public ACharacter, public IWraithUIInterface, public SkillStructures // inherited IWraithUIInterface and SkillStructures
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
    
    UPROPERTY(EditAnywhere, Category = ShooterCharacter)
    float BasePitchValue;
    
    UPROPERTY(EditAnywhere, Category = ShooterCharacter)
    float BaseYawValue;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ShooterCharacter)
    FName GunAttachSocket;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ShooterCharacter)
    FName GunHostlerSocket;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ShooterCharacter)
    FName FootSocketName;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ShooterCharacter)
    float Energy;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ShooterCharacter)
    float MaxHealth;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ShooterCharacter)
    float Health;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ShooterCharacter)
    float CharacterScore;
    
    UPROPERTY(EditAnywhere, Category = ShooterCharacter)
    bool bIsAiming;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SoundFX)
    USoundBase* JumpSound;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite,  Category = SoundFX)
    USoundBase* LandSound;
    
    UPROPERTY(BlueprintAssignable, Category = GameMode)
    FOnAiming OnAiming;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillsInfo)
    bool bIsOffensiveAbilityReady = true;

public:
    //MARK: Offensive Skills Variables and Data
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DoubleJump)
    bool bHasDoubleJump = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DoubleJump)
    FSkillData DoubleJumpData;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BackDash)
    bool bHasBackDash = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BackDash)
    FSkillData BackDashData;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Fireball)
    bool bHasFireball = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Fireball)
    FSkillData FireballData;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Fireball)
    FSkillsAttributes FireballAttributes;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ElectroSpark)
    bool bHasElectroSpark = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ElectroSpark)
    FSkillData ElectroSparkData;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ElectroSpark)
    FSkillsAttributes ElectroSparkAttributes;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Bloodlust)
    bool bHasBloodlust = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Bloodlust)
    FSkillData BloodlustData;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Bloodlust)
    FSkillsAttributes BloodlustAttributes;
    
    //MARK: Passive Skills Variables and Data
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LensOfTruth)
    bool bHasLensOfTruth = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LensOfTruth)
    bool bIsUsingLensOfTruth = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LensOfTruth)
    float  LensOfTruthTimePercentage = 1.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LensOfTruth)
    float  LensOfTruthCoolDownTimePercentage = 0.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LensOfTruth)
    FSkillData LensOfTruthData;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LensOfTruth)
    FSkillsAttributes LensOfTruthAttributes;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mist)
    bool bHasMist = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mist)
    bool bIsUsingMist = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mist)
    float  MistTimePercentage = 1.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mist)
    float  MistCoolDownTimePercentage = 0.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mist)
    FSkillData MistData;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mist)
    FSkillsAttributes MistAttributes;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Shield)
    bool bHasShield = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Shield)
    bool bIsUsingShield = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Shield)
    float  ShieldTimePercentage = 1.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Shield)
    float  ShieldCoolDownTimePercentage = 0.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Shield)
    FSkillData ShieldData;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Shield)
    FSkillsAttributes ShieldAttributes;
    
    //MARK: ENUMS variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillsInfo)
    EOffensiveAbility OffensiveAbilitySlotted;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillsInfo)
    EDefensiveAbility DefensiveAbilitySlotted;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillsInfo)
    ESkills SkillAcquired;
    
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
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AIBehavior)
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
    
    //MARK: VFX and SFX function Decleration
    UFUNCTION()
    void MakeVFXVisible();
    
    UFUNCTION()
    void MakeVFXInvisible();
    
    UFUNCTION()
    void PlaySoundEffects();

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
