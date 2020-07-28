// Fill out your copyright notice in the Description page of Project Settings.


#include "PillSpawner.h"
#include "MagicPill.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "ShooterCharacter.h"
#include "WraithShooter/WraithShooterGameModeBase.h"

// Sets default values
APillSpawner::APillSpawner()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    
    SpawningVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawningVolume"));
    SetRootComponent(SpawningVolume);
}

// Called when the game starts or when spawned
void APillSpawner::BeginPlay()
{
    Super::BeginPlay();
    SpawnPill();
}

// Called every frame
void APillSpawner::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
}

FVector APillSpawner::GetRandomPointInValue()
{
    FVector Origin = SpawningVolume->Bounds.Origin;
    FVector Extent = SpawningVolume->Bounds.BoxExtent;
    
    return UKismetMathLibrary::RandomPointInBoundingBox(Origin, Extent);
}

void APillSpawner::SpawnPill()
{
    if(ItemToSpawn != nullptr)
    {
        if(GetWorld())
        {
            FVector SpawnLocation = GetRandomPointInValue();
            FRotator SpawnRotation;
            SpawnRotation.Pitch = FMath::FRand()*360.0f;
            SpawnRotation.Roll = FMath::FRand()*360.0f;
            SpawnRotation.Yaw = FMath::FRand()*360.0f;
            
            AMagicPill* SpawnedPill = GetWorld()->SpawnActor<AMagicPill>(ItemToSpawn, SpawnLocation, SpawnRotation);
        }
    }
}

void APillSpawner::NotifyActorBeginOverlap(AActor* otherActor)
{
    AShooterCharacter* SCharacter = Cast<AShooterCharacter>(otherActor);
    
    if(SCharacter)
    {
        SpawnPill();
        if(GetWorld() != nullptr)
        {
            AWraithShooterGameModeBase* MyGameMode = GetWorld()->GetAuthGameMode<AWraithShooterGameModeBase>();
            if(MyGameMode != nullptr)
            {
                MyGameMode->CharacterVisualEffectsDelegateStart.ExecuteIfBound();
            }
        }
        //Broadcast the player entered event so that pill can randomize
        OnPlayerEntered.Broadcast();
    }
}

void APillSpawner::NotifyActorEndOverlap(AActor* otherActor)
{
    AShooterCharacter* SCharacter = Cast<AShooterCharacter>(otherActor);
    
    if(SCharacter)
    {
        if(GetWorld())
        {
            AWraithShooterGameModeBase* MyGameMode = GetWorld()->GetAuthGameMode<AWraithShooterGameModeBase>();
            if(MyGameMode)
            {
                MyGameMode->CharacterVisualEffectsDelegateStop.ExecuteIfBound();
            }
        }
    }
}
