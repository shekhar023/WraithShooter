// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTaskNode_ClearBlackBoardValue.generated.h"

/**
 * 
 */
UCLASS()
class WRAITHSHOOTER_API UBTTaskNode_ClearBlackBoardValue : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
    UBTTaskNode_ClearBlackBoardValue();
    
protected:
    
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
