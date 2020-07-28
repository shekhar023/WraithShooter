// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicPill.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "PillSpawner.h"
#include "EngineUtils.h"

// Sets default values
AMagicPill::AMagicPill()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    PillEffect = 0.0f;
    
    PillMesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMeshComponent");
    auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
    
    if(MeshAsset.Object != nullptr)
    {
        PillMesh->SetStaticMesh(MeshAsset.Object);
    }

}

// Called when the game starts or when spawned
void AMagicPill::BeginPlay()
{
	Super::BeginPlay();
    PillMesh->SetSimulatePhysics(true);
    
    //setting up trigger event source
    auto Itr = TActorIterator<APillSpawner>(GetWorld());
    TriggerEventSource = *Itr;
    
    GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("%s is assigned to me"), *(TriggerEventSource->GetName()));
	
    if(TriggerEventSource != nullptr)
    {
        TriggerEventSource->OnPlayerEntered.AddUObject(this, &AMagicPill::OnTriggerEvent);
    }
}

// Called every frame
void AMagicPill::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMagicPill::OnTriggerEvent()
{
    PillEffect = FMath::RandRange(-150.f, 150.f);
    
    GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("%f is my new value!!!"), PillEffect));
}

float AMagicPill::GetPillEffect()
{
    return PillEffect;
}

