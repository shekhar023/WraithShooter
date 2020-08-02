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
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AMagicPill_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void APillSpawner::StaticRegisterNativesAPillSpawner()
	{
	}
	UClass* Z_Construct_UClass_APillSpawner_NoRegister()
	{
		return APillSpawner::StaticClass();
	}
	struct Z_Construct_UClass_APillSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RespawnSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickUpSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickUpSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PillFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PillFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PillInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PillInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APillSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APillSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PillSpawner.h" },
		{ "ModuleRelativePath", "Public/PillSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APillSpawner_Statics::NewProp_RespawnSound_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/PillSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APillSpawner_Statics::NewProp_RespawnSound = { "RespawnSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APillSpawner, RespawnSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APillSpawner_Statics::NewProp_RespawnSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APillSpawner_Statics::NewProp_RespawnSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APillSpawner_Statics::NewProp_PickUpSound_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/PillSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APillSpawner_Statics::NewProp_PickUpSound = { "PickUpSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APillSpawner, PickUpSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APillSpawner_Statics::NewProp_PickUpSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APillSpawner_Statics::NewProp_PickUpSound_MetaData)) };
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APillSpawner_Statics::NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "ModuleRelativePath", "Public/PillSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APillSpawner_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APillSpawner, CooldownDuration), METADATA_PARAMS(Z_Construct_UClass_APillSpawner_Statics::NewProp_CooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APillSpawner_Statics::NewProp_CooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APillSpawner_Statics::NewProp_DecalComp_MetaData[] = {
		{ "Category", "Spawning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PillSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APillSpawner_Statics::NewProp_DecalComp = { "DecalComp", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APillSpawner, DecalComp), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APillSpawner_Statics::NewProp_DecalComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APillSpawner_Statics::NewProp_DecalComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APillSpawner_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "Spawning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PillSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APillSpawner_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APillSpawner, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APillSpawner_Statics::NewProp_SphereComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APillSpawner_Statics::NewProp_SphereComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APillSpawner_Statics::NewProp_PillInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/PillSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APillSpawner_Statics::NewProp_PillInstance = { "PillInstance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APillSpawner, PillInstance), Z_Construct_UClass_AMagicPill_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APillSpawner_Statics::NewProp_PillInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APillSpawner_Statics::NewProp_PillInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APillSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APillSpawner_Statics::NewProp_RespawnSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APillSpawner_Statics::NewProp_PickUpSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APillSpawner_Statics::NewProp_PillFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APillSpawner_Statics::NewProp_ItemToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APillSpawner_Statics::NewProp_CooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APillSpawner_Statics::NewProp_DecalComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APillSpawner_Statics::NewProp_SphereComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APillSpawner_Statics::NewProp_PillInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APillSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APillSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APillSpawner_Statics::ClassParams = {
		&APillSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APillSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(APillSpawner, 2882318699);
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
