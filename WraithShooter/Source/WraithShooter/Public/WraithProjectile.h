// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "GameFramework/Actor.h"
#include "ShooterCharacter.h"
#include "WraithProjectile.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class UProjectileMovementComponent;
class UParticleSystem;
class USoundBase;
class UNiagaraSystem;

UCLASS()
class WRAITHSHOOTER_API AWraithProjectile : public AActor
{
    GENERATED_BODY()
    
    
    
    UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
    UProjectileMovementComponent* ProjectileMovement;
    
    UPROPERTY(EditAnywhere, Category = Projectile)
    float FXScale;
    
    UPROPERTY(EditAnywhere, Category = Projectile)
    float Radius = 1000.f;
    
    UPROPERTY(EditAnywhere, Category = Projectile)
    float ImpulseRadius = 500;
    
    UPROPERTY(EditAnywhere, Category = Projectile)
    float ImpulseStrength = 500;
    
    UPROPERTY(EditAnywhere, Category = Projectile)
    float RadiusDamage = 50.f;
    
    UPROPERTY(EditAnywhere, Category = Projectile)
    float DamageRadius = 500.f;
    
    UPROPERTY(EditAnywhere, Category = Projectile)
    TSubclassOf < class UDamageType > DamageType;
    
    UPROPERTY(EditAnywhere, Category = Projectile)
    UNiagaraSystem* ExplosionSystem;
    
    UPROPERTY(EditAnywhere, Category = FX)
    UParticleSystem* ExplosionParticles;
    
    UPROPERTY(EditAnywhere, Category = FX)
    USoundBase* ExplosionSound;
    
public:	
    // Sets default values for this actor's properties
    AWraithProjectile();
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
    USphereComponent* CollisionComp;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
    UStaticMeshComponent* MeshComp;
    
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
    FORCEINLINE USphereComponent* GetCollisionComp() const { return CollisionComp; }
    
    FORCEINLINE UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
    
    FTimerHandle Destroy_Handle;
    
    void DestroyProjectile();
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
    float DestroyDelay;

    
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    
    UFUNCTION()
    void OnDetonate();
    
    AController* GetOwnerController() const;
   
};
