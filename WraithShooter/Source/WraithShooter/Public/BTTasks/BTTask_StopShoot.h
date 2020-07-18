// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_StopShoot.generated.h"

/**
 * 
 */
UCLASS()
class WRAITHSHOOTER_API UBTTask_StopShoot : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
    
    UBTTask_StopShoot();
    
protected:
    
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
