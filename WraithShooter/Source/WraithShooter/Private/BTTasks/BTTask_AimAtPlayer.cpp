// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTasks/BTTask_AimAtPlayer.h"
#include "AIController.h"
#include "ShooterCharacter.h"

UBTTask_AimAtPlayer::UBTTask_AimAtPlayer()
{
    NodeName = TEXT("Aim At Player");
}

EBTNodeResult::Type UBTTask_AimAtPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);
    
    if(OwnerComp.GetAIOwner() == nullptr)
    {
        return EBTNodeResult::Failed;
    }
    
    AShooterCharacter* Character = Cast<AShooterCharacter>(OwnerComp.GetAIOwner()->GetPawn());
    
    if(Character == nullptr)
    {
        return EBTNodeResult::Failed;
    }
    
    Character->Aim();
    
    return EBTNodeResult::Succeeded;
}

