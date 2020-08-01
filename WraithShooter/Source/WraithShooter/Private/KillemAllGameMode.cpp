// Fill out your copyright notice in the Description page of Project Settings.


#include "KillemAllGameMode.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "WraithShooter/WraithShooterGameModeBase.h"
#include "ShooterAIController.h"

void AKillemAllGameMode::PawnKilled(APawn* PawnKilled)
{
    Super::PawnKilled(PawnKilled);
    
    UE_LOG(LogTemp, Warning, TEXT("A Pawn is been killed!"));
    
     APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
    
    AWraithShooterGameModeBase* MyGameMode = Cast<AWraithShooterGameModeBase>(GetWorld()->GetAuthGameMode());
    if(MyGameMode)
    {
        UE_LOG(LogTemp, Warning, TEXT("Bradcasting"));
        MyGameMode->OnActorKilled.Broadcast(PawnKilled);
    }
    
   
    if(PlayerController != nullptr)
    {

        EndGame(false);
    }
    
    for(AShooterAIController* Controller : TActorRange<AShooterAIController>(GetWorld()))
    {
        if(!Controller->IsDead())
        {
            return;
        }
    }

    EndGame(true);
}

void AKillemAllGameMode::EndGame(bool bIsPlayerWinner)
{
    for(AController* Controller : TActorRange<AController>(GetWorld()))
    {
        bool bIsWinner = Controller->IsPlayerController() == bIsPlayerWinner;
      
        Controller->GameHasEnded(Controller->GetPawn(), bIsWinner);
    }
}
