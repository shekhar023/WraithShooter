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
    
public:	
    // Sets default values for this actor's properties
    AMagicPill();
    
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Components)
    UStaticMeshComponent* PillMesh;
    
    //MARK: Recieve call from OnPlayerenterd custom event to trigger functionality here
    APillSpawner* TriggerEventSource;
    
    //MARK: OnPlayerenterd signature  custom event Implementation
    UFUNCTION()
    void OnTriggerEvent();
    
    /* Time between powerup ticks */
    UPROPERTY(EditDefaultsOnly, Category = "Powerups")
    float PowerupInterval;
    
    /* Total times we apply the powerup effect */
    UPROPERTY(EditDefaultsOnly, Category = "Powerups")
    int32 TotalNoOfTicks;
    
    FTimerHandle TimerHandle_PowerupTick;
    
    // Total number of ticks applied
    int32 TicksProcessed;
    
    UFUNCTION()
    void OnTickPowerup();
    
    // Keeps state of the power-up
    UPROPERTY()
    bool bIsPowerupActive;
    
    UFUNCTION()
    void OnRep_PowerupActive();
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
    void OnPowerupStateChanged(bool bNewIsActive);
    
public:
    
    bool GetIsPowerupActive() const;
    
    void ActivatePowerup(AActor* ActiveFor);
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
    void OnActivated(AActor* ActiveFor);
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
    void OnPowerupTicked();
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
    void OnExpired();
};
