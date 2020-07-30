// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WraithShooter/Public/ShooterPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterPlayerController() {}
// Cross Module References
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AShooterPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_WraithShooter();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AShooterPlayerController::StaticRegisterNativesAShooterPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister()
	{
		return AShooterPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AShooterPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RestartDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinScreenClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WinScreenClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseScreenClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LoseScreenClass;
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
	UObject* (*const Z_Construct_UClass_AShooterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ShooterPlayerController.h" },
		{ "ModuleRelativePath", "Public/ShooterPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_RestartDelay_MetaData[] = {
		{ "Category", "ShooterPlayerController" },
		{ "Comment", "//Restart Delay\n" },
		{ "ModuleRelativePath", "Public/ShooterPlayerController.h" },
		{ "ToolTip", "Restart Delay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_RestartDelay = { "RestartDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerController, RestartDelay), METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_RestartDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_RestartDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_WinScreenClass_MetaData[] = {
		{ "Category", "ShooterPlayerController" },
		{ "Comment", "//Win Screen\n" },
		{ "ModuleRelativePath", "Public/ShooterPlayerController.h" },
		{ "ToolTip", "Win Screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_WinScreenClass = { "WinScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerController, WinScreenClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_WinScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_WinScreenClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_LoseScreenClass_MetaData[] = {
		{ "Category", "ShooterPlayerController" },
		{ "Comment", "//Lose Screen\n" },
		{ "ModuleRelativePath", "Public/ShooterPlayerController.h" },
		{ "ToolTip", "Lose Screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_LoseScreenClass = { "LoseScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerController, LoseScreenClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_LoseScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_LoseScreenClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUDClass_MetaData[] = {
		{ "Category", "ShooterPlayerController" },
		{ "Comment", "//Main HUD\n" },
		{ "ModuleRelativePath", "Public/ShooterPlayerController.h" },
		{ "ToolTip", "Main HUD" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerController, HUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUDClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUD_MetaData[] = {
		{ "Comment", "//UUserWidget Instance\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShooterPlayerController.h" },
		{ "ToolTip", "UUserWidget Instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerController, HUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_RestartDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_WinScreenClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_LoseScreenClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUDClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterPlayerController_Statics::ClassParams = {
		&AShooterPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterPlayerController, 1598240589);
	template<> WRAITHSHOOTER_API UClass* StaticClass<AShooterPlayerController>()
	{
		return AShooterPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterPlayerController(Z_Construct_UClass_AShooterPlayerController, &AShooterPlayerController::StaticClass, TEXT("/Script/WraithShooter"), TEXT("AShooterPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
