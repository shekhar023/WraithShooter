// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "ShooterCharacter.h"


AShooterAIController::AShooterAIController()
{
    AIBehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviourComponent"));
    
    BBComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackBoardComponent"));
}

void AShooterAIController::OnPossess(APawn* MyPawn)
{
    Super::OnPossess(MyPawn);
    
    AShooterCharacter* ControlledCharacter = Cast<AShooterCharacter>(MyPawn);
    
    if(ControlledCharacter && ControlledCharacter->ShooterBT)
    {
        BBComp->InitializeBlackboard(*ControlledCharacter->ShooterBT->BlackboardAsset);
        
        NPCKeyId = BBComp->GetKeyID("StartLocation");
        
        AIBehaviorComp->StartTree(*ControlledCharacter->ShooterBT);
    }
}
void AShooterAIController::BeginPlay()
{
    Super::BeginPlay();
        
    BBComp->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
}

bool AShooterAIController::IsDead() const
{
    AShooterCharacter* ControlledCharacter = Cast<AShooterCharacter>(GetPawn());
    
    if(ControlledCharacter != nullptr)
    {
        
        return ControlledCharacter->IsDead();
        
    }
    return true;
}

void AShooterAIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
}
