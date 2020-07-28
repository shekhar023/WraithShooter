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
struct FHitResult;
#ifdef WRAITHSHOOTER_ShooterCharacter_generated_h
#error "ShooterCharacter.generated.h already included, missing '#pragma once' in ShooterCharacter.h"
#endif
#define WRAITHSHOOTER_ShooterCharacter_generated_h

#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_SPARSE_DATA
#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_RPC_WRAPPERS \
	virtual void OnOverlapBegin_Implementation(UPrimitiveComponent* Comp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, FHitResult const& SweepResult); \
 \
	DECLARE_FUNCTION(execUnBindDelegates); \
	DECLARE_FUNCTION(execBindDelegates); \
	DECLARE_FUNCTION(execMakeVFXInvisible); \
	DECLARE_FUNCTION(execMakeVFXVisible); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execGetbIsAiming); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execStopShoot);


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnOverlapBegin_Implementation(UPrimitiveComponent* Comp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, FHitResult const& SweepResult); \
 \
	DECLARE_FUNCTION(execUnBindDelegates); \
	DECLARE_FUNCTION(execBindDelegates); \
	DECLARE_FUNCTION(execMakeVFXInvisible); \
	DECLARE_FUNCTION(execMakeVFXVisible); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execGetbIsAiming); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execStopShoot);


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_EVENT_PARMS \
	struct ShooterCharacter_eventOnOverlapBegin_Parms \
	{ \
		UPrimitiveComponent* Comp; \
		AActor* otherActor; \
		UPrimitiveComponent* otherComp; \
		int32 otherBodyIndex; \
		bool bFromSweep; \
		FHitResult SweepResult; \
	};


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_CALLBACK_WRAPPERS
#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter)


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter)


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_STANDARD_CONSTRUCTORS \
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


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterCharacter)


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsAiming() { return STRUCT_OFFSET(AShooterCharacter, bIsAiming); } \
	FORCEINLINE static uint32 __PPO__GunAttachSocket() { return STRUCT_OFFSET(AShooterCharacter, GunAttachSocket); } \
	FORCEINLINE static uint32 __PPO__BasePitchValue() { return STRUCT_OFFSET(AShooterCharacter, BasePitchValue); } \
	FORCEINLINE static uint32 __PPO__BaseYawValue() { return STRUCT_OFFSET(AShooterCharacter, BaseYawValue); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(AShooterCharacter, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AShooterCharacter, Health); } \
	FORCEINLINE static uint32 __PPO__Gun() { return STRUCT_OFFSET(AShooterCharacter, Gun); } \
	FORCEINLINE static uint32 __PPO__GunClass() { return STRUCT_OFFSET(AShooterCharacter, GunClass); } \
	FORCEINLINE static uint32 __PPO__Inventory() { return STRUCT_OFFSET(AShooterCharacter, Inventory); }


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_15_PROLOG \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_EVENT_PARMS


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_RPC_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_CALLBACK_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_INCLASS \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_CALLBACK_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_INCLASS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WRAITHSHOOTER_API UClass* StaticClass<class AShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WraithShooter_Source_WraithShooter_Public_ShooterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
