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
class AShooterCharacter;
class UBoxComponent;

UCLASS()
class WRAITHSHOOTER_API AWraithProjectile : public AActor
{
    GENERATED_BODY()
    
    
public:
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileRadialDamageAttributes)
    bool bApplyDamageOff;
    
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = Projectile)
    UProjectileMovementComponent* ProjectileMovement;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileImpulse)
    float ImpulseRadius;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileImpulse)
    float ImpulseStrength;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileRadialDamageAttributes)
    float CollisionShapeRadius;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileRadialDamageAttributes)
    float BaseDamage;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileRadialDamageAttributes)
    float MinimumDamage;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileRadialDamageAttributes)
    float DamageInnerRadius;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileRadialDamageAttributes)
    float DamageOuterRadius;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileRadialDamageAttributes)
    float DamageFallOff;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileRadialDamageAttributes)
    TSubclassOf < class UDamageType > DamageType;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileFX)
    float FXScale;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileFX)
    UNiagaraSystem* ExplosionSystem;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileFX)
    UParticleSystem* ExplosionParticles;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileFX)
    USoundBase* ExplosionSound;
    
public:	
    // Sets default values for this actor's properties
    AWraithProjectile();
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
    USphereComponent* CollisionComp;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
    UStaticMeshComponent* MeshComp;
    
    
    UFUNCTION(BlueprintCallable, Category = Projectile)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
    FORCEINLINE USphereComponent* GetCollisionComp() const { return CollisionComp; }
    
    FORCEINLINE UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
    
    UFUNCTION(BlueprintCallable, Category = Projectile)
    void OnDetonate();
    
    UFUNCTION(BlueprintImplementableEvent, Category = Projectile)
    void AfterOnDetonate();
    
    UFUNCTION(BlueprintCallable, Category = Projectile)
    void ProjectileEffects();
    
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    
};
