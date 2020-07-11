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
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> HUDClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> LoseScreenClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> WinScreenClass;
    
    UPROPERTY(EditAnywhere)
    float RestartDelay = 5;
    
    FTimerHandle RestartTimer;
    
    UUserWidget* HUD;
	
};
