// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef WRAITHSHOOTER_ShooterCharacter_generated_h
#error "ShooterCharacter.generated.h already included, missing '#pragma once' in ShooterCharacter.h"
#endif
#define WRAITHSHOOTER_ShooterCharacter_generated_h

#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkillsAttributes_Statics; \
	WRAITHSHOOTER_API static class UScriptStruct* StaticStruct();


template<> WRAITHSHOOTER_API UScriptStruct* StaticStruct<struct FSkillsAttributes>();

#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkillData_Statics; \
	WRAITHSHOOTER_API static class UScriptStruct* StaticStruct();


template<> WRAITHSHOOTER_API UScriptStruct* StaticStruct<struct FSkillData>();

#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_21_DELEGATE \
struct _Script_WraithShooter_eventOnAiming_Parms \
{ \
	bool IsAiming; \
}; \
static inline void FOnAiming_DelegateWrapper(const FMulticastScriptDelegate& OnAiming, bool IsAiming) \
{ \
	_Script_WraithShooter_eventOnAiming_Parms Parms; \
	Parms.IsAiming=IsAiming ? true : false; \
	OnAiming.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_SPARSE_DATA
#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeVFXInvisible); \
	DECLARE_FUNCTION(execMakeVFXVisible); \
	DECLARE_FUNCTION(execUnBindDelegates); \
	DECLARE_FUNCTION(execBindDelegates); \
	DECLARE_FUNCTION(execGetScoreValue); \
	DECLARE_FUNCTION(execGetPawnMesh); \
	DECLARE_FUNCTION(execGetGunHostlerPoint); \
	DECLARE_FUNCTION(execGetWeaponAttachPoint); \
	DECLARE_FUNCTION(execGetEnergy); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetbIsAiming); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execPlaySoundEffects);


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeVFXInvisible); \
	DECLARE_FUNCTION(execMakeVFXVisible); \
	DECLARE_FUNCTION(execUnBindDelegates); \
	DECLARE_FUNCTION(execBindDelegates); \
	DECLARE_FUNCTION(execGetScoreValue); \
	DECLARE_FUNCTION(execGetPawnMesh); \
	DECLARE_FUNCTION(execGetGunHostlerPoint); \
	DECLARE_FUNCTION(execGetWeaponAttachPoint); \
	DECLARE_FUNCTION(execGetEnergy); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetbIsAiming); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execPlaySoundEffects);


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AShooterCharacter*>(this); }


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_INCLASS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AShooterCharacter*>(this); }


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public:


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterCharacter)


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Gun() { return STRUCT_OFFSET(AShooterCharacter, Gun); } \
	FORCEINLINE static uint32 __PPO__GunClass() { return STRUCT_OFFSET(AShooterCharacter, GunClass); } \
	FORCEINLINE static uint32 __PPO__Inventory() { return STRUCT_OFFSET(AShooterCharacter, Inventory); }


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_118_PROLOG
#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_RPC_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_INCLASS \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_INCLASS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WRAITHSHOOTER_API UClass* StaticClass<class AShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h


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
