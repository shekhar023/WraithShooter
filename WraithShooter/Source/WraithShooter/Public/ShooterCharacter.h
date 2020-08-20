// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WraithUIInterface.h"
#include "Components/TimelineComponent.h"
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
class UCurveFloat;
class AMagicPill;
class AWraithProjectile;
class USceneComponent;

//MARK:ENUM for sockets
UENUM()
enum class EInventorySlot : uint8
{
    /* For currently equipped items/weapons */
    Hands,

    /* For Primary weapons on spine bone */
    Primary,

   /* For Secondary weapons on spine bone */
    Secondary,
    
    /* For Side weapons on Pelvis bone */
    Side,
    
};
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
    
    void StartCrouch();
    
    void StopCrouch();
    
    void Aim();
    
    void StopAim();
    
    void StartShoot();
    
    void StopShoot();
    
    void Reload();
    
    //AI Shooting
    void Shoot();
    
    //For AI to Stop Aiming
    void StopAiming();
    
    void PickObjects();
    
    void DoubleJump();
    
    void StartBackDash();
    
    void BackDash();
    
    FTimerHandle BackDash_TimerHandle;
    
    UFUNCTION(BlueprintImplementableEvent, Category = ShooterCharacter)
    void Zoom(bool CanZoom);
    
    UFUNCTION()
    void UpdateEnergy(FSkillsAttributes AbilityAttributes);
    
    UFUNCTION()
    bool HaveEnoughEnergyToUseAbility(FSkillsAttributes AbilityAttributes);
    
    void CastOffensiveAblity();
    
public:
    //MARK:Variables
    
    UPROPERTY(EditAnywhere, Category = ShooterCharacter)
    float BasePitchValue;
    
    UPROPERTY(EditAnywhere, Category = ShooterCharacter)
    float BaseYawValue;
    
    /* Attachpoint for active weapon/item in hands */
    UPROPERTY(EditDefaultsOnly, Category = "Sockets")
    FName WeaponAttachPoint;

    /* Attachpoint for primary weapons */
    UPROPERTY(EditDefaultsOnly, Category = "Sockets")
    FName PrimaryWeaponAttachPoint;
    
    /* Attachpoint for items carried on the belt/pelvis. */
    UPROPERTY(EditDefaultsOnly, Category = "Sockets")
    FName SecondaryWeaponAttachPoint;
    
    UPROPERTY(EditDefaultsOnly, Category = "Sockets")
    FName SideWeaponAttachPoint;
    
    UPROPERTY(EditDefaultsOnly, Category = "Sockets")
    FName FireballSocket;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh)
    USceneComponent* MuzzleLocation;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ShooterCharacter,  meta = (ClampMin= 0.0f))
    float Energy;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ShooterCharacter)
    float MaxHealth;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ShooterCharacter, meta = (ClampMin= 0.0f))
    float Health;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ShooterCharacter)
    float CharacterScore;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ShooterCharacter)//set true when overlapping interactable objects
    bool bCanInteract;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ShooterCharacter)//set true when overlapping interactable objects
    int32 InteractTraceLength;
    
    UPROPERTY(EditAnywhere, Category = ShooterCharacter)
    bool bIsAiming;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillsInfo)
    bool bIsOffensiveAbilityReady = true;
    
 /*   UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TimeLine)
    UCurveFloat* CurveFloat;
    
    FTimeline BackDashTimeline;
    
    UFUNCTION()
    void BackDashTimelineTrack(float DirectionToDash);
  */

public:
    //MARK: Offensive Skills Variables and Data
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DoubleJump)
    bool bHasDoubleJump = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DoubleJump)
    bool bIsDoubleJumping = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DoubleJump)
    int32 JumpCount;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DoubleJump)
    FVector JumpVelocity;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DoubleJump)
    FSkillData DoubleJumpData;
    
    //MARK: BackDash Variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BackDash)
    bool bHasBackDash;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BackDash)
    FVector BackDashLeftAmount;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BackDash)
    FVector BackDashRightAmount;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BackDash)
    FVector BackDashForwardAmount;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BackDash)
    FVector BackDashAmount;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BackDash)
    bool bIsBackDashing;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BackDash)
    bool bIsBackDashReady;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BackDash)
    float BackDashCooldown;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BackDash)
    FSkillData BackDashData;
    
    //MARK: Fireball Variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Fireball)
    bool bHasFireball;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Fireball)
    bool bUsedFireball;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Fireball)
    bool bFireballReady;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Fireball)
    bool bIsFireballAiming;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Fireball)
    float FireballCooldown;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Fireball)
    float SpawnFireballDelay;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Fireball)
    FSkillData FireballData;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Fireball)
    FSkillsAttributes FireballAttributes;
    
    FTimerHandle Fireball_TimerHandle;
    
    FTimerHandle FireballCooldown_TimerHandle;
    
    void SpawnFireball();
    
    void CanUseFireball();
    
    void AimFirball();
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Fireball)
    TSubclassOf<AWraithProjectile> FireballClass;
    
    //MARK: ElectroSpark Variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ElectroSpark)
    bool bHasElectroSpark = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ElectroSpark)
    FSkillData ElectroSparkData;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ElectroSpark)
    FSkillsAttributes ElectroSparkAttributes;
    
    //MARK: Bloodlust Variables
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
    
    AGun* PreviousGun;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gun)
    TArray<TSubclassOf<AGun>> GunClass;
    
    UPROPERTY(Transient)
    TArray<AGun*> Inventory;
    
protected:
    
    //MARK: Gun Functions
    void SpawnInventory();
    
    void NextWeapon();
    
    void PreviousWeapon();

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
    
    UFUNCTION()
    AGun* GetCurrentWeapon() const;
    
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
    
    UFUNCTION()
    bool ObjectTrace(FHitResult& Hit, FVector& ShotDirection);
    
    UFUNCTION()
    FName GetInventoryAttachPoint(EInventorySlot Slot) const;
    
    void OnEquipSecondaryWeapon();
    
    void OnEquipPrimaryWeapon();
    
    void OnEquipSideWeapon();
    
    bool WeaponSlotAvailable(EInventorySlot CheckSlot);
    
    UFUNCTION(BlueprintCallable, Category = "Animation")
    void SwapToNewWeaponMesh();
    
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

public:
    //MARK: Virtual function Take Damage, GetTestName, PostInitializeComponents, ReactToPlayerEntered, ReactToPlayerEntered_Implementation
    
    //damage function
    virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
    
    //Declare override of interface
    virtual FString GetTestName() override;

    //Declared function must be implmented in c++
    bool ReactToPlayerEntered();
    bool ReactToPlayerEntered_Implementation() override;
    
    //void ObjectInteractedWith();
    
public:
    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    
    DECLARE_EVENT(AShooterCharacter, FUseFireBall);
    
    //Declare an event using above Signature
    FUseFireBall ShootFireball;
    
    void UseFireball();
};
