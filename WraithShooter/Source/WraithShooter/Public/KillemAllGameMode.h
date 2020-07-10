// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WraithShooter/WraithShooterGameModeBase.h"
#include "KillemAllGameMode.generated.h"

/**
 * 
 */
UCLASS()
class WRAITHSHOOTER_API AKillemAllGameMode : public AWraithShooterGameModeBase
{
	GENERATED_BODY()
	
public:
      virtual void PawnKilled(APawn* PawnKilled) override;
    
private:
    
    void EndGame(bool bIsPlayerWinner);
};
