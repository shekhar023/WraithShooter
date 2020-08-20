// Fill out your copyright notice in the Description page of Project Settings.


#include "WraithProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "Particles/ParticleSystem.h"
#include "DestructibleActor.h"
#include "DestructibleComponent.h"
#include "ShooterCharacter.h"
#include "Math/Quat.h"
#include "DrawDebugHelpers.h"


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
    
    InitialLifeSpan = 3.0f;
    
    FXScale = 2.f;
    
    
}

// Called when the game starts or when spawned
void AWraithProjectile::BeginPlay()
{
	Super::BeginPlay();
    
    FTimerHandle Handle;
    GetWorldTimerManager().SetTimer(Handle, this, &AWraithProjectile::OnDetonate, 5.f, false);
	
}

void AWraithProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
    if((OtherActor != NULL) && (OtherActor != this) && (OtherComponent != NULL))
    {
        OnDetonate();
    }
}

AController* AWraithProjectile::GetOwnerController() const
{
    APawn* OwnerPawn = Cast<APawn>(GetOwner());
    if (OwnerPawn == nullptr)
        return nullptr;
    return OwnerPawn->GetController();
}

void AWraithProjectile::OnDetonate()
{
    UParticleSystemComponent* Explosion = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionParticles, GetActorTransform());
    Explosion->SetRelativeScale3D(FVector(FXScale));
    
    UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExplosionSound, GetActorLocation());
    
    TArray<FHitResult> HitActors;
    
    FVector StartTrace = GetActorLocation();
    FVector EndTrace = StartTrace;
    EndTrace.Z += 300.f;
    
    FCollisionShape CollisionShape;
    CollisionShape.ShapeType = ECollisionShape::Sphere;
    CollisionShape.SetSphere(Radius);
    
    DrawDebugSphere(GetWorld(), GetActorLocation(), CollisionShape.GetSphereRadius(), 50, FColor::Cyan, true);
    
    bool bHitSuccess = GetWorld()->SweepMultiByChannel(HitActors, StartTrace, EndTrace, FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel3, CollisionShape);
    
    if(bHitSuccess)
    {
        for(auto& Actors : HitActors)
        {
            UStaticMeshComponent* SM = Cast<UStaticMeshComponent>((Actors.GetActor()));
            ADestructibleActor* DA = Cast<ADestructibleActor>((Actors.GetActor()));
            AShooterCharacter* MyCharacter = Cast<AShooterCharacter>((Actors.GetActor()));
            
            if(SM)
            {
                SM->AddRadialImpulse(GetActorLocation(), ImpulseRadius, ImpulseStrength, ERadialImpulseFalloff::RIF_Constant, true);
            }
            if(DA)
            {
                DA->GetDestructibleComponent()->ApplyRadiusDamage(RadiusDamage, Actors.ImpactPoint, DamageRadius, ImpulseStrength, false);
            }
            else if(MyCharacter)
            {
                UGameplayStatics::ApplyRadialDamage(GetWorld(), MyCharacter->FireballAttributes.Damage, GetActorLocation(), MyCharacter->FireballAttributes.DamageRadius, MyCharacter->FireballAttributes.DamageType, TArray<AActor*>(), this);
                
                UE_LOG(LogTemp, Warning, TEXT("FireBall Damage and damage radius: %f and %f"),MyCharacter->FireballAttributes.Damage, MyCharacter->FireballAttributes.DamageRadius);
            }
        }
    }
    
    Destroy();
    
}
