// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/PickupActor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "EngineUtils.h"

// Sets default values
APickupActor::APickupActor()
{
    MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    MeshComp->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);
    RootComponent = MeshComp;
    
    SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    SphereComp->SetSphereRadius(75.0f);
    SphereComp->SetupAttachment(MeshComp);
}

// Called when the game starts or when spawned
void APickupActor::BeginPlay()
{
	Super::BeginPlay();
	
}

UStaticMeshComponent* APickupActor::GetMeshComponent()
{
    return MeshComp;
}
