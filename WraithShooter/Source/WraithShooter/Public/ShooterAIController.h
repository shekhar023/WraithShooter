// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

class UBehaviorTree;
class UBlackboardComponent;
class UBehaviorTreeComponent;

UCLASS()
class WRAITHSHOOTER_API AShooterAIController : public AAIController
{
    GENERATED_BODY()
    
private:
    AShooterAIController();
    
    UPROPERTY(EditAnywhere)
    UBehaviorTree* AIBehavior;
    
    UPROPERTY(EditAnywhere)
    UBehaviorTreeComponent* AIBehaviorComp;
    
    UPROPERTY()
    UBlackboardComponent* BBComp;
    
    uint8 NPCKeyId;
    
protected:
    virtual void OnPossess(APawn* MyPawn) override;
    
    virtual void BeginPlay() override;
    
public:
    
    virtual void Tick(float DeltaTime) override;
    
    bool IsDead() const;
};
