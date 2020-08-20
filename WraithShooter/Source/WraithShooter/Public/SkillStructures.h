// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillStructures.generated.h"

class UParticleSystem;

//MARK:ENUM EOffensiveAbility
UENUM(BlueprintType)
enum class EOffensiveAbility : uint8
{
    None,
    Fireball,
    ElectroSpark,
    Bloodlust,
    Teleport,
};
//MARK:ENUM EDefensiveAbility
UENUM(BlueprintType)
enum class EDefensiveAbility : uint8
{
    None,
    LensOfTruth,
    Mist,
    Shield,
    TimeSlow,
};

//MARK:ENUM ESkills
UENUM(BlueprintType)
enum class ESkills : uint8
{
    None,
    DoubleJump,
    BackDash,
    Fireball,
    ElectroSpark,
    LensOfTruth,
    Mist,
};

//MARK: Structure for Skills Data
USTRUCT(BlueprintType, Blueprintable)
struct FSkillData
{
    GENERATED_USTRUCT_BODY()

public:
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillData)
    FText Title;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillData)
    FText Description;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillData)
    FSlateBrush InputButton;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillData)
    FSlateBrush SkillIcon;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillData)
    FSlateBrush SkillImage;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillData)
    FSlateBrush SkillBorderColor;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillData)
    FSlateColor SkillFontColor;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillData)
    UParticleSystem* VFX;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillData)
    bool bIsMagicSkill;
};

//MARK: Structure for Skills Attributes
USTRUCT(BlueprintType, Blueprintable)
struct FSkillsAttributes
{
     GENERATED_USTRUCT_BODY()
    
public:
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillsAttributes)
    FText Name;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillsAttributes)
    FSlateBrush IconSlate;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillsAttributes)
    float EnergyCost;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillsAttributes)
    float Damage;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillsAttributes)
    float DamageRadius;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkillsAttributes)
    TSubclassOf<UDamageType> DamageType;
};

class WRAITHSHOOTER_API SkillStructures
{
public:
	SkillStructures();
	~SkillStructures();
};
