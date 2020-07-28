// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WraithShooter/Public/KillemAllGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillemAllGameMode() {}
// Cross Module References
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AKillemAllGameMode_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AKillemAllGameMode();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AWraithShooterGameModeBase();
	UPackage* Z_Construct_UPackage__Script_WraithShooter();
// End Cross Module References
	void AKillemAllGameMode::StaticRegisterNativesAKillemAllGameMode()
	{
	}
	UClass* Z_Construct_UClass_AKillemAllGameMode_NoRegister()
	{
		return AKillemAllGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AKillemAllGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKillemAllGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWraithShooterGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillemAllGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "KillemAllGameMode.h" },
		{ "ModuleRelativePath", "Public/KillemAllGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKillemAllGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKillemAllGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKillemAllGameMode_Statics::ClassParams = {
		&AKillemAllGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AKillemAllGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKillemAllGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKillemAllGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKillemAllGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKillemAllGameMode, 658137524);
	template<> WRAITHSHOOTER_API UClass* StaticClass<AKillemAllGameMode>()
	{
		return AKillemAllGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKillemAllGameMode(Z_Construct_UClass_AKillemAllGameMode, &AKillemAllGameMode::StaticClass, TEXT("/Script/WraithShooter"), TEXT("AKillemAllGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKillemAllGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
