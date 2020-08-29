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

#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_SPARSE_DATA
#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDetonate); \
	DECLARE_FUNCTION(execOnHit);


#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDetonate); \
	DECLARE_FUNCTION(execOnHit);


#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_EVENT_PARMS
#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_CALLBACK_WRAPPERS
#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWraithProjectile(); \
	friend struct Z_Construct_UClass_AWraithProjectile_Statics; \
public: \
	DECLARE_CLASS(AWraithProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AWraithProjectile)


#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAWraithProjectile(); \
	friend struct Z_Construct_UClass_AWraithProjectile_Statics; \
public: \
	DECLARE_CLASS(AWraithProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AWraithProjectile)


#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_STANDARD_CONSTRUCTORS \
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


#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWraithProjectile(AWraithProjectile&&); \
	NO_API AWraithProjectile(const AWraithProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWraithProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWraithProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWraithProjectile)


#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_PRIVATE_PROPERTY_OFFSET
#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_19_PROLOG \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_EVENT_PARMS


#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_RPC_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_CALLBACK_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_INCLASS \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_CALLBACK_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_INCLASS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_WraithProjectile_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WRAITHSHOOTER_API UClass* StaticClass<class AWraithProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WraithShooter_Source_WraithShooter_Public_WraithProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
