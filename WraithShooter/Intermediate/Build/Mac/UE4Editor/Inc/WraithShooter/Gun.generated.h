// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UAnimationAsset;
#ifdef WRAITHSHOOTER_Gun_generated_h
#error "Gun.generated.h already included, missing '#pragma once' in Gun.h"
#endif
#define WRAITHSHOOTER_Gun_generated_h

#define WraithShooter_Source_WraithShooter_Public_Gun_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerAnimations_Statics; \
	WRAITHSHOOTER_API static class UScriptStruct* StaticStruct();


template<> WRAITHSHOOTER_API UScriptStruct* StaticStruct<struct FPlayerAnimations>();

#define WraithShooter_Source_WraithShooter_Public_Gun_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponAnimations_Statics; \
	WRAITHSHOOTER_API static class UScriptStruct* StaticStruct();


template<> WRAITHSHOOTER_API UScriptStruct* StaticStruct<struct FWeaponAnimations>();

#define WraithShooter_Source_WraithShooter_Public_Gun_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponEffects_Statics; \
	WRAITHSHOOTER_API static class UScriptStruct* StaticStruct();


template<> WRAITHSHOOTER_API UScriptStruct* StaticStruct<struct FWeaponEffects>();

#define WraithShooter_Source_WraithShooter_Public_Gun_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponAttributes_Statics; \
	WRAITHSHOOTER_API static class UScriptStruct* StaticStruct();


template<> WRAITHSHOOTER_API UScriptStruct* StaticStruct<struct FWeaponAttributes>();

#define WraithShooter_Source_WraithShooter_Public_Gun_h_142_SPARSE_DATA
#define WraithShooter_Source_WraithShooter_Public_Gun_h_142_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanReload); \
	DECLARE_FUNCTION(execIsPlayerAiming); \
	DECLARE_FUNCTION(execStopWeaponAnimation); \
	DECLARE_FUNCTION(execPlayGunAnimations); \
	DECLARE_FUNCTION(execPlayCharacterAnimations); \
	DECLARE_FUNCTION(execGetbCanFire); \
	DECLARE_FUNCTION(execGetMaxAmmo); \
	DECLARE_FUNCTION(execGetCurrentAmmoInClip);


#define WraithShooter_Source_WraithShooter_Public_Gun_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanReload); \
	DECLARE_FUNCTION(execIsPlayerAiming); \
	DECLARE_FUNCTION(execStopWeaponAnimation); \
	DECLARE_FUNCTION(execPlayGunAnimations); \
	DECLARE_FUNCTION(execPlayCharacterAnimations); \
	DECLARE_FUNCTION(execGetbCanFire); \
	DECLARE_FUNCTION(execGetMaxAmmo); \
	DECLARE_FUNCTION(execGetCurrentAmmoInClip);


#define WraithShooter_Source_WraithShooter_Public_Gun_h_142_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGun(); \
	friend struct Z_Construct_UClass_AGun_Statics; \
public: \
	DECLARE_CLASS(AGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AGun)


#define WraithShooter_Source_WraithShooter_Public_Gun_h_142_INCLASS \
private: \
	static void StaticRegisterNativesAGun(); \
	friend struct Z_Construct_UClass_AGun_Statics; \
public: \
	DECLARE_CLASS(AGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AGun)


#define WraithShooter_Source_WraithShooter_Public_Gun_h_142_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGun(AGun&&); \
	NO_API AGun(const AGun&); \
public:


#define WraithShooter_Source_WraithShooter_Public_Gun_h_142_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGun(AGun&&); \
	NO_API AGun(const AGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGun)


#define WraithShooter_Source_WraithShooter_Public_Gun_h_142_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AGun, Mesh); } \
	FORCEINLINE static uint32 __PPO__bIsFiring() { return STRUCT_OFFSET(AGun, bIsFiring); } \
	FORCEINLINE static uint32 __PPO__bIsReloading() { return STRUCT_OFFSET(AGun, bIsReloading); } \
	FORCEINLINE static uint32 __PPO__SCharacter() { return STRUCT_OFFSET(AGun, SCharacter); } \
	FORCEINLINE static uint32 __PPO__SurfaceType() { return STRUCT_OFFSET(AGun, SurfaceType); }


#define WraithShooter_Source_WraithShooter_Public_Gun_h_139_PROLOG
#define WraithShooter_Source_WraithShooter_Public_Gun_h_142_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_Gun_h_142_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_Gun_h_142_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_Gun_h_142_RPC_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_Gun_h_142_INCLASS \
	WraithShooter_Source_WraithShooter_Public_Gun_h_142_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WraithShooter_Source_WraithShooter_Public_Gun_h_142_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_Gun_h_142_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_Gun_h_142_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_Gun_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_Gun_h_142_INCLASS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_Gun_h_142_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WRAITHSHOOTER_API UClass* StaticClass<class AGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WraithShooter_Source_WraithShooter_Public_Gun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
