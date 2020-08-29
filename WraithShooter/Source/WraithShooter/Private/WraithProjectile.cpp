// Fill out your copyright notice in the Description page of Project Settings.


#include "WraithProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "Particles/ParticleSystem.h"
#include "DestructibleActor.h"
#include "DestructibleComponent.h"
#include "ShooterCharacter.h"
#include "DrawDebugHelpers.h"
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "TimerManager.h"
#include "ShooterCharacter.h"


// Sets default values
AWraithProjectile::AWraithProjectile()
{
    CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    CollisionComp->InitSphereRadius(50.0f);
    CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
    CollisionComp->OnComponentHit.AddDynamic(this, &AWraithProjectile::OnHit);
    
    CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.0f));
    CollisionComp->CanCharacterStepUpOn = ECB_No;
    
    RootComponent = CollisionComp;
    
    MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    MeshComp->SetupAttachment(CollisionComp);
    
    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
    ProjectileMovement->UpdatedComponent = CollisionComp;
    ProjectileMovement->InitialSpeed = 3000.f;
    ProjectileMovement->MaxSpeed = 3000.f;
    ProjectileMovement->bRotationFollowsVelocity = true;
    ProjectileMovement->bShouldBounce = true;
    
    ImpulseRadius = 500.0f;
    ImpulseStrength = 200.f;
    CollisionShapeRadius = 500.f;
    
    BaseDamage = 5.0f;
    MinimumDamage = 1.0f;
    DamageInnerRadius = 10.f;
    DamageOuterRadius = 100.f;
    DamageFallOff = 20.f;
    
    FXScale = 2.f;
}

// Called when the game starts or when spawned
void AWraithProjectile::BeginPlay()
{
    Super::BeginPlay();
}

void AWraithProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
    if((OtherActor != NULL) && (OtherActor != this) && (OtherComponent != NULL))
    {
        OnDetonate();
    }
}

void AWraithProjectile::ProjectileEffects()
{
    if (ExplosionSystem)
    {
        UNiagaraComponent* ExpolsionComp = UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ExplosionSystem, GetActorLocation());
    }
    
    if(ExplosionParticles)
    {
        UParticleSystemComponent* Explosion = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionParticles, GetActorTransform());
        Explosion->SetRelativeScale3D(FVector(FXScale));
    }
    
    UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExplosionSound, GetActorLocation());
}

void AWraithProjectile::OnDetonate()
{
    
    ProjectileEffects();
    
    TArray<FHitResult> HitActors;
    
    FVector StartTrace = GetActorLocation();
    FVector EndTrace = StartTrace;
    EndTrace.Z += 300.f;
    
    FCollisionShape CollisionShape;
    CollisionShape.ShapeType = ECollisionShape::Sphere;
    CollisionShape.SetSphere(CollisionShapeRadius);
    
    bool bHitSuccess = GetWorld()->SweepMultiByChannel(HitActors, StartTrace, EndTrace, FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel3, CollisionShape);
    
    if(bHitSuccess)
    {
        
        
        for(auto& Actors : HitActors)
        {
            UStaticMeshComponent* StaticMesh = Cast<UStaticMeshComponent>((Actors.GetActor()));
            ADestructibleActor* DestructibleMesh = Cast<ADestructibleActor>((Actors.GetActor()));
            AShooterCharacter* MyCharacter = Cast<AShooterCharacter>((Actors.GetActor()));
            
            if(StaticMesh)
            {
                StaticMesh->AddRadialImpulse(GetActorLocation(), ImpulseRadius, ImpulseStrength, ERadialImpulseFalloff::RIF_Constant, false);
            }
            if(DestructibleMesh)
            {
                DestructibleMesh->GetDestructibleComponent()->ApplyRadiusDamage(BaseDamage, StartTrace, DamageOuterRadius, ImpulseStrength, false);
            }
            
            if(MyCharacter)
            {
                
                UGameplayStatics::ApplyRadialDamageWithFalloff(GetWorld(), BaseDamage, MinimumDamage, GetActorLocation(), DamageInnerRadius, DamageOuterRadius, DamageFallOff, DamageType, TArray<AActor*>(), this);
            }
        }
    }
    AfterOnDetonate();
}
