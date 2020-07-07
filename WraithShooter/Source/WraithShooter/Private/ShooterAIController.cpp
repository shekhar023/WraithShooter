// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"

void AShooterAIController::BeginPlay()
{
    Super::BeginPlay();
    
    if(AIBehavior != nullptr)
    {
        RunBehaviorTree(AIBehavior);
        
        APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
        
        GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
    }
    
}

void AShooterAIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
     APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    
    bool CanSeePlayerPawn = LineOfSightTo(PlayerPawn);
    
    if(CanSeePlayerPawn)
    {
       //Setting PlayerLocation
       GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
       //Setting LastKnownLocation
       GetBlackboardComponent()->SetValueAsVector(TEXT("LastKnownPlayerLocation"), PlayerPawn->GetActorLocation());
    }
    else
    {
       //clear the player location
        GetBlackboardComponent()->ClearValue(TEXT("PlayerLocation"));
    }
}
