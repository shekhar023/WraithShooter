// Fill out your copyright notice in the Description page of Project Settings.
#include "Gun.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "ShooterCharacter.h"
#include "GameFramework/Actor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimationAsset.h"
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Net/UnrealNetwork.h"
#include "Actors/WeaponPickup.h"

static int32 DebugWeaponDrawing = 0;
FAutoConsoleVariableRef CVARDebugWeaponDrawing(TEXT("COOP.DebugWeapons"), DebugWeaponDrawing, TEXT("Draw Debug Lines for Weapons"),ECVF_Cheat);

// Sets default values
AGun::AGun()
{
    //Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
   // SetRootComponent(Root);
    
    Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    Mesh->SetupAttachment(RootComponent);
    
    WeaponAttributes.MuzzleFlashSocketName = TEXT("MuzzleFlashSocket");
    WeaponAttributes.GunShellSocket = TEXT("AmmoSocket");
    
    StorageSlot = EInventorySlot::Primary;
    
    WeaponAttributes.MaxRange = 10000.f;
    WeaponAttributes.RateOfFire = 600;
    WeaponAttributes.BulletSpread = 2.0f;
    WeaponAttributes.Damage = 10.f;
    WeaponAttributes.MaxAmmo = 300;
    WeaponAttributes.MaxAmmoInClip = 30;
    
    bIsFiring = false;
    bIsReloading = false;

    SetReplicates(true);
    SetReplicateMovement(true);
}

//MARK: PostInitializeComponents
void AGun::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    /* Setup configuration */
    TimeBetweenShots = 60 / WeaponAttributes.RateOfFire;
    WeaponAttributes.CurrentAmmoInClip = FMath::Min(WeaponAttributes.MaxAmmo, WeaponAttributes.MaxAmmoInClip);
}
//MARK: EndPlay
void AGun::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    DetachMeshFromPawn();
    StopAutomaticFire();
}

//MARK: Return Functions
USkeletalMeshComponent* AGun::GetWeaponMesh() const
{
    return Mesh;
}

bool AGun::GetbCanFire() const
{
    return bCanFire;
}

int AGun::GetCurrentAmmoInClip() const
{
    return WeaponAttributes.CurrentAmmoInClip;
}

int AGun::GetMaxAmmo() const
{
    return WeaponAttributes.MaxAmmo;
}

float AGun::GetEquipStartedTime() const
{
    return EquipStartedTime;
}

float AGun::GetEquipDuration() const
{
    return EquipDuration;
}

bool AGun::IsPlayerAiming()
{
    AShooterCharacter* MyCharacter = Cast<AShooterCharacter>(GetOwner());
    if(MyCharacter != nullptr)
    {
        return MyCharacter->GetbIsAiming();
    }
    
    return false;
}

EInventorySlot AGun::GetStorageSlot()
{
    return StorageSlot;
}

//MARK: Set Owner and Get Owner
void AGun::SetOwningPawn(AShooterCharacter* MyPawn)
{
    if (MyPawn)
    {
        SetOwner(MyPawn);
    }
}

AController* AGun::GetOwnerController() const
{
    APawn* OwnerPawn = Cast<APawn>(GetOwner());
    if (OwnerPawn == nullptr)
        return nullptr;
    return OwnerPawn->GetController();
}

//MqARK: Weapon Fire
void AGun::StartAutomaticFire()
{
    if(bIsShotgun == false)
    {
    float FirstDelay = FMath::Max(LastFireTime + TimeBetweenShots - GetWorld()->TimeSeconds, 0.0f);
    GetWorldTimerManager().SetTimer(TimerHandle_TimeBetweenShots, this, &AGun::PullTrigger, TimeBetweenShots, true, FirstDelay);
    }
    
    if(bIsShotgun == true)
    {
        GetWorldTimerManager().SetTimer(Shotgun_TimerHandle, this, &AGun::PullTrigger, WeaponAttributes.ShotgunFireDelay, false, 0.0f);
    }
}

void AGun::StopAutomaticFire()
{
    GetWorldTimerManager().ClearTimer(TimerHandle_TimeBetweenShots);
    GetWorldTimerManager().ClearTimer(Shotgun_TimerHandle);
}

//MARK: Gun Trace
FHitResult AGun::GetHitResult()
{
    FHitResult Hit;
    
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(GetOwner());
    Params.AddIgnoredActor(this);
    Params.bTraceComplex = true;
    Params.bReturnPhysicalMaterial = true;

    GetWorld()->LineTraceSingleByChannel(OUT Hit, GetPlayerWorldPosition(), GetGunRangeEndPoint(), ECollisionChannel::ECC_GameTraceChannel1, Params);
    
    return Hit;
}

FVector AGun::GetPlayerWorldPosition()
{
    FVector PlayerViewPointLocation;
    FRotator PlayerViewPointRotation;
    
    GetOwnerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);
    
    return PlayerViewPointLocation;
    
}

FVector AGun::GetGunRangeEndPoint()
{
    FVector PlayerViewPointLocation;
    FRotator PlayerViewPointRotation;
    
    GetOwnerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);
    
    FVector EndPoint = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * WeaponAttributes.MaxRange;
    
    if(bIsShotgun == true)
    {
        EndPoint.Y += FMath::RandRange(-500, 500);
        EndPoint.Z += FMath::RandRange(-500, 500);
    }
    return EndPoint;
    
}

FVector AGun::GetShotDirection()
{
     FVector PlayerViewPointLocation;
     FRotator PlayerViewPointRotation;
     
     GetOwnerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);
     
     FVector ShotDirection = -PlayerViewPointRotation.Vector();
     
     float HalfRad = FMath::DegreesToRadians(WeaponAttributes.BulletSpread);
     ShotDirection = FMath::VRandCone(GetGunRangeEndPoint(), HalfRad, HalfRad);
     
     return ShotDirection;
}

//MARK: PullTrigger
void AGun::PullTrigger()
{
    if(GetCurrentAmmoInClip() == 0 && CanReload())
    {
        StartReload();
    }
    
    CalculateAmmo();
    
    if(GetbCanFire() == true && bIsReloading == false)
    {
        FHitResult Hit = GetHitResult();
        SurfaceType = SurfaceType_Default;
        
        PlayFireEffects(GetGunRangeEndPoint(), Hit.ImpactPoint);
        SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Hit.PhysMaterial.Get());
        PlayImpactEffects(SurfaceType, Hit.ImpactPoint);
        AActor* HitActor = Hit.GetActor();
        
        float AppliedDamage = WeaponAttributes.Damage;
        if(SurfaceType == SurfaceType3)
        {
            AppliedDamage *= WeaponAttributes.HeadShotDamage;
        }
        if(HitActor == GetOwner())
        {
            float AnimDuration = PlayCharacterAnimations(PlayerAnimations.PlayerHitReloadMontage);
            if (AnimDuration <= 0.0f)
            {
                AnimDuration = 1.0f;
            }
        }
        
        if(HitActor != nullptr)
        {
            UGameplayStatics::ApplyPointDamage(HitActor, AppliedDamage, GetShotDirection(), Hit, GetOwner()->GetInstigatorController(), GetOwner(),WeaponAttributes.DamageType);
        }
    }
}

//MARK: Calculate Ammo
void AGun::CalculateAmmo()
{
    if(GetCurrentAmmoInClip() > 0 && IsPlayerAiming() == true && bIsReloading == false)
    {
        bCanFire = true;
        WeaponAttributes.CurrentAmmoInClip--;
    }
    
    else
    {
        bCanFire = false;
    }
    
}
 //MARK: Reloading Functions
bool AGun::CanReload() const
{
    if((GetCurrentAmmoInClip() == WeaponAttributes.MaxAmmoInClip) || (GetCurrentAmmoInClip() == WeaponAttributes.MaxAmmoInClip)|| (GetMaxAmmo() == 0))
    {
        return false;
    }
    return true;
}

void AGun::StartReload()
{
    if(CanReload() == false) {return;}
    bIsReloading = true;
    bCanFire = false;
    
    if(IsPlayerAiming())
    {
        
        float AnimDuration = PlayCharacterAnimations(PlayerAnimations.PlayerReloadMontage);
        if (AnimDuration <= 0.0f)
        {
            AnimDuration = 1.0f;
        }
        
        PlayGunAnimations(WeaponAnimations.ReloadIronSightAnim);
        
        GetWorldTimerManager().SetTimer(TimerHandle_StopReload, this, &AGun::StopReload, AnimDuration, false);
        
        GetWorldTimerManager().SetTimer(TimerHandle_ReloadWeapon, this, &AGun::Reload, FMath::Max(0.1f, AnimDuration - 0.1f), false);
    }
    else
    {
        float AnimDuration = PlayCharacterAnimations(PlayerAnimations.PlayerHipReloadMontage);
        if (AnimDuration <= 0.0f)
        {
            AnimDuration = 1.0f;
        }
        
        PlayGunAnimations(WeaponAnimations.ReloadHipAnim);
        
        GetWorldTimerManager().SetTimer(TimerHandle_StopReload, this, &AGun::StopReload, AnimDuration, false);
        
        GetWorldTimerManager().SetTimer(TimerHandle_ReloadWeapon, this, &AGun::Reload, FMath::Max(0.1f, AnimDuration - 0.1f), false);
    }
}

void AGun::StopReload()
{
    bIsReloading = false;
    //DetermineWeaponState();
    
    if(IsPlayerAiming())
    {
        StopWeaponAnimation(PlayerAnimations.PlayerReloadMontage);
    }
    
    else
    {
        StopWeaponAnimation(PlayerAnimations.PlayerHipReloadMontage);
    }
    
}

void AGun::Reload()
{
    int32 AmmoDifference = FMath::Min(WeaponAttributes.MaxAmmoInClip - WeaponAttributes.CurrentAmmoInClip, WeaponAttributes.MaxAmmo - WeaponAttributes.CurrentAmmoInClip);

    if (AmmoDifference > 0)
    {
        WeaponAttributes.CurrentAmmoInClip += AmmoDifference;
        WeaponAttributes.MaxAmmo -= FMath::Clamp(WeaponAttributes.MaxAmmo, 0, AmmoDifference);
    }
    
    bIsReloading = false;
    bCanFire = true;
}

//MARK: Weapon Effects
void AGun::PlayFireEffects(FVector TraceEndPoint, FVector TraceEnd)
{
    if(WeaponEffects.MuzzleSound)
    {
        UGameplayStatics::SpawnSoundAttached(WeaponEffects.MuzzleSound, Mesh, WeaponAttributes.MuzzleFlashSocketName);
    }
    
    if(WeaponEffects.ImpactSound)
    {
        UGameplayStatics::PlaySoundAtLocation(GetWorld(), WeaponEffects.ImpactSound, TraceEnd);
    }
    if(WeaponEffects.MuzzleFlash)
    {
        UGameplayStatics::SpawnEmitterAttached(WeaponEffects.MuzzleFlash, Mesh, WeaponAttributes.MuzzleFlashSocketName);
    }
    
    if (WeaponEffects.TracerEffect)
    {
        FVector MuzzleLocation = Mesh->GetSocketLocation(WeaponAttributes.MuzzleFlashSocketName);
        UNiagaraComponent* TracerComp = UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), WeaponEffects.TracerEffect, MuzzleLocation);
        if (TracerComp)
        {
            TracerComp->SetVectorParameter(TEXT("BeamEnd"), TraceEndPoint);
        }
    }
    
    if(WeaponEffects.GunShellFX)
    {
        auto ShellEjectTransform = Mesh->GetSocketTransform(WeaponAttributes.GunShellSocket);
        UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), WeaponEffects.GunShellFX, ShellEjectTransform);
    }
    
    APawn* MyOwner = Cast<APawn>(GetOwner());
    if (MyOwner)
    {
        APlayerController* PlayerController = Cast<APlayerController>(MyOwner->GetController());
        if (PlayerController)
        {
            PlayerController->ClientPlayCameraShake(WeaponEffects.FireCamShake);
        }
    }
    
    PlayGunAnimations(WeaponAnimations.GunFireAnim);
    PlayCharacterAnimations(PlayerAnimations.PlayerGunFireMontage);
}
//MARK: Weapon Impact Effects
void AGun::PlayImpactEffects(EPhysicalSurface MySurfaceType, FVector ImpactPoint)
{
    UParticleSystem* SelectedEffect = nullptr;
    switch (MySurfaceType)
    {
        case SurfaceType1: "BodyImpact";
            SelectedEffect = WeaponEffects.BodyImpactEffect;
            break;
        case SurfaceType2: "Metal";
            SelectedEffect = WeaponEffects.MetalImpactEffect;
            break;
        case SurfaceType3: "HeadImpact";
            SelectedEffect = WeaponEffects.HeadImpactEffect;
            break;
        default:
            SelectedEffect = WeaponEffects.ImpactEffect;
            break;
    }
    
    if (SelectedEffect)
    {
        FVector MuzzleLocation = Mesh->GetSocketLocation(WeaponAttributes.MuzzleFlashSocketName);
        
        FVector ShotDirection = ImpactPoint - MuzzleLocation;
        ShotDirection.Normalize();
        
        UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SelectedEffect, ImpactPoint, ShotDirection.Rotation());
    }
}

//MARK: Weapon Equiping and Dequiping functions
void AGun::OnEnterInventory(AShooterCharacter* NewOwner)
{
    SetOwningPawn(NewOwner);
    AttachMeshToPawn(StorageSlot);
}

void AGun::OnLeaveInventory()
{
    SetOwningPawn(nullptr);
    
    if (IsAttachedToPawn())
    {
        OnUnEquip();
    }
    
    DetachMeshFromPawn();
}


bool AGun::IsEquipped() const
{
    return bIsEquipped;
}

bool AGun::IsAttachedToPawn() const
{
    return bIsEquipped || bPendingEquip;
}


void AGun::OnEquip(bool bPlayAnimation)
{
    bPendingEquip = true;
    
   AttachMeshToPawn(StorageSlot);
    if (bPlayAnimation)
    {
        float Duration = PlayCharacterAnimations(PlayerAnimations.EquipAnim);
        if (Duration <= 0.0f)
        {
            // Failsafe in case animation is missing
            Duration = 1.0f;
        }
        
        EquipStartedTime = GetWorld()->TimeSeconds;
        EquipDuration = Duration;

        GetWorldTimerManager().SetTimer(EquipFinishedTimerHandle, this, &AGun::OnEquipFinished, Duration, false);
    }
    else
    {
        OnEquipFinished();
    }
}

void AGun::OnUnEquip()
{
    bIsEquipped = false;
    //DetachMeshFromPawn();
    StopAutomaticFire();
    
    if (bPendingEquip)
    {
        StopWeaponAnimation(PlayerAnimations.EquipAnim);
        bPendingEquip = false;

        GetWorldTimerManager().ClearTimer(EquipFinishedTimerHandle);
    }
    if (bIsReloading)
    {
        if(IsPlayerAiming() == true)
        {
            StopWeaponAnimation(PlayerAnimations.PlayerReloadMontage);
        }
        else
        {
            StopWeaponAnimation(PlayerAnimations.PlayerHipReloadMontage);
        }
        bIsReloading = false;

        GetWorldTimerManager().ClearTimer(TimerHandle_ReloadWeapon);
    }

}

void AGun::OnEquipFinished()
{
    AttachMeshToPawn();

    bIsEquipped = true;
    bPendingEquip = false;

        // Try to reload empty clip
    if (WeaponAttributes.CurrentAmmoInClip <= 0 && CanReload())
    {
        StartReload();
    }
}

void AGun::AttachMeshToPawn(EInventorySlot Slot)
{
    AShooterCharacter* MyCharacter = Cast<AShooterCharacter>(GetOwner());
    
    if(MyCharacter == nullptr){return;}
    
    DetachMeshFromPawn();
    
    FName GunAttachPoint = MyCharacter->GetInventoryAttachPoint(Slot);
    Mesh->SetHiddenInGame(false);
    Mesh->AttachToComponent(MyCharacter->GetPawnMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, GunAttachPoint);
}

void AGun::DetachMeshFromPawn()
{
    Mesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
    Mesh->SetHiddenInGame(false);
}

//MARK: Animations Functions
float AGun::PlayCharacterAnimations(UAnimMontage* CharacterAnims)
{
    AShooterCharacter* MyCharacter = Cast<AShooterCharacter>(GetOwner());
    if(MyCharacter == nullptr){return 0.0f;}
    
    float Duration = 0.0f;
    if(CharacterAnims)
    {
      Duration = MyCharacter->PlayAnimMontage(CharacterAnims);
    }
    return Duration;
}

void AGun::StopWeaponAnimation(UAnimMontage* Animation)
{
    AShooterCharacter* MyCharacter = Cast<AShooterCharacter>(GetOwner());
    if(!MyCharacter){return;}
    
    UAnimMontage* UseAnim = Animation;
        if (UseAnim)
        {
            MyCharacter->StopAnimMontage(UseAnim);
        }
}

void AGun::PlayGunAnimations(UAnimationAsset* GunAnims)
{
    if(GunAnims)
    {
        Mesh->PlayAnimation(GunAnims, false);
    }
}
