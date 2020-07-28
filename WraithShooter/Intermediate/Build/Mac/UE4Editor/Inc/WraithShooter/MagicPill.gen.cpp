// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WraithShooter/Public/MagicPill.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicPill() {}
// Cross Module References
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AMagicPill_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AMagicPill();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WraithShooter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMagicPill::execOnTriggerEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicPill::execGetPillEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPillEffect();
		P_NATIVE_END;
	}
	void AMagicPill::StaticRegisterNativesAMagicPill()
	{
		UClass* Class = AMagicPill::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPillEffect", &AMagicPill::execGetPillEffect },
			{ "OnTriggerEvent", &AMagicPill::execOnTriggerEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMagicPill_GetPillEffect_Statics
	{
		struct MagicPill_eventGetPillEffect_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMagicPill_GetPillEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicPill_eventGetPillEffect_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicPill_GetPillEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicPill_GetPillEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicPill_GetPillEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagicPill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicPill_GetPillEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicPill, nullptr, "GetPillEffect", nullptr, nullptr, sizeof(MagicPill_eventGetPillEffect_Parms), Z_Construct_UFunction_AMagicPill_GetPillEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicPill_GetPillEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicPill_GetPillEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicPill_GetPillEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicPill_GetPillEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicPill_GetPillEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicPill_OnTriggerEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicPill_OnTriggerEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagicPill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicPill_OnTriggerEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicPill, nullptr, "OnTriggerEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicPill_OnTriggerEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicPill_OnTriggerEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicPill_OnTriggerEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicPill_OnTriggerEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMagicPill_NoRegister()
	{
		return AMagicPill::StaticClass();
	}
	struct Z_Construct_UClass_AMagicPill_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PillEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PillEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PillMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PillMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicPill_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMagicPill_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagicPill_GetPillEffect, "GetPillEffect" }, // 3788580694
		{ &Z_Construct_UFunction_AMagicPill_OnTriggerEvent, "OnTriggerEvent" }, // 3405163688
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicPill_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MagicPill.h" },
		{ "ModuleRelativePath", "Public/MagicPill.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicPill_Statics::NewProp_PillEffect_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Public/MagicPill.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMagicPill_Statics::NewProp_PillEffect = { "PillEffect", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicPill, PillEffect), METADATA_PARAMS(Z_Construct_UClass_AMagicPill_Statics::NewProp_PillEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicPill_Statics::NewProp_PillEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicPill_Statics::NewProp_PillMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MagicPill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicPill_Statics::NewProp_PillMesh = { "PillMesh", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicPill, PillMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicPill_Statics::NewProp_PillMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicPill_Statics::NewProp_PillMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicPill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicPill_Statics::NewProp_PillEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicPill_Statics::NewProp_PillMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicPill_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicPill>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMagicPill_Statics::ClassParams = {
		&AMagicPill::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMagicPill_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagicPill_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMagicPill_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicPill_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagicPill()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMagicPill_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMagicPill, 664752169);
	template<> WRAITHSHOOTER_API UClass* StaticClass<AMagicPill>()
	{
		return AMagicPill::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMagicPill(Z_Construct_UClass_AMagicPill, &AMagicPill::StaticClass, TEXT("/Script/WraithShooter"), TEXT("AMagicPill"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicPill);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
