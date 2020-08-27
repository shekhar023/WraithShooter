// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef WRAITHSHOOTER_WraithProjectile_generated_h
#error "WraithProjectile.generated.h already included, missing '#pragma once' in WraithProjectile.h"
#endif
#define WRAITHSHOOTER_WraithProjectile_generated_h

#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_SPARSE_DATA
#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDetonate); \
	DECLARE_FUNCTION(execOnHit);


#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDetonate); \
	DECLARE_FUNCTION(execOnHit);


#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWraithProjectile(); \
	friend struct Z_Construct_UClass_AWraithProjectile_Statics; \
public: \
	DECLARE_CLASS(AWraithProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AWraithProjectile)


#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAWraithProjectile(); \
	friend struct Z_Construct_UClass_AWraithProjectile_Statics; \
public: \
	DECLARE_CLASS(AWraithProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AWraithProjectile)


#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWraithProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWraithProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWraithProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWraithProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWraithProjectile(AWraithProjectile&&); \
	NO_API AWraithProjectile(const AWraithProjectile&); \
public:


#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWraithProjectile(AWraithProjectile&&); \
	NO_API AWraithProjectile(const AWraithProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWraithProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWraithProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWraithProjectile)


#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AWraithProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__FXScale() { return STRUCT_OFFSET(AWraithProjectile, FXScale); } \
	FORCEINLINE static uint32 __PPO__Radius() { return STRUCT_OFFSET(AWraithProjectile, Radius); } \
	FORCEINLINE static uint32 __PPO__ImpulseRadius() { return STRUCT_OFFSET(AWraithProjectile, ImpulseRadius); } \
	FORCEINLINE static uint32 __PPO__ImpulseStrength() { return STRUCT_OFFSET(AWraithProjectile, ImpulseStrength); } \
	FORCEINLINE static uint32 __PPO__RadiusDamage() { return STRUCT_OFFSET(AWraithProjectile, RadiusDamage); } \
	FORCEINLINE static uint32 __PPO__DamageRadius() { return STRUCT_OFFSET(AWraithProjectile, DamageRadius); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(AWraithProjectile, DamageType); } \
	FORCEINLINE static uint32 __PPO__ExplosionSystem() { return STRUCT_OFFSET(AWraithProjectile, ExplosionSystem); } \
	FORCEINLINE static uint32 __PPO__ExplosionParticles() { return STRUCT_OFFSET(AWraithProjectile, ExplosionParticles); } \
	FORCEINLINE static uint32 __PPO__ExplosionSound() { return STRUCT_OFFSET(AWraithProjectile, ExplosionSound); }


#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_17_PROLOG
#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_RPC_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_INCLASS \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_INCLASS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WRAITHSHOOTER_API UClass* StaticClass<class AWraithProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WraithShooter_Source_WraithShooter_Public_WraithProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
