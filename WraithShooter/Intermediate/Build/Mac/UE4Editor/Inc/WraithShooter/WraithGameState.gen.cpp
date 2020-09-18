// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WraithShooter/Public/WraithGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWraithGameState() {}
// Cross Module References
	WRAITHSHOOTER_API UFunction* Z_Construct_UDelegateFunction_WraithShooter_WinnerFound__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_WraithShooter();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AWraithGameState_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AWraithGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AShooterPlayerState_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_WraithShooter_WinnerFound__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WraithShooter_WinnerFound__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WraithGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WraithShooter_WinnerFound__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WraithShooter, nullptr, "WinnerFound__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WraithShooter_WinnerFound__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WraithShooter_WinnerFound__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WraithShooter_WinnerFound__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_WraithShooter_WinnerFound__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AWraithGameState::execOnRep_Winner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Winner();
		P_NATIVE_END;
	}
	void AWraithGameState::StaticRegisterNativesAWraithGameState()
	{
		UClass* Class = AWraithGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Winner", &AWraithGameState::execOnRep_Winner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWraithGameState_OnRep_Winner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWraithGameState_OnRep_Winner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WraithGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWraithGameState_OnRep_Winner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWraithGameState, nullptr, "OnRep_Winner", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWraithGameState_OnRep_Winner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWraithGameState_OnRep_Winner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWraithGameState_OnRep_Winner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWraithGameState_OnRep_Winner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWraithGameState_NoRegister()
	{
		return AWraithGameState::StaticClass();
	}
	struct Z_Construct_UClass_AWraithGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWinnerFound_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWinnerFound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Winner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Winner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWraithGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWraithGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWraithGameState_OnRep_Winner, "OnRep_Winner" }, // 1003085978
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWraithGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "WraithGameState.h" },
		{ "ModuleRelativePath", "Public/WraithGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWraithGameState_Statics::NewProp_OnWinnerFound_MetaData[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Public/WraithGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWraithGameState_Statics::NewProp_OnWinnerFound = { "OnWinnerFound", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWraithGameState, OnWinnerFound), Z_Construct_UDelegateFunction_WraithShooter_WinnerFound__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AWraithGameState_Statics::NewProp_OnWinnerFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWraithGameState_Statics::NewProp_OnWinnerFound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWraithGameState_Statics::NewProp_Winner_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "//The Winner of the Match\n" },
		{ "ModuleRelativePath", "Public/WraithGameState.h" },
		{ "ToolTip", "The Winner of the Match" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWraithGameState_Statics::NewProp_Winner = { "Winner", "OnRep_Winner", (EPropertyFlags)0x0010000100002034, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWraithGameState, Winner), Z_Construct_UClass_AShooterPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWraithGameState_Statics::NewProp_Winner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWraithGameState_Statics::NewProp_Winner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWraithGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWraithGameState_Statics::NewProp_OnWinnerFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWraithGameState_Statics::NewProp_Winner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWraithGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWraithGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWraithGameState_Statics::ClassParams = {
		&AWraithGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWraithGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWraithGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWraithGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWraithGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWraithGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWraithGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWraithGameState, 1732491297);
	template<> WRAITHSHOOTER_API UClass* StaticClass<AWraithGameState>()
	{
		return AWraithGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWraithGameState(Z_Construct_UClass_AWraithGameState, &AWraithGameState::StaticClass, TEXT("/Script/WraithShooter"), TEXT("AWraithGameState"), false, nullptr, nullptr, nullptr);

	void AWraithGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Winner(TEXT("Winner"));

		const bool bIsValid = true
			&& Name_Winner == ClassReps[(int32)ENetFields_Private::Winner].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWraithGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWraithGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
