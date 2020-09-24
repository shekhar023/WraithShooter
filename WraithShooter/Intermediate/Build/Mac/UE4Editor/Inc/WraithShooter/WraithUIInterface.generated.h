// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef WRAITHSHOOTER_WraithUIInterface_generated_h
#error "WraithUIInterface.generated.h already included, missing '#pragma once' in WraithUIInterface.h"
#endif
#define WRAITHSHOOTER_WraithUIInterface_generated_h

#define WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_SPARSE_DATA
#define WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_RPC_WRAPPERS \
	virtual void EndFocus_Implementation() {}; \
	virtual void StartFocus_Implementation() {}; \
 \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execStartFocus);


#define WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EndFocus_Implementation() {}; \
	virtual void StartFocus_Implementation() {}; \
 \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execStartFocus);


#define WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_EVENT_PARMS \
	struct WraithUIInterface_eventOnInteract_Parms \
	{ \
		AActor* Caller; \
	};


#define WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_CALLBACK_WRAPPERS
#define WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WRAITHSHOOTER_API UWraithUIInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWraithUIInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WRAITHSHOOTER_API, UWraithUIInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWraithUIInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WRAITHSHOOTER_API UWraithUIInterface(UWraithUIInterface&&); \
	WRAITHSHOOTER_API UWraithUIInterface(const UWraithUIInterface&); \
public:


#define WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WRAITHSHOOTER_API UWraithUIInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WRAITHSHOOTER_API UWraithUIInterface(UWraithUIInterface&&); \
	WRAITHSHOOTER_API UWraithUIInterface(const UWraithUIInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WRAITHSHOOTER_API, UWraithUIInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWraithUIInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWraithUIInterface)


#define WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWraithUIInterface(); \
	friend struct Z_Construct_UClass_UWraithUIInterface_Statics; \
public: \
	DECLARE_CLASS(UWraithUIInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WraithShooter"), WRAITHSHOOTER_API) \
	DECLARE_SERIALIZER(UWraithUIInterface)


#define WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_GENERATED_UINTERFACE_BODY() \
	WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_GENERATED_UINTERFACE_BODY() \
	WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWraithUIInterface() {} \
public: \
	typedef UWraithUIInterface UClassType; \
	typedef IWraithUIInterface ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* Caller); \
	static void Execute_StartFocus(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IWraithUIInterface() {} \
public: \
	typedef UWraithUIInterface UClassType; \
	typedef IWraithUIInterface ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* Caller); \
	static void Execute_StartFocus(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_10_PROLOG \
	WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_EVENT_PARMS


#define WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_RPC_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_CALLBACK_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_SPARSE_DATA \
	WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_CALLBACK_WRAPPERS \
	WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WRAITHSHOOTER_API UClass* StaticClass<class UWraithUIInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WraithShooter_Source_WraithShooter_Public_WraithUIInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
