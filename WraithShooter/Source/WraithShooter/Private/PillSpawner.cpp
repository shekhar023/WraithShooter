// Fill out your copyright notice in the Description page of Project Settings.


#include "PillSpawner.h"
#include "MagicPill.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/Gameplaystatics.h"
#include "ShooterCharacter.h"
#include "EngineUtils.h"
#include "TimerManager.h"
#include "WraithShooter/WraithShooterGameModeBase.h"

// Sets default values
APillSpawner::APillSpawner()
{
    
    
    SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    SphereComp->SetSphereRadius(75.0f);
    RootComponent = SphereComp;
    
    DecalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComp"));
    DecalComp->SetRelativeRotation(FRotator(90, 0.0f, 0.0f));
    DecalComp->DecalSize = FVector(64, 75, 75);
    DecalComp->SetupAttachment(RootComponent);
    
    CooldownDuration = 10.0f;
}

// Called when the game starts or when spawned
void APillSpawner::BeginPlay()
{
    Super::BeginPlay();
    SpawnPill();
}

void APillSpawner::SpawnPill()
{
    if(ItemToSpawn == nullptr) {return;}
    
    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    
    PillInstance = GetWorld()->SpawnActor<AMagicPill>(ItemToSpawn, GetTransform(), SpawnParams);
    
    if(RespawnSound)
    {
         UGameplayStatics::SpawnSoundAtLocation(GetWorld(), RespawnSound, GetActorLocation());
    }
    
}

void APillSpawner::NotifyActorBeginOverlap(AActor* otherActor)
{
    Super::NotifyActorBeginOverlap(otherActor);
    
    AShooterCharacter* SCharacter = Cast<AShooterCharacter>(otherActor);
    
    if(SCharacter && PillInstance->GetIsPowerupActive() == false)
    {
        
        AWraithShooterGameModeBase* MyGameMode = GetWorld()->GetAuthGameMode<AWraithShooterGameModeBase>();
        if(MyGameMode != nullptr)
        {
            MyGameMode->CharacterVisualEffectsDelegateStart.ExecuteIfBound();
           
        }
        
        if(PickUpSound)
        {
             UGameplayStatics::SpawnSoundAtLocation(GetWorld(), PickUpSound, GetActorLocation());
        }
        //Broadcast the player entered event so that pill can randomize
        OnPlayerEntered.Broadcast();
        
        PillInstance->ActivatePowerup(SCharacter);
    
        GetWorldTimerManager().SetTimer(TimerHandle_RespawnTimer, this, &APillSpawner::SpawnPill, CooldownDuration);
    }
}

void APillSpawner::NotifyActorEndOverlap(AActor* otherActor)
{
    Super::NotifyActorEndOverlap(otherActor);
    
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
