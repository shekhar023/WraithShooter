// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PillSpawner.generated.h"
class AMagicPill;
class UBoxComponent;
class UParticleSystem;

UCLASS()
class WRAITHSHOOTER_API APillSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APillSpawner();
    
    //Declare custom Event for pill spawner
    DECLARE_EVENT(APillSpawner, FPlayerEntered);
    
    //Declare an event using above Signature
    FPlayerEntered OnPlayerEntered;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    
    UPROPERTY(EditAnywhere, Category = Spawning)
    TSubclassOf<AMagicPill> ItemToSpawn;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
    UFUNCTION(Blueprintpure, Category = Spawning)
    FVector GetRandomPointInValue();
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Spawning)
    UParticleSystem* PillFX;
    
private:
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Spawning, meta = (AllowPrivateAccess = "true"))
    UBoxComponent* SpawningVolume;
    
    void SpawnPill();
    
    virtual void NotifyActorBeginOverlap(AActor* otherActor) override;
    
    virtual void NotifyActorEndOverlap(AActor* otherActor) override;
    
};
