// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTasks/BTTaskNode_ClearBlackBoardValue.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTaskNode_ClearBlackBoardValue::UBTTaskNode_ClearBlackBoardValue()
{
    NodeName = TEXT("Clear BlackBoard Value");
}

EBTNodeResult::Type UBTTaskNode_ClearBlackBoardValue::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);
    
    OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
    
    return EBTNodeResult::Succeeded;
}
