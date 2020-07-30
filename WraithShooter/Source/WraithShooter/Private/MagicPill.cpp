// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicPill.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "PillSpawner.h"
#include "EngineUtils.h"

// Sets default values
AMagicPill::AMagicPill()
{
    PowerupInterval = 2.0f;
    TotalNoOfTicks = 2;

    bIsPowerupActive = false;

    PillMesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMeshComponent");
    PillMesh->SetSimulatePhysics(false);
    PillMesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AMagicPill::BeginPlay()
{
	Super::BeginPlay();
    
    auto iterator = TActorIterator<APillSpawner>(GetWorld());
    TriggerEventSource = *iterator;
    
    if(TriggerEventSource)
    {
        TriggerEventSource->OnPlayerEntered.AddUObject(this, &AMagicPill::OnTriggerEvent);
    }
    
}

void AMagicPill::OnTriggerEvent()
{
    UE_LOG(LogTemp, Warning, TEXT("Custom Event from pill spawner to magic pill executed!!"));
}

void AMagicPill::OnTickPowerup()
{
    TicksProcessed++;

    OnPowerupTicked();

    if (TicksProcessed >= TotalNoOfTicks)
    {
        OnExpired();

        bIsPowerupActive = false;
        OnRep_PowerupActive();

        // Delete timer
        GetWorldTimerManager().ClearTimer(TimerHandle_PowerupTick);
    }
}

void AMagicPill::OnRep_PowerupActive()
{
    OnPowerupStateChanged(bIsPowerupActive);
}

void AMagicPill::ActivatePowerup(AActor* ActiveFor)
{
    OnActivated(ActiveFor);

    bIsPowerupActive = true;
    OnRep_PowerupActive();

    if (PowerupInterval > 0.0f)
    {
        GetWorldTimerManager().SetTimer(TimerHandle_PowerupTick, this, &AMagicPill::OnTickPowerup, PowerupInterval, true);
    }
    else
    {
        OnTickPowerup();
    }
}

bool AMagicPill::GetIsPowerupActive() const
{
    return bIsPowerupActive;
}


