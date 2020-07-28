// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MagicPill.generated.h"

class UStaticMeshComponent;
class APillSpawner;

UCLASS()
class WRAITHSHOOTER_API AMagicPill : public AActor
{
	GENERATED_BODY()
	
    //The trigger source
    APillSpawner* TriggerEventSource;
public:	
	// Sets default values for this actor's properties
	AMagicPill();
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Components)
    UStaticMeshComponent* PillMesh;
    
    UFUNCTION(Blueprintpure)
    float GetPillEffect();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Values)
    float PillEffect;
    
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
    
    UFUNCTION()
    void OnTriggerEvent();

};
