// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "WraithShooterHUD.generated.h"

class UUserWidget;

UCLASS()
class WRAITHSHOOTER_API AWraithShooterHUD : public AHUD
{
	GENERATED_BODY()
protected:
    virtual void BeginPlay() override;
    
public:
    
    //UUserWidget Instance
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
    UUserWidget* HUD = nullptr;
    
    //Main HUD
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
    TSubclassOf<UUserWidget> HUDClass;
    
    UFUNCTION(BlueprintCallable, Category = Setup)
    void SetHUDReference(UUserWidget* HUDtoSet);
    
    UFUNCTION(BlueprintCallable, Category = Setup)
    UUserWidget* GetHUDReference() const;
    
};
