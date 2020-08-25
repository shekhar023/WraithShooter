// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInventorySlot : uint8;
struct FHitResult;
struct FVector;
class USkeletalMeshComponent;
class AGun;
struct FSkillsAttributes;
#ifdef WRAITHSHOOTER_ShooterCharacter_generated_h
#error "ShooterCharacter.generated.h already included, missing '#pragma once' in ShooterCharacter.h"
#endif
#define WRAITHSHOOTER_ShooterCharacter_generated_h

#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_SPARSE_DATA
#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeVFXInvisible); \
	DECLARE_FUNCTION(execMakeVFXVisible); \
	DECLARE_FUNCTION(execUnBindDelegates); \
	DECLARE_FUNCTION(execBindDelegates); \
	DECLARE_FUNCTION(execSwapToNewWeaponMesh); \
	DECLARE_FUNCTION(execGetInventoryAttachPoint); \
	DECLARE_FUNCTION(execObjectTrace); \
	DECLARE_FUNCTION(execGetScoreValue); \
	DECLARE_FUNCTION(execGetPawnMesh); \
	DECLARE_FUNCTION(execGetGunHostlerPoint); \
	DECLARE_FUNCTION(execGetWeaponAttachPoint); \
	DECLARE_FUNCTION(execGetEnergy); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetbIsAiming); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execHaveEnoughEnergyToUseAbility); \
	DECLARE_FUNCTION(execUpdateEnergy);


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeVFXInvisible); \
	DECLARE_FUNCTION(execMakeVFXVisible); \
	DECLARE_FUNCTION(execUnBindDelegates); \
	DECLARE_FUNCTION(execBindDelegates); \
	DECLARE_FUNCTION(execSwapToNewWeaponMesh); \
	DECLARE_FUNCTION(execGetInventoryAttachPoint); \
	DECLARE_FUNCTION(execObjectTrace); \
	DECLARE_FUNCTION(execGetScoreValue); \
	DECLARE_FUNCTION(execGetPawnMesh); \
	DECLARE_FUNCTION(execGetGunHostlerPoint); \
	DECLARE_FUNCTION(execGetWeaponAttachPoint); \
	DECLARE_FUNCTION(execGetEnergy); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetbIsAiming); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execHaveEnoughEnergyToUseAbility); \
	DECLARE_FUNCTION(execUpdateEnergy);


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_EVENT_PARMS \
	struct ShooterCharacter_eventZoom_Parms \
	{ \
		bool CanZoom; \
	};


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_CALLBACK_WRAPPERS
#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AShooterCharacter*>(this); }


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_INCLASS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AShooterCharacter*>(this); }


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_STANDARD_CONSTRUCTORS \
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


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterCharacter)


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Gun() { return STRUCT_OFFSET(AShooterCharacter, Gun); } \
	FORCEINLINE static uint32 __PPO__GunClass() { return STRUCT_OFFSET(AShooterCharacter, GunClass); } \
	FORCEINLINE static uint32 __PPO__Inventory() { return STRUCT_OFFSET(AShooterCharacter, Inventory); }


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_46_PROLOG \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_EVENT_PARMS


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_RPC_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_CALLBACK_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_INCLASS \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_CALLBACK_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_INCLASS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WRAITHSHOOTER_API UClass* StaticClass<class AShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h


#define FOREACH_ENUM_EINVENTORYSLOT(op) \
	op(EInventorySlot::Hands) \
	op(EInventorySlot::Primary) \
	op(EInventorySlot::Secondary) \
	op(EInventorySlot::Side) 

enum class EInventorySlot : uint8;
template<> WRAITHSHOOTER_API UEnum* StaticEnum<EInventorySlot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
