// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleRoyalGameMode.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "WraithShooter/WraithShooterGameModeBase.h"
#include "ShooterAIController.h"
#include "ShooterPlayerController.h"
#include "ShooterPlayerState.h"
#include "ShooterCharacter.h"
#include "WraithGameState.h"

void ABattleRoyalGameMode::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);
    
    AlivePlayers.Add(Cast<AShooterPlayerController>(NewPlayer));
}

void ABattleRoyalGameMode::PlayerDied(class AShooterCharacter* Killed, class AShooterCharacter* Killer)
{
    if(Killed)
    {
        if(AShooterPlayerController* Controller = Cast<AShooterPlayerController>(Killed->GetController()))
        {
            AlivePlayers.RemoveSingle(Controller);
        }
        
        if(AlivePlayers.Num() == 1 && AlivePlayers.IsValidIndex(0))
        {
           auto WinnerState = Cast<AShooterPlayerState>(AlivePlayers[0]->PlayerState);
            WinnerFound(WinnerState);
        }
    }
}

void ABattleRoyalGameMode::WinnerFound(AShooterPlayerState* Winner)
{
    if(AWraithGameState* GameState = GetGameState<AWraithGameState>())
    {
        GameState->Winner = Winner;
    }
}


