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

// Sets default values
AGun::AGun()
{
    //Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
   // SetRootComponent(Root);
    
    Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    Mesh->SetupAttachment(RootComponent);
    
    MuzzleFlashSocketName = TEXT("MuzzleFlashSocket");
    GunShellSocket = TEXT("AmmoSocket");
    TracerTargetName = "Target";
    
    StorageSlot = EInventorySlot::Primary;
    
    MaxRange = 10000.f;
    RateOfFire = 600;
    BulletSpread = 2.0f;
    Damage = 10.f;
    MaxAmmo = 300;
    MaxAmmoInClip = 30;
    
    bIsFiring = false;
    bIsReloading = false;
    
    CurrentState = EWeaponState::Idle;
    
}

//MARK: PostInitializeComponents
void AGun::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    /* Setup configuration */
    TimeBetweenShots = 60 / RateOfFire;
    CurrentAmmoInClip = FMath::Min(MaxAmmo, MaxAmmoInClip);
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
    return CurrentAmmoInClip;
}

int AGun::GetMaxAmmo() const
{
    return MaxAmmo;
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

//MARK: Weapon Fire
void AGun::StartAutomaticFire()
{
    float FirstDelay = FMath::Max(LastFireTime + TimeBetweenShots - GetWorld()->TimeSeconds, 0.0f);
    GetWorldTimerManager().SetTimer(TimerHandle_TimeBetweenShots, this, &AGun::PullTrigger, TimeBetweenShots, true, FirstDelay);
}

void AGun::StopAutomaticFire()
{
    GetWorldTimerManager().ClearTimer(TimerHandle_TimeBetweenShots);
}

//MARK: Gun Trace
bool AGun::GunTrace(FHitResult& Hit, FVector& ShotDirection)
{
    AController* OwnerController = GetOwnerController();
    if(!OwnerController){return false;}
    
    FVector Location;
    FRotator Rotation;
    
    OwnerController->GetPlayerViewPoint(Location, Rotation);
    
    ShotDirection = -Rotation.Vector();
    
    float HalfRad = FMath::DegreesToRadians(BulletSpread);
    ShotDirection = FMath::VRandCone(ShotDirection, HalfRad, HalfRad);
    
    FVector EndPoint = Location + Rotation.Vector() * MaxRange;
    
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(GetOwner());
    Params.AddIgnoredActor(this);
    Params.bTraceComplex = true;
    Params.bReturnPhysicalMaterial = true;
    
    return GetWorld()->LineTraceSingleByChannel(Hit, Location, EndPoint, ECollisionChannel::ECC_GameTraceChannel1, Params);
}
//MARK: PullTrigger
void AGun::PullTrigger()
{
   CalculateAmmo();
    
    if(GetbCanFire() == true && bIsReloading == false)
    {
        FHitResult Hit;
        FVector ShotDirection;
        bool bSuccess = GunTrace(Hit, ShotDirection);
        SurfaceType = SurfaceType_Default;
        
        if(bSuccess)
        {
            PlayFireEffects(Hit.ImpactPoint);
            SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Hit.PhysMaterial.Get());
            PlayImpactEffects(SurfaceType, Hit.ImpactPoint);
            AActor* HitActor = Hit.GetActor();
            
            if(HitActor != nullptr)
            {
                
                FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
                AController* OwnerController = GetOwnerController();
                HitActor->TakeDamage(Damage, DamageEvent, OwnerController, this);
            }
        }
    }
}
//MARK: Calculate Ammo
void AGun::CalculateAmmo()
{
    if(GetCurrentAmmoInClip() > 0 && IsPlayerAiming() == true && bIsReloading == false)
    {
        bCanFire = true;
        CurrentAmmoInClip--;
    }
    
    else
    {
        bCanFire = false;
    }
    
}
 //MARK: Reloading Functions
bool AGun::CanReload() const
{
    if((GetCurrentAmmoInClip() == MaxAmmoInClip) || (GetCurrentAmmoInClip() == MaxAmmoInClip)|| (GetMaxAmmo() == 0))
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
    //DetermineWeaponState();
    if(IsPlayerAiming())
    {
        
        float AnimDuration = PlayCharacterAnimations(PlayerReloadMontage);
        if (AnimDuration <= 0.0f)
        {
            AnimDuration = 1.0f;
        }
        
        PlayGunAnimations(ReloadIronSightAnim);
        
        GetWorldTimerManager().SetTimer(TimerHandle_StopReload, this, &AGun::StopReload, AnimDuration, false);
        
        GetWorldTimerManager().SetTimer(TimerHandle_ReloadWeapon, this, &AGun::Reload, FMath::Max(0.1f, AnimDuration - 0.1f), false);
    }
    else
    {
        float AnimDuration = PlayCharacterAnimations(PlayerHipReloadMontage);
        if (AnimDuration <= 0.0f)
        {
            AnimDuration = 1.0f;
        }
        
        PlayGunAnimations(ReloadHipAnim);
        
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
        StopWeaponAnimation(PlayerReloadMontage);
    }
    
    else
    {
        StopWeaponAnimation(PlayerHipReloadMontage);
    }
    
}

void AGun::Reload()
{
    if(GetCurrentAmmoInClip() < MaxAmmoInClip)
    {
        
        
    }
    
    int32 AmmoDifference = FMath::Min(MaxAmmoInClip - CurrentAmmoInClip, MaxAmmo - CurrentAmmoInClip);

    if (AmmoDifference > 0)
    {
        CurrentAmmoInClip += AmmoDifference;
        MaxAmmo -= FMath::Clamp(MaxAmmo, 0, AmmoDifference);
    }
    
    bIsReloading = false;
    bCanFire = true;
}

//MARK: Weapon Effects
void AGun::PlayFireEffects(FVector TraceEnd)
{
    if(MuzzleSound)
    {
        UGameplayStatics::SpawnSoundAttached(MuzzleSound, Mesh, MuzzleFlashSocketName);
    }
    
    if(ImpactSound)
    {
        UGameplayStatics::PlaySoundAtLocation(GetWorld(), ImpactSound, TraceEnd);
    }
    if(MuzzleFlash)
    {
        UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, Mesh, MuzzleFlashSocketName);
    }
    
    if (TracerEffect)
    {
        FVector MuzzleLocation = Mesh->GetSocketLocation(MuzzleFlashSocketName);
        UParticleSystemComponent* TracerComp = UGameplayStatics::SpawnEmitterAttached(TracerEffect, Mesh, MuzzleFlashSocketName);
        if (TracerComp)
        {
            TracerComp->SetVectorParameter(TracerTargetName, TraceEnd);
        }
    }
    
    if(GunShellFX)
    {
        auto ShellEjectTransform = Mesh->GetSocketTransform(GunShellSocket);
        UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), GunShellFX, ShellEjectTransform);
    }
    
    APawn* MyOwner = Cast<APawn>(GetOwner());
    if (MyOwner)
    {
        APlayerController* PlayerController = Cast<APlayerController>(MyOwner->GetController());
        if (PlayerController)
        {
            PlayerController->ClientPlayCameraShake(FireCamShake);
        }
    }
    
    PlayGunAnimations(GunFireAnim);
    PlayCharacterAnimations(PlayerGunFireMontage);
}
//MARK: Weapon Impact Effects
void AGun::PlayImpactEffects(EPhysicalSurface MySurfaceType, FVector ImpactPoint)
{
    UParticleSystem* SelectedEffect = nullptr;
    switch (MySurfaceType)
    {
        case SurfaceType1: "BodyImpact";
            SelectedEffect = BodyImpactEffect;
            break;
        case SurfaceType2: "Metal";
            SelectedEffect = MetalImpactEffect;
            break;
        default:
            SelectedEffect = ImpactEffect;
            break;
    }
    
    if (SelectedEffect)
    {
        FVector MuzzleLocation = Mesh->GetSocketLocation(MuzzleFlashSocketName);
        
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

void AGun::OnEquip(bool bPlayAnimation)
{
    bPendingEquip = true;
    
   // AttachMeshToPawn(StorageSlot);
    if (bPlayAnimation)
    {
        float Duration = PlayCharacterAnimations(EquipAnim);
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
        StopWeaponAnimation(EquipAnim);
        bPendingEquip = false;

        GetWorldTimerManager().ClearTimer(EquipFinishedTimerHandle);
    }
    if (bIsReloading)
    {
        if(IsPlayerAiming() == true)
        {
            StopWeaponAnimation(PlayerReloadMontage);
        }
        else
        {
             StopWeaponAnimation(PlayerHipReloadMontage);
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
    if (CurrentAmmoInClip <= 0 && CanReload())
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
    Mesh->SetHiddenInGame(true);
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
