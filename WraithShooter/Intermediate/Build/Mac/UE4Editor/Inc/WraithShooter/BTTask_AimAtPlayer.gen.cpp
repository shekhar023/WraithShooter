// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WraithShooter/Public/BTTasks/BTTask_AimAtPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_AimAtPlayer() {}
// Cross Module References
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_UBTTask_AimAtPlayer_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_UBTTask_AimAtPlayer();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_WraithShooter();
// End Cross Module References
	void UBTTask_AimAtPlayer::StaticRegisterNativesUBTTask_AimAtPlayer()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_AimAtPlayer_NoRegister()
	{
		return UBTTask_AimAtPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_AimAtPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_AimAtPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_AimAtPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTTasks/BTTask_AimAtPlayer.h" },
		{ "ModuleRelativePath", "Public/BTTasks/BTTask_AimAtPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_AimAtPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_AimAtPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_AimAtPlayer_Statics::ClassParams = {
		&UBTTask_AimAtPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_AimAtPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AimAtPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_AimAtPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_AimAtPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_AimAtPlayer, 627291939);
	template<> WRAITHSHOOTER_API UClass* StaticClass<UBTTask_AimAtPlayer>()
	{
		return UBTTask_AimAtPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_AimAtPlayer(Z_Construct_UClass_UBTTask_AimAtPlayer, &UBTTask_AimAtPlayer::StaticClass, TEXT("/Script/WraithShooter"), TEXT("UBTTask_AimAtPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_AimAtPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
