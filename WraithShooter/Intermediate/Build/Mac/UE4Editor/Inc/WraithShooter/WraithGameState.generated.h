// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WRAITHSHOOTER_WraithGameState_generated_h
#error "WraithGameState.generated.h already included, missing '#pragma once' in WraithGameState.h"
#endif
#define WRAITHSHOOTER_WraithGameState_generated_h

#define WraithShooter_Source_WraithShooter_Public_WraithGameState_h_14_DELEGATE \
static inline void FWinnerFound_DelegateWrapper(const FMulticastScriptDelegate& WinnerFound) \
{ \
	WinnerFound.ProcessMulticastDelegate<UObject>(NULL); \
}


#define WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_SPARSE_DATA
#define WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Winner);


#define WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Winner);


#define WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWraithGameState(); \
	friend struct Z_Construct_UClass_AWraithGameState_Statics; \
public: \
	DECLARE_CLASS(AWraithGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AWraithGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Winner=NETFIELD_REP_START, \
		NETFIELD_REP_END=Winner	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAWraithGameState(); \
	friend struct Z_Construct_UClass_AWraithGameState_Statics; \
public: \
	DECLARE_CLASS(AWraithGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AWraithGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Winner=NETFIELD_REP_START, \
		NETFIELD_REP_END=Winner	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWraithGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWraithGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWraithGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWraithGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWraithGameState(AWraithGameState&&); \
	NO_API AWraithGameState(const AWraithGameState&); \
public:


#define WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWraithGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWraithGameState(AWraithGameState&&); \
	NO_API AWraithGameState(const AWraithGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWraithGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWraithGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWraithGameState)


#define WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_PRIVATE_PROPERTY_OFFSET
#define WraithShooter_Source_WraithShooter_Public_WraithGameState_h_16_PROLOG
#define WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_RPC_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_INCLASS \
	WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_INCLASS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_WraithGameState_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WRAITHSHOOTER_API UClass* StaticClass<class AWraithGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WraithShooter_Source_WraithShooter_Public_WraithGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
