// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ShooterPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class WRAITHSHOOTER_API AShooterPlayerState : public APlayerState
{
	GENERATED_BODY()
    
    AShooterPlayerState();
 
public:
    
    UFUNCTION(BlueprintCallable, Category = UpdateScore)
    void AddScore(float DeltaScore);
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float ScoreValue;
    	
};
