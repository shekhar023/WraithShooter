// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WraithShooter/Public/HUD/WraithShooterHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWraithShooterHUD() {}
// Cross Module References
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AWraithShooterHUD_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AWraithShooterHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_WraithShooter();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AWraithShooterHUD::execGetHUDReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetHUDReference();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWraithShooterHUD::execSetHUDReference)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_HUDtoSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHUDReference(Z_Param_HUDtoSet);
		P_NATIVE_END;
	}
	void AWraithShooterHUD::StaticRegisterNativesAWraithShooterHUD()
	{
		UClass* Class = AWraithShooterHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHUDReference", &AWraithShooterHUD::execGetHUDReference },
			{ "SetHUDReference", &AWraithShooterHUD::execSetHUDReference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWraithShooterHUD_GetHUDReference_Statics
	{
		struct WraithShooterHUD_eventGetHUDReference_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWraithShooterHUD_GetHUDReference_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWraithShooterHUD_GetHUDReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WraithShooterHUD_eventGetHUDReference_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWraithShooterHUD_GetHUDReference_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWraithShooterHUD_GetHUDReference_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWraithShooterHUD_GetHUDReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWraithShooterHUD_GetHUDReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWraithShooterHUD_GetHUDReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/HUD/WraithShooterHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWraithShooterHUD_GetHUDReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWraithShooterHUD, nullptr, "GetHUDReference", nullptr, nullptr, sizeof(WraithShooterHUD_eventGetHUDReference_Parms), Z_Construct_UFunction_AWraithShooterHUD_GetHUDReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWraithShooterHUD_GetHUDReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWraithShooterHUD_GetHUDReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWraithShooterHUD_GetHUDReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWraithShooterHUD_GetHUDReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWraithShooterHUD_GetHUDReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWraithShooterHUD_SetHUDReference_Statics
	{
		struct WraithShooterHUD_eventSetHUDReference_Parms
		{
			UUserWidget* HUDtoSet;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDtoSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDtoSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWraithShooterHUD_SetHUDReference_Statics::NewProp_HUDtoSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWraithShooterHUD_SetHUDReference_Statics::NewProp_HUDtoSet = { "HUDtoSet", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WraithShooterHUD_eventSetHUDReference_Parms, HUDtoSet), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWraithShooterHUD_SetHUDReference_Statics::NewProp_HUDtoSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWraithShooterHUD_SetHUDReference_Statics::NewProp_HUDtoSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWraithShooterHUD_SetHUDReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWraithShooterHUD_SetHUDReference_Statics::NewProp_HUDtoSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWraithShooterHUD_SetHUDReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/HUD/WraithShooterHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWraithShooterHUD_SetHUDReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWraithShooterHUD, nullptr, "SetHUDReference", nullptr, nullptr, sizeof(WraithShooterHUD_eventSetHUDReference_Parms), Z_Construct_UFunction_AWraithShooterHUD_SetHUDReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWraithShooterHUD_SetHUDReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWraithShooterHUD_SetHUDReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWraithShooterHUD_SetHUDReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWraithShooterHUD_SetHUDReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWraithShooterHUD_SetHUDReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWraithShooterHUD_NoRegister()
	{
		return AWraithShooterHUD::StaticClass();
	}
	struct Z_Construct_UClass_AWraithShooterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWraithShooterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWraithShooterHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWraithShooterHUD_GetHUDReference, "GetHUDReference" }, // 1365221555
		{ &Z_Construct_UFunction_AWraithShooterHUD_SetHUDReference, "SetHUDReference" }, // 2517371875
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWraithShooterHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/WraithShooterHUD.h" },
		{ "ModuleRelativePath", "Public/HUD/WraithShooterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWraithShooterHUD_Statics::NewProp_HUDClass_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "//Main HUD\n" },
		{ "ModuleRelativePath", "Public/HUD/WraithShooterHUD.h" },
		{ "ToolTip", "Main HUD" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWraithShooterHUD_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWraithShooterHUD, HUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWraithShooterHUD_Statics::NewProp_HUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWraithShooterHUD_Statics::NewProp_HUDClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWraithShooterHUD_Statics::NewProp_HUD_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "//UUserWidget Instance\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/WraithShooterHUD.h" },
		{ "ToolTip", "UUserWidget Instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWraithShooterHUD_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWraithShooterHUD, HUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWraithShooterHUD_Statics::NewProp_HUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWraithShooterHUD_Statics::NewProp_HUD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWraithShooterHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWraithShooterHUD_Statics::NewProp_HUDClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWraithShooterHUD_Statics::NewProp_HUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWraithShooterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWraithShooterHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWraithShooterHUD_Statics::ClassParams = {
		&AWraithShooterHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWraithShooterHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWraithShooterHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AWraithShooterHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWraithShooterHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWraithShooterHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWraithShooterHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWraithShooterHUD, 3764747941);
	template<> WRAITHSHOOTER_API UClass* StaticClass<AWraithShooterHUD>()
	{
		return AWraithShooterHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWraithShooterHUD(Z_Construct_UClass_AWraithShooterHUD, &AWraithShooterHUD::StaticClass, TEXT("/Script/WraithShooter"), TEXT("AWraithShooterHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWraithShooterHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
