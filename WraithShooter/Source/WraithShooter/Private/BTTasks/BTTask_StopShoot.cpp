// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTasks/BTTask_StopShoot.h"
#include "AIController.h"
#include "ShooterCharacter.h"


UBTTask_StopShoot::UBTTask_StopShoot()
{
    NodeName = TEXT("StopShooting");
}

EBTNodeResult::Type UBTTask_StopShoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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
    
    Character->StopAim();
    Character->StopShoot();
    
    return EBTNodeResult::Succeeded;
}
