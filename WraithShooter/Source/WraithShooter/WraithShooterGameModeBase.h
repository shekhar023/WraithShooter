// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "WraithShooterGameModeBase.generated.h"

/**
 * 
 */
//declare delegate
DECLARE_DELEGATE(FStandardDelegateSignature);

UCLASS()
class WRAITHSHOOTER_API AWraithShooterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
   virtual void PawnKilled(APawn* PawnKilled);
    
    FStandardDelegateSignature CharacterVisualEffectsDelegateStart;
    
    FStandardDelegateSignature CharacterVisualEffectsDelegateStop;
};
