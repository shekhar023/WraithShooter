// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShooterPlayerController.generated.h"

class UUserWidget;

UCLASS()
class WRAITHSHOOTER_API AShooterPlayerController : public APlayerController
{
	GENERATED_BODY()
    
public:
    
    virtual void GameHasEnded(class AActor* EndGameFocus = nullptr, bool bIsWinner = false) override;
    
protected:
    
    virtual void BeginPlay() override;
    
private:
    
    //UUserWidget Instance
    UPROPERTY()
    UUserWidget* HUD;
    
    //Main HUD
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> HUDClass;
    
    //Lose Screen
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> LoseScreenClass;
    
    //Win Screen
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> WinScreenClass;
    
    //Restart Delay
    UPROPERTY(EditAnywhere)
    float RestartDelay = 5;
    
    //Timer to restart
    FTimerHandle RestartTimer;
    
};
