// Fill out your copyright notice in the Description page of Project Settings.


#include "BTServices/BTService_PlayerLocationIfSeen.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "AIController.h"
#include "ShooterCharacter.h"


UBTService_PlayerLocationIfSeen::UBTService_PlayerLocationIfSeen()
{
    NodeName = TEXT("Player Location If Seen");

}

void UBTService_PlayerLocationIfSeen::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
    
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    
    if(PlayerPawn == nullptr) {return;}

    if(OwnerComp.GetAIOwner() == nullptr)
    {
        return;
    }
    
    bool CanSeePlayer = OwnerComp.GetAIOwner()->LineOfSightTo(PlayerPawn);
    
    if(CanSeePlayer)
    {
        OwnerComp.GetBlackboardComponent()->SetValueAsObject(GetSelectedBlackboardKey(), PlayerPawn);
    }
    else
    {
        OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
    }
}
