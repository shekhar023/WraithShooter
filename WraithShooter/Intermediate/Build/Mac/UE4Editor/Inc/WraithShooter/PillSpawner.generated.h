// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WRAITHSHOOTER_PillSpawner_generated_h
#error "PillSpawner.generated.h already included, missing '#pragma once' in PillSpawner.h"
#endif
#define WRAITHSHOOTER_PillSpawner_generated_h

#define WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_SPARSE_DATA
#define WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_RPC_WRAPPERS
#define WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPillSpawner(); \
	friend struct Z_Construct_UClass_APillSpawner_Statics; \
public: \
	DECLARE_CLASS(APillSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(APillSpawner) \
	virtual UObject* _getUObject() const override { return const_cast<APillSpawner*>(this); }


#define WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAPillSpawner(); \
	friend struct Z_Construct_UClass_APillSpawner_Statics; \
public: \
	DECLARE_CLASS(APillSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(APillSpawner) \
	virtual UObject* _getUObject() const override { return const_cast<APillSpawner*>(this); }


#define WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APillSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APillSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APillSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APillSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APillSpawner(APillSpawner&&); \
	NO_API APillSpawner(const APillSpawner&); \
public:


#define WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APillSpawner(APillSpawner&&); \
	NO_API APillSpawner(const APillSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APillSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APillSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APillSpawner)


#define WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PillInstance() { return STRUCT_OFFSET(APillSpawner, PillInstance); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(APillSpawner, SphereComp); } \
	FORCEINLINE static uint32 __PPO__DecalComp() { return STRUCT_OFFSET(APillSpawner, DecalComp); } \
	FORCEINLINE static uint32 __PPO__CooldownDuration() { return STRUCT_OFFSET(APillSpawner, CooldownDuration); } \
	FORCEINLINE static uint32 __PPO__ItemToSpawn() { return STRUCT_OFFSET(APillSpawner, ItemToSpawn); }


#define WraithShooter_Source_WraithShooter_Public_PillSpawner_h_17_PROLOG
#define WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_RPC_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_INCLASS \
	WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_INCLASS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_PillSpawner_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WRAITHSHOOTER_API UClass* StaticClass<class APillSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WraithShooter_Source_WraithShooter_Public_PillSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
