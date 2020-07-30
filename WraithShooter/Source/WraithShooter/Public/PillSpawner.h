// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PillSpawner.generated.h"

class AMagicPill;
class UParticleSystem;
class UDecalComponent;
class USphereComponent;

UCLASS()
class WRAITHSHOOTER_API APillSpawner : public AActor
{
    GENERATED_BODY()
    
public:	
    // Sets default values for this actor's properties
    APillSpawner();
    
private:
    
    UPROPERTY()
    AMagicPill* PillInstance;
    
    UPROPERTY(VisibleAnywhere, Category = Spawning)
    USphereComponent* SphereComp;
    
    UPROPERTY(VisibleAnywhere, Category = Spawning)
    UDecalComponent* DecalComp;
    
    UPROPERTY(EditInstanceOnly, Category = "PickupActor")
    float CooldownDuration;
    
    FTimerHandle TimerHandle_RespawnTimer;
    
    void SpawnPill();
    
    virtual void NotifyActorBeginOverlap(AActor* otherActor) override;
    
    virtual void NotifyActorEndOverlap(AActor* otherActor) override;
    
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    
    UPROPERTY(EditAnywhere, Category = Spawning)
    TSubclassOf<AMagicPill> ItemToSpawn;
    
public:
    
    //MARK: Custom Events
    //Declare custom Event for pill spawner
    DECLARE_EVENT(APillSpawner, FPlayerEntered);
    
    //Declare an event using above Signature
    FPlayerEntered OnPlayerEntered;

public:
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Spawning)
    UParticleSystem* PillFX;
    
};
