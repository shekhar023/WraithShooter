// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "WraithShooterGameModeBase.generated.h"

/**
 * 
 */
//MARK: declare delegate
DECLARE_DELEGATE(FStandardDelegateSignature);

UCLASS()
class WRAITHSHOOTER_API AWraithShooterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
    // Virtual function to get pawn kill created manually
   virtual void PawnKilled(APawn* PawnKilled);
    
    //MARK:Multiple object of smae delegate
    FStandardDelegateSignature CharacterVisualEffectsDelegateStart;
    
    FStandardDelegateSignature CharacterVisualEffectsDelegateStop;
};
