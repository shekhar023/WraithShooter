// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "WraithShooterGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class WRAITHSHOOTER_API AWraithShooterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
   virtual void PawnKilled(APawn* PawnKilled);
};
