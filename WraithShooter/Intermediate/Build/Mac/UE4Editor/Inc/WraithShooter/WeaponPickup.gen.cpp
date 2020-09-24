// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WraithShooter/Public/Actors/WeaponPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponPickup() {}
// Cross Module References
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AWeaponPickup_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AWeaponPickup();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_APickupActor();
	UPackage* Z_Construct_UPackage__Script_WraithShooter();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AGun_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AWeaponPickup::StaticRegisterNativesAWeaponPickup()
	{
	}
	UClass* Z_Construct_UClass_AWeaponPickup_NoRegister()
	{
		return AWeaponPickup::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/WeaponPickup.h" },
		{ "ModuleRelativePath", "Public/Actors/WeaponPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "WeaponClass" },
		{ "ModuleRelativePath", "Public/Actors/WeaponPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponPickup, WeaponClass), Z_Construct_UClass_AGun_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponPickup_Statics::ClassParams = {
		&AWeaponPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeaponPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponPickup, 3339793833);
	template<> WRAITHSHOOTER_API UClass* StaticClass<AWeaponPickup>()
	{
		return AWeaponPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponPickup(Z_Construct_UClass_AWeaponPickup, &AWeaponPickup::StaticClass, TEXT("/Script/WraithShooter"), TEXT("AWeaponPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
