// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WraithUIInterface.h"
#include "PickupActor.generated.h"

class UStaticMeshComponent;
class USphereComponent;

UCLASS()
class WRAITHSHOOTER_API APickupActor : public AActor, public IWraithUIInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PickupActor)
    UStaticMeshComponent* MeshComp;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PickupActor)
    USphereComponent* SphereComp;
    
    UFUNCTION()
    UStaticMeshComponent* GetMeshComponent();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PickupActor)
    FText InteractMessage;

};
