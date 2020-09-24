// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef WRAITHSHOOTER_PickupActor_generated_h
#error "PickupActor.generated.h already included, missing '#pragma once' in PickupActor.h"
#endif
#define WRAITHSHOOTER_PickupActor_generated_h

#define WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_SPARSE_DATA
#define WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMeshComponent);


#define WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMeshComponent);


#define WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupActor(); \
	friend struct Z_Construct_UClass_APickupActor_Statics; \
public: \
	DECLARE_CLASS(APickupActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(APickupActor) \
	virtual UObject* _getUObject() const override { return const_cast<APickupActor*>(this); }


#define WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPickupActor(); \
	friend struct Z_Construct_UClass_APickupActor_Statics; \
public: \
	DECLARE_CLASS(APickupActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WraithShooter"), NO_API) \
	DECLARE_SERIALIZER(APickupActor) \
	virtual UObject* _getUObject() const override { return const_cast<APickupActor*>(this); }


#define WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupActor(APickupActor&&); \
	NO_API APickupActor(const APickupActor&); \
public:


#define WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupActor(APickupActor&&); \
	NO_API APickupActor(const APickupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupActor)


#define WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_PRIVATE_PROPERTY_OFFSET
#define WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_13_PROLOG
#define WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_RPC_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_INCLASS \
	WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_PRIVATE_PROPERTY_OFFSET \
	WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_INCLASS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WRAITHSHOOTER_API UClass* StaticClass<class APickupActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WraithShooter_Source_WraithShooter_Public_Actors_PickupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
