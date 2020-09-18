// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WraithShooter/WraithShooterGameModeBase.h"
#include "BattleRoyalGameMode.generated.h"

/**
 *
 */
class AShooterPlayerState;
UCLASS()
class WRAITHSHOOTER_API ABattleRoyalGameMode : public AWraithShooterGameModeBase
{
    GENERATED_BODY()
    
public:
    
    virtual void PostLogin(APlayerController* NewPlayer) override;
    
    void PlayerDied(class AShooterCharacter* Killed, class AShooterCharacter* Killer);
    
    void WinnerFound(AShooterPlayerState* Winner);
    
    UPROPERTY(Transient)
    TArray<class AShooterPlayerController*> AlivePlayers;
    
    
};
