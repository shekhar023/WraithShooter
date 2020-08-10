// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WRAITHSHOOTER_ShooterPlayerController_generated_h
#error "ShooterPlayerController.generated.h already included, missing '#pragma once' in ShooterPlayerController.h"
#endif
#define WRAITHSHOOTER_ShooterPlayerController_generated_h

#define WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_SPARSE_DATA
#define WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerEvent);


#define WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerEvent);


#define WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterPlayerController(); \
	friend struct Z_Construct_UClass_AShooterPlayerController_Statics; \
public: \
	DECLARE_CLASS(AShooterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterPlayerController)


#define WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAShooterPlayerController(); \
	friend struct Z_Construct_UClass_AShooterPlayerController_Statics; \
public: \
	DECLARE_CLASS(AShooterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterPlayerController)


#define WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterPlayerController(AShooterPlayerController&&); \
	NO_API AShooterPlayerController(const AShooterPlayerController&); \
public:


#define WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterPlayerController(AShooterPlayerController&&); \
	NO_API AShooterPlayerController(const AShooterPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPlayerController)


#define WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUD() { return STRUCT_OFFSET(AShooterPlayerController, HUD); } \
	FORCEINLINE static uint32 __PPO__HUDClass() { return STRUCT_OFFSET(AShooterPlayerController, HUDClass); } \
	FORCEINLINE static uint32 __PPO__LoseScreenClass() { return STRUCT_OFFSET(AShooterPlayerController, LoseScreenClass); } \
	FORCEINLINE static uint32 __PPO__WinScreenClass() { return STRUCT_OFFSET(AShooterPlayerController, WinScreenClass); } \
	FORCEINLINE static uint32 __PPO__WBPLearnedSkillClass() { return STRUCT_OFFSET(AShooterPlayerController, WBPLearnedSkillClass); } \
	FORCEINLINE static uint32 __PPO__RestartDelay() { return STRUCT_OFFSET(AShooterPlayerController, RestartDelay); }


#define WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_12_PROLOG
#define WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_RPC_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_INCLASS \
	WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WRAITHSHOOTER_API UClass* StaticClass<class AShooterPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WraithShooter_Source_WraithShooter_Public_ShooterPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
