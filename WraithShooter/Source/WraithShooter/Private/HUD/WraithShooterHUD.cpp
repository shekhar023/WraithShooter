// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/WraithShooterHUD.h"
#include "Blueprint/UserWidget.h"
#include "EngineUtils.h"

void AWraithShooterHUD::BeginPlay()
{
    Super::BeginPlay();
    
}
 void AWraithShooterHUD::SetHUDReference(UUserWidget* HUDtoSet)
{
    HUD = HUDtoSet;
}

UUserWidget* AWraithShooterHUD::GetHUDReference() const
{
    return HUD;
}
