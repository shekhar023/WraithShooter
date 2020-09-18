// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WraithShooter/Public/BattleRoyalGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleRoyalGameMode() {}
// Cross Module References
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_ABattleRoyalGameMode_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_ABattleRoyalGameMode();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AWraithShooterGameModeBase();
	UPackage* Z_Construct_UPackage__Script_WraithShooter();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister();
// End Cross Module References
	void ABattleRoyalGameMode::StaticRegisterNativesABattleRoyalGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABattleRoyalGameMode_NoRegister()
	{
		return ABattleRoyalGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABattleRoyalGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlivePlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlivePlayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlivePlayers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattleRoyalGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWraithShooterGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleRoyalGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BattleRoyalGameMode.h" },
		{ "ModuleRelativePath", "Public/BattleRoyalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleRoyalGameMode_Statics::NewProp_AlivePlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/BattleRoyalGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABattleRoyalGameMode_Statics::NewProp_AlivePlayers = { "AlivePlayers", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattleRoyalGameMode, AlivePlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABattleRoyalGameMode_Statics::NewProp_AlivePlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleRoyalGameMode_Statics::NewProp_AlivePlayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattleRoyalGameMode_Statics::NewProp_AlivePlayers_Inner = { "AlivePlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AShooterPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABattleRoyalGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleRoyalGameMode_Statics::NewProp_AlivePlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleRoyalGameMode_Statics::NewProp_AlivePlayers_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattleRoyalGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleRoyalGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattleRoyalGameMode_Statics::ClassParams = {
		&ABattleRoyalGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABattleRoyalGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABattleRoyalGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABattleRoyalGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleRoyalGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABattleRoyalGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABattleRoyalGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattleRoyalGameMode, 247579802);
	template<> WRAITHSHOOTER_API UClass* StaticClass<ABattleRoyalGameMode>()
	{
		return ABattleRoyalGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleRoyalGameMode(Z_Construct_UClass_ABattleRoyalGameMode, &ABattleRoyalGameMode::StaticClass, TEXT("/Script/WraithShooter"), TEXT("ABattleRoyalGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleRoyalGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
