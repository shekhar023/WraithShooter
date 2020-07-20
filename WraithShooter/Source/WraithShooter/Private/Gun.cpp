// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "ShooterCharacter.h"


// Sets default values
AGun::AGun()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    
    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    SetRootComponent(Root);
    
    Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    Mesh->SetupAttachment(Root);
    
    MaxRange = 10000.f;
    RateOfFire = 600;
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

// Called every frame
void AGun::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
}

 bool AGun::GetbCanFire() const
{
    return bCanFire;
}

void AGun::PullTrigger()
{
    
    CalculateAmmo();
    
    if(bCanFire)
    {
        if(MuzzleFlash)
        {
            UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, Mesh, TEXT("MuzzleFlashSocket"));
        }
        
        if(MuzzleSound)
        {
            UGameplayStatics::SpawnSoundAttached(MuzzleSound, Mesh, TEXT("MuzzleFlashSocket"));
        }
        
        FHitResult Hit;
        FVector ShotDirection;
        
        bool bSuccess = GunTrace(Hit, ShotDirection);
        
        if(ImpactSound)
        {
            UGameplayStatics::PlaySoundAtLocation(GetWorld(), ImpactSound, Hit.Location);
        }
        
        if(bSuccess)
        {
            if(ImpactEffect)
            {
                UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, Hit.Location, ShotDirection.Rotation());
            }
            
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

bool AGun::GunTrace(FHitResult& Hit, FVector& ShotDirection)
{
    AController* OwnerController = GetOwnerController();
    if(!OwnerController){return false;}
    
    FVector Location;
    FRotator Rotation;
    
    OwnerController->GetPlayerViewPoint(Location, Rotation);
    
    ShotDirection = -Rotation.Vector();
    
    FVector EndPoint = Location + Rotation.Vector() * MaxRange;
    
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);
    Params.AddIgnoredActor(GetOwner());
    
    return GetWorld()->LineTraceSingleByChannel(Hit, Location, EndPoint, ECollisionChannel::ECC_GameTraceChannel1, Params);
}

AController* AGun::GetOwnerController() const
{
    APawn* OwnerPawn = Cast<APawn>(GetOwner());
    if (OwnerPawn == nullptr)
        return nullptr;
    return OwnerPawn->GetController();
}

int AGun::GetCurrentAmmoInClip() const
{
    return AmmoInClip;
}

int AGun::GetMaxAmmo() const
{
    return MaxAmmo;
}

void AGun::CalculateAmmo()
{
    AShooterCharacter* MyCharacter = Cast<AShooterCharacter>(GetOwner());
    
    if(MyCharacter == nullptr)
    {
        return;
    }
    
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
    else
    {
        bCanFire = false;
    }
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

bool AGun::GetbCanReload() const
{
    return bCanReload;
}

void AGun::Reload()
{
    if(bCanReload == false){return;}
    
    if(MaxAmmo != 0 && AmmoInClip < ClipSize)
    {
        int AmmoDifference = ClipSize - AmmoInClip;
        
        AmmoInClip += AmmoDifference;
        
        if(MaxAmmo > 0 && MaxAmmo >= AmmoDifference)
        {
            MaxAmmo -= AmmoDifference;
        }
        
        bCanReload = true;
    }
    else
    {
        bCanReload = false;
    }
}
