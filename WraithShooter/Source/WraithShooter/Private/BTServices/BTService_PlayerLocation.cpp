// Fill out your copyright notice in the Description page of Project Settings.


#include "BTServices/BTService_PlayerLocation.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Pawn.h"
#include "ShooterAIController.h"

UBTService_PlayerLocation::UBTService_PlayerLocation()
{
    NodeName = TEXT("Update Player Location");
}

void UBTService_PlayerLocation::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
    
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    
    AShooterAIController* AIPlayer = Cast<AShooterAIController>(OwnerComp.GetAIOwner());
    
    if(PlayerPawn == nullptr) {return;}
    
    if(AIPlayer == nullptr) {return;}
    
   /*FVector PlayerPosition = OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Vector(AIPlayer->NPCKeyId);
    
    if(AIPlayer)
    {
        AIPlayer->MoveToLocation(PlayerPosition, 200.f, true, true, false, true, 0, true);
        return EBTNodeResult::Succeeded;
    }
    
    else
    {
        return EBTNodeResult::Failed;
    }
    
    return EBTNodeResult::Failed;
    */
    OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), PlayerPawn->GetActorLocation());
}

