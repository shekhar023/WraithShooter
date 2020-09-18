// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "WraithGameState.generated.h"

/**
 * 
 */
class AShooterPlayerState;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWinnerFound);

UCLASS()
class WRAITHSHOOTER_API AWraithGameState : public AGameStateBase
{
	GENERATED_BODY()
    
    
public:
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> & OutLifetimeProps) const override;
    //The Winner of the Match
    UPROPERTY(ReplicatedUsing = OnRep_Winner, Transient, BlueprintReadOnly, Category = GameState)
    class AShooterPlayerState* Winner = nullptr;
    
    UFUNCTION()
    void OnRep_Winner();
    
    UPROPERTY(BlueprintAssignable, Category = GameState)
    FWinnerFound OnWinnerFound;
	
};
