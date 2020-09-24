// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/PickupActor.h"
#include "WeaponPickup.generated.h"

class AGun;

UCLASS()
class WRAITHSHOOTER_API AWeaponPickup : public APickupActor
{
	GENERATED_BODY()
    
    AWeaponPickup();
    
public:

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponClass")
    TSubclassOf<AGun> WeaponClass;
    
};
