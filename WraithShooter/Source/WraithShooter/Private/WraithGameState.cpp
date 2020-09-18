// Fill out your copyright notice in the Description page of Project Settings.


#include "WraithGameState.h"
#include "Net/UnrealNetwork.h"
#include "ShooterPlayerState.h"

void AWraithGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> & OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWraithGameState, Winner);
}

void AWraithGameState::OnRep_Winner()
{
    OnWinnerFound.Broadcast();
}
