// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "WraithShooterGameModeBase.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorKilled, AActor*, KilledPawn);

class AShooterCharacter;

//MARK: declare delegate
DECLARE_DELEGATE(FStandardDelegateSignature);

UCLASS()
class WRAITHSHOOTER_API AWraithShooterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
    // Virtual function to get pawn kill created manually
   virtual void PawnKilled(APawn* PawnKilled);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Player)
    AShooterCharacter* SCharacter;
    
    //MARK:Multiple object of same delegate
    FStandardDelegateSignature CharacterVisualEffectsDelegateStart;
    
    FStandardDelegateSignature CharacterVisualEffectsDelegateStop;
    
    UPROPERTY(BlueprintAssignable, Category = "GameMode")
    FOnActorKilled OnActorKilled;

};
