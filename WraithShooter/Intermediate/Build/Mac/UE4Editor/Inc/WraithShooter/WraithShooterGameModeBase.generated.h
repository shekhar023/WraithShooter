// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef WRAITHSHOOTER_WraithShooterGameModeBase_generated_h
#error "WraithShooterGameModeBase.generated.h already included, missing '#pragma once' in WraithShooterGameModeBase.h"
#endif
#define WRAITHSHOOTER_WraithShooterGameModeBase_generated_h

#define WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_12_DELEGATE \
struct _Script_WraithShooter_eventOnActorKilled_Parms \
{ \
	AActor* KilledPawn; \
}; \
static inline void FOnActorKilled_DelegateWrapper(const FMulticastScriptDelegate& OnActorKilled, AActor* KilledPawn) \
{ \
	_Script_WraithShooter_eventOnActorKilled_Parms Parms; \
	Parms.KilledPawn=KilledPawn; \
	OnActorKilled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_SPARSE_DATA
#define WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_RPC_WRAPPERS
#define WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWraithShooterGameModeBase(); \
	friend struct Z_Construct_UClass_AWraithShooterGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AWraithShooterGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AWraithShooterGameModeBase)


#define WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAWraithShooterGameModeBase(); \
	friend struct Z_Construct_UClass_AWraithShooterGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AWraithShooterGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AWraithShooterGameModeBase)


#define WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWraithShooterGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWraithShooterGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWraithShooterGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWraithShooterGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWraithShooterGameModeBase(AWraithShooterGameModeBase&&); \
	NO_API AWraithShooterGameModeBase(const AWraithShooterGameModeBase&); \
public:


#define WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWraithShooterGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWraithShooterGameModeBase(AWraithShooterGameModeBase&&); \
	NO_API AWraithShooterGameModeBase(const AWraithShooterGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWraithShooterGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWraithShooterGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWraithShooterGameModeBase)


#define WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_PRIVATE_PROPERTY_OFFSET
#define WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_19_PROLOG
#define WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_RPC_WRAPPERS \
	WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_INCLASS \
	WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_INCLASS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WRAITHSHOOTER_API UClass* StaticClass<class AWraithShooterGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WraithShooter_Source_WraithShooter_WraithShooterGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
