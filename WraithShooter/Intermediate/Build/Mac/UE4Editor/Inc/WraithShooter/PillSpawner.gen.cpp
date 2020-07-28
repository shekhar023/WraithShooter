// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WraithShooter/Public/PillSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePillSpawner() {}
// Cross Module References
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_APillSpawner_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_APillSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WraithShooter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AMagicPill_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(APillSpawner::execGetRandomPointInValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRandomPointInValue();
		P_NATIVE_END;
	}
	void APillSpawner::StaticRegisterNativesAPillSpawner()
	{
		UClass* Class = APillSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomPointInValue", &APillSpawner::execGetRandomPointInValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APillSpawner_GetRandomPointInValue_Statics
	{
		struct PillSpawner_eventGetRandomPointInValue_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APillSpawner_GetRandomPointInValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PillSpawner_eventGetRandomPointInValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APillSpawner_GetRandomPointInValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APillSpawner_GetRandomPointInValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APillSpawner_GetRandomPointInValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/PillSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APillSpawner_GetRandomPointInValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APillSpawner, nullptr, "GetRandomPointInValue", nullptr, nullptr, sizeof(PillSpawner_eventGetRandomPointInValue_Parms), Z_Construct_UFunction_APillSpawner_GetRandomPointInValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APillSpawner_GetRandomPointInValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APillSpawner_GetRandomPointInValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APillSpawner_GetRandomPointInValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APillSpawner_GetRandomPointInValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APillSpawner_GetRandomPointInValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APillSpawner_NoRegister()
	{
		return APillSpawner::StaticClass();
	}
	struct Z_Construct_UClass_APillSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawningVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawningVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PillFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PillFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APillSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APillSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APillSpawner_GetRandomPointInValue, "GetRandomPointInValue" }, // 2192035846
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APillSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PillSpawner.h" },
		{ "ModuleRelativePath", "Public/PillSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APillSpawner_Statics::NewProp_SpawningVolume_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PillSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APillSpawner_Statics::NewProp_SpawningVolume = { "SpawningVolume", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APillSpawner, SpawningVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APillSpawner_Statics::NewProp_SpawningVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APillSpawner_Statics::NewProp_SpawningVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APillSpawner_Statics::NewProp_PillFX_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/PillSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APillSpawner_Statics::NewProp_PillFX = { "PillFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APillSpawner, PillFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APillSpawner_Statics::NewProp_PillFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APillSpawner_Statics::NewProp_PillFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APillSpawner_Statics::NewProp_ItemToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/PillSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APillSpawner_Statics::NewProp_ItemToSpawn = { "ItemToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APillSpawner, ItemToSpawn), Z_Construct_UClass_AMagicPill_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APillSpawner_Statics::NewProp_ItemToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APillSpawner_Statics::NewProp_ItemToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APillSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APillSpawner_Statics::NewProp_SpawningVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APillSpawner_Statics::NewProp_PillFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APillSpawner_Statics::NewProp_ItemToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APillSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APillSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APillSpawner_Statics::ClassParams = {
		&APillSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APillSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APillSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APillSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APillSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APillSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APillSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APillSpawner, 1695517265);
	template<> WRAITHSHOOTER_API UClass* StaticClass<APillSpawner>()
	{
		return APillSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APillSpawner(Z_Construct_UClass_APillSpawner, &APillSpawner::StaticClass, TEXT("/Script/WraithShooter"), TEXT("APillSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APillSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
