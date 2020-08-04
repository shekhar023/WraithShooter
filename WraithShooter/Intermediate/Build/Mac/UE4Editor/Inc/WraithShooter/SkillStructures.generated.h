// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WRAITHSHOOTER_SkillStructures_generated_h
#error "SkillStructures.generated.h already included, missing '#pragma once' in SkillStructures.h"
#endif
#define WRAITHSHOOTER_SkillStructures_generated_h

#define WraithShooter_Source_WraithShooter_Public_SkillStructures_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkillsAttributes_Statics; \
	WRAITHSHOOTER_API static class UScriptStruct* StaticStruct();


template<> WRAITHSHOOTER_API UScriptStruct* StaticStruct<struct FSkillsAttributes>();

#define WraithShooter_Source_WraithShooter_Public_SkillStructures_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkillData_Statics; \
	WRAITHSHOOTER_API static class UScriptStruct* StaticStruct();


template<> WRAITHSHOOTER_API UScriptStruct* StaticStruct<struct FSkillData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WraithShooter_Source_WraithShooter_Public_SkillStructures_h


#define FOREACH_ENUM_ESKILLS(op) \
	op(ESkills::None) \
	op(ESkills::DoubleJump) \
	op(ESkills::BackDash) \
	op(ESkills::Fireball) \
	op(ESkills::ElectroSpark) \
	op(ESkills::LensOfTruth) \
	op(ESkills::Mist) 

enum class ESkills : uint8;
template<> WRAITHSHOOTER_API UEnum* StaticEnum<ESkills>();

#define FOREACH_ENUM_EDEFENSIVEABILITY(op) \
	op(EDefensiveAbility::None) \
	op(EDefensiveAbility::LensOfTruth) \
	op(EDefensiveAbility::Mist) \
	op(EDefensiveAbility::Shield) \
	op(EDefensiveAbility::TimeSlow) 

enum class EDefensiveAbility : uint8;
template<> WRAITHSHOOTER_API UEnum* StaticEnum<EDefensiveAbility>();

#define FOREACH_ENUM_EOFFENSIVEABILITY(op) \
	op(EOffensiveAbility::None) \
	op(EOffensiveAbility::Fireball) \
	op(EOffensiveAbility::ElectroSpark) \
	op(EOffensiveAbility::Teleport) 

enum class EOffensiveAbility : uint8;
template<> WRAITHSHOOTER_API UEnum* StaticEnum<EOffensiveAbility>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
