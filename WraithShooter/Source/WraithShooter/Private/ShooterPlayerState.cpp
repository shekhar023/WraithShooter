// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterPlayerState.h"
#include "ShooterCharacter.h"

AShooterPlayerState::AShooterPlayerState()
{
    ScoreValue = 0.f;
}
void AShooterPlayerState::AddScore(float DeltaScore)
{
    ScoreValue += DeltaScore;
}

