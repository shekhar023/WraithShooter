// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterPlayerController.h"
#include "TimerManager.h"
#include "ShooterCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "EngineUtils.h"
#include "HUD/WraithShooterHUD.h"


void AShooterPlayerController::BeginPlay()
{
    Super::BeginPlay();
    
}

void AShooterPlayerController::GameHasEnded(class AActor* EndGameFocus, bool bIsWinner)
{
    Super::GameHasEnded(EndGameFocus, bIsWinner);
    
    AWraithShooterHUD* HUDRef = Cast<AWraithShooterHUD>(GetHUD());
    if(HUDRef)
    {
        HUDRef->GetHUDReference()->RemoveFromViewport();
    }
    
    if(bIsWinner)
    {
        UUserWidget* WinScreen = CreateWidget(this, WinScreenClass);
        
        if(WinScreen != nullptr)
        {
            WinScreen->AddToViewport();
        }
    }
    else
    {
        UUserWidget* LoseScreen = CreateWidget(this, LoseScreenClass);
        
        if(LoseScreen != nullptr)
        {
            LoseScreen->AddToViewport();
        }
    }
    
    GetWorldTimerManager().SetTimer(RestartTimer, this, &APlayerController::RestartLevel, RestartDelay);
}

void AShooterPlayerController::OnTriggerEvent()
{
    UGameplayStatics::SetGamePaused(GetWorld(), true);
    
    WBPLearnedSkill = CreateWidget(this, WBPLearnedSkillClass);
    
    if(WBPLearnedSkill != nullptr)
    {
        WBPLearnedSkill->AddToViewport();
    }
}
