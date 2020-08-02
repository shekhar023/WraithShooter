// Fill out your copyright notice in the Description page of Project Settings.
#include "Gun.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "ShooterCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimInstance.h"

// Sets default values
AGun::AGun()
{
    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    SetRootComponent(Root);
    
    Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    Mesh->SetupAttachment(Root);
    
    MuzzleFlashSocketName = TEXT("MuzzleFlashSocket");
    TracerTargetName = "Target";
    MaxRange = 10000.f;
    RateOfFire = 600;
    BulletSpread = 2.0f;
    Damage = 10.f;
    MaxAmmo = 250;
    ClipSize = 30;
    AmmoInClip = 30;
    
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
    Super::BeginPlay();
    TimeBetweenShots = 60 / RateOfFire;
}

bool AGun::GetbCanFire() const
{
    return bCanFire;
}

int AGun::GetCurrentAmmoInClip() const
{
    return AmmoInClip;
}

int AGun::GetMaxAmmo() const
{
    return MaxAmmo;
}

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

void AGun::StartAutomaticFire()
{
    float FirstDelay = FMath::Max(LastFireTime + TimeBetweenShots - GetWorld()->TimeSeconds, 0.0f);
    GetWorldTimerManager().SetTimer(TimerHandle_TimeBetweenShots, this, &AGun::PullTrigger, TimeBetweenShots, true, FirstDelay);
}

void AGun::StopAutomaticFire()
{
    GetWorldTimerManager().ClearTimer(TimerHandle_TimeBetweenShots);
}


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

void AGun::PullTrigger()
{
    CalculateAmmo();
    
    if(bCanFire)
    {
        FHitResult Hit;
        FVector ShotDirection;
        bool bSuccess = GunTrace(Hit, ShotDirection);
        SurfaceType = SurfaceType_Default;
        
        if(bSuccess)
        {
            PlayFireEffects(Hit.ImpactPoint);
            PlayFireAnimation(GunFireMontage);
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
    
    APawn* MyOwner = Cast<APawn>(GetOwner());
    if (MyOwner)
    {
        APlayerController* PlayerController = Cast<APlayerController>(MyOwner->GetController());
        if (PlayerController)
        {
            PlayerController->ClientPlayCameraShake(FireCamShake);
        }
    }
}

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



void AGun::CalculateAmmo()
{
    AShooterCharacter* MyCharacter = Cast<AShooterCharacter>(GetOwner());
    if(MyCharacter == nullptr){return;}
    
    if(MyCharacter->GetbIsAiming() == true)
    {
        if(GetCurrentAmmoInClip() > 0)
        {
            bCanFire = true;
            AmmoInClip--;
        }
        else
        {
            bCanFire = false;
        }
    }
    
    if(MyCharacter->GetbIsAiming() == false) {bCanFire = false;}
}

void AGun::Reload()
{
    AShooterCharacter* MyCharacter = Cast<AShooterCharacter>(GetOwner());
    if(MyCharacter == nullptr){return;}
    
    int AmmoDifference = FMath::Min(ClipSize - AmmoInClip, MaxAmmo - AmmoInClip);
    
    if(MaxAmmo != 0 && AmmoInClip < ClipSize && AmmoDifference <= MaxAmmo)
    {
        if(MyCharacter->GetbIsAiming() == true)
        {
            
            if(ReloadAnim)
            {
                bCanFire = false;
                MyCharacter->StopShoot();
                MyCharacter->PlayAnimMontage(ReloadAnim);
            }
        }
        else if (MyCharacter->GetbIsAiming() == false)
        {
            if(HipReloadAnim)
            {
                bCanFire = false;
                MyCharacter->StopShoot();
                MyCharacter->PlayAnimMontage(HipReloadAnim);
            }

        }
        
        UE_LOG(LogTemp, Warning, TEXT("AmmoDifference : %d"), AmmoDifference);
        AmmoInClip += AmmoDifference;
        MaxAmmo -=AmmoDifference;
        UE_LOG(LogTemp, Warning, TEXT("MaxAmmo : %d"), MaxAmmo);
    }
    
}

void AGun::OnEquip(const AGun* LastWeapon)
{
    AttachMeshToPawn();
}

void AGun::OnUnEquip()
{
    DetachMeshFromPawn();
    StopAutomaticFire();
}

void AGun::AttachMeshToPawn()
{
    DetachMeshFromPawn();
    
    AShooterCharacter* MyCharacter = Cast<AShooterCharacter>(GetOwner());
    
    if(MyCharacter == nullptr){return;}
    
    FName GunAttachPoint = MyCharacter->GetWeaponAttachPoint();
    Mesh->AttachToComponent(MyCharacter->GetPawnMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, GunAttachPoint);
    Mesh->SetHiddenInGame(false);
    
}

void AGun::DetachMeshFromPawn()
{
    Mesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
    Mesh->SetHiddenInGame(true);
}

void AGun::PlayFireAnimation(UAnimMontage* FireAnim)
{
     AShooterCharacter* MyCharacter = Cast<AShooterCharacter>(GetOwner());
    if(MyCharacter == nullptr){return;}
    
    if(FireAnim)
    {
         MyCharacter->PlayAnimMontage(FireAnim);
       /* GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Blue, FString::Printf(TEXT("FireAnimeReturned")));
        UAnimInstance* AnimInstance = MyCharacter->GetMesh()->GetAnimInstance();
        if (AnimInstance != NULL)
        {
            GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Blue, FString::Printf(TEXT("AnimeInstace is okay")));
            AnimInstance->Montage_Play(FireAnim, 1.f);
        }*/
}
    
}
