// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef WRAITHSHOOTER_MagicPill_generated_h
#error "MagicPill.generated.h already included, missing '#pragma once' in MagicPill.h"
#endif
#define WRAITHSHOOTER_MagicPill_generated_h

#define WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_SPARSE_DATA
#define WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_PowerupActive); \
	DECLARE_FUNCTION(execOnTickPowerup);


#define WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_PowerupActive); \
	DECLARE_FUNCTION(execOnTickPowerup);


#define WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_EVENT_PARMS \
	struct MagicPill_eventOnActivated_Parms \
	{ \
		AActor* ActiveFor; \
	}; \
	struct MagicPill_eventOnPowerupStateChanged_Parms \
	{ \
		bool bNewIsActive; \
	};


#define WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_CALLBACK_WRAPPERS
#define WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMagicPill(); \
	friend struct Z_Construct_UClass_AMagicPill_Statics; \
public: \
	DECLARE_CLASS(AMagicPill, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AMagicPill) \
	virtual UObject* _getUObject() const override { return const_cast<AMagicPill*>(this); }


#define WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMagicPill(); \
	friend struct Z_Construct_UClass_AMagicPill_Statics; \
public: \
	DECLARE_CLASS(AMagicPill, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AMagicPill) \
	virtual UObject* _getUObject() const override { return const_cast<AMagicPill*>(this); }


#define WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagicPill(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagicPill) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicPill); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicPill); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagicPill(AMagicPill&&); \
	NO_API AMagicPill(const AMagicPill&); \
public:


#define WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagicPill(AMagicPill&&); \
	NO_API AMagicPill(const AMagicPill&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicPill); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicPill); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMagicPill)


#define WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractMessage() { return STRUCT_OFFSET(AMagicPill, InteractMessage); } \
	FORCEINLINE static uint32 __PPO__PowerupInterval() { return STRUCT_OFFSET(AMagicPill, PowerupInterval); } \
	FORCEINLINE static uint32 __PPO__TotalNoOfTicks() { return STRUCT_OFFSET(AMagicPill, TotalNoOfTicks); } \
	FORCEINLINE static uint32 __PPO__bIsPowerupActive() { return STRUCT_OFFSET(AMagicPill, bIsPowerupActive); }


#define WraithShooter_Source_WraithShooter_Public_MagicPill_h_11_PROLOG \
	WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_EVENT_PARMS


#define WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_RPC_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_CALLBACK_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_INCLASS \
	WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_CALLBACK_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_INCLASS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_MagicPill_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WRAITHSHOOTER_API UClass* StaticClass<class AMagicPill>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WraithShooter_Source_WraithShooter_Public_MagicPill_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
