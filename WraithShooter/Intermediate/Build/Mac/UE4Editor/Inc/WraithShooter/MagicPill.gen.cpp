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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_UWraithUIInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMagicPill::execOnRep_PowerupActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PowerupActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicPill::execOnTickPowerup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTickPowerup();
		P_NATIVE_END;
	}
	static FName NAME_AMagicPill_OnActivated = FName(TEXT("OnActivated"));
	void AMagicPill::OnActivated(AActor* ActiveFor)
	{
		MagicPill_eventOnActivated_Parms Parms;
		Parms.ActiveFor=ActiveFor;
		ProcessEvent(FindFunctionChecked(NAME_AMagicPill_OnActivated),&Parms);
	}
	static FName NAME_AMagicPill_OnExpired = FName(TEXT("OnExpired"));
	void AMagicPill::OnExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMagicPill_OnExpired),NULL);
	}
	static FName NAME_AMagicPill_OnPowerupStateChanged = FName(TEXT("OnPowerupStateChanged"));
	void AMagicPill::OnPowerupStateChanged(bool bNewIsActive)
	{
		MagicPill_eventOnPowerupStateChanged_Parms Parms;
		Parms.bNewIsActive=bNewIsActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMagicPill_OnPowerupStateChanged),&Parms);
	}
	static FName NAME_AMagicPill_OnPowerupTicked = FName(TEXT("OnPowerupTicked"));
	void AMagicPill::OnPowerupTicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMagicPill_OnPowerupTicked),NULL);
	}
	void AMagicPill::StaticRegisterNativesAMagicPill()
	{
		UClass* Class = AMagicPill::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_PowerupActive", &AMagicPill::execOnRep_PowerupActive },
			{ "OnTickPowerup", &AMagicPill::execOnTickPowerup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMagicPill_OnActivated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveFor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagicPill_OnActivated_Statics::NewProp_ActiveFor = { "ActiveFor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicPill_eventOnActivated_Parms, ActiveFor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicPill_OnActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicPill_OnActivated_Statics::NewProp_ActiveFor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicPill_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/MagicPill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicPill_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicPill, nullptr, "OnActivated", nullptr, nullptr, sizeof(MagicPill_eventOnActivated_Parms), Z_Construct_UFunction_AMagicPill_OnActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicPill_OnActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicPill_OnActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicPill_OnActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicPill_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicPill_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicPill_OnExpired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicPill_OnExpired_Statics::Function_MetaDataParams[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/MagicPill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicPill_OnExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicPill, nullptr, "OnExpired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicPill_OnExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicPill_OnExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicPill_OnExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicPill_OnExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicPill_OnPowerupStateChanged_Statics
	{
		static void NewProp_bNewIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMagicPill_OnPowerupStateChanged_Statics::NewProp_bNewIsActive_SetBit(void* Obj)
	{
		((MagicPill_eventOnPowerupStateChanged_Parms*)Obj)->bNewIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMagicPill_OnPowerupStateChanged_Statics::NewProp_bNewIsActive = { "bNewIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicPill_eventOnPowerupStateChanged_Parms), &Z_Construct_UFunction_AMagicPill_OnPowerupStateChanged_Statics::NewProp_bNewIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicPill_OnPowerupStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicPill_OnPowerupStateChanged_Statics::NewProp_bNewIsActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicPill_OnPowerupStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/MagicPill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicPill_OnPowerupStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicPill, nullptr, "OnPowerupStateChanged", nullptr, nullptr, sizeof(MagicPill_eventOnPowerupStateChanged_Parms), Z_Construct_UFunction_AMagicPill_OnPowerupStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicPill_OnPowerupStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicPill_OnPowerupStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicPill_OnPowerupStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicPill_OnPowerupStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicPill_OnPowerupStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicPill_OnPowerupTicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicPill_OnPowerupTicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/MagicPill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicPill_OnPowerupTicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicPill, nullptr, "OnPowerupTicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicPill_OnPowerupTicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicPill_OnPowerupTicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicPill_OnPowerupTicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicPill_OnPowerupTicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicPill_OnRep_PowerupActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicPill_OnRep_PowerupActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagicPill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicPill_OnRep_PowerupActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicPill, nullptr, "OnRep_PowerupActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicPill_OnRep_PowerupActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicPill_OnRep_PowerupActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicPill_OnRep_PowerupActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicPill_OnRep_PowerupActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicPill_OnTickPowerup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicPill_OnTickPowerup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagicPill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicPill_OnTickPowerup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicPill, nullptr, "OnTickPowerup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicPill_OnTickPowerup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicPill_OnTickPowerup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicPill_OnTickPowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicPill_OnTickPowerup_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPowerupActive_MetaData[];
#endif
		static void NewProp_bIsPowerupActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPowerupActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNoOfTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNoOfTicks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerupInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerupInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InteractMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicPill_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMagicPill_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagicPill_OnActivated, "OnActivated" }, // 1739749270
		{ &Z_Construct_UFunction_AMagicPill_OnExpired, "OnExpired" }, // 3644714312
		{ &Z_Construct_UFunction_AMagicPill_OnPowerupStateChanged, "OnPowerupStateChanged" }, // 1788827476
		{ &Z_Construct_UFunction_AMagicPill_OnPowerupTicked, "OnPowerupTicked" }, // 460756015
		{ &Z_Construct_UFunction_AMagicPill_OnRep_PowerupActive, "OnRep_PowerupActive" }, // 4173498666
		{ &Z_Construct_UFunction_AMagicPill_OnTickPowerup, "OnTickPowerup" }, // 3193667429
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicPill_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MagicPill.h" },
		{ "ModuleRelativePath", "Public/MagicPill.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicPill_Statics::NewProp_bIsPowerupActive_MetaData[] = {
		{ "Comment", "// Keeps state of the power-up\n" },
		{ "ModuleRelativePath", "Public/MagicPill.h" },
		{ "ToolTip", "Keeps state of the power-up" },
	};
#endif
	void Z_Construct_UClass_AMagicPill_Statics::NewProp_bIsPowerupActive_SetBit(void* Obj)
	{
		((AMagicPill*)Obj)->bIsPowerupActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMagicPill_Statics::NewProp_bIsPowerupActive = { "bIsPowerupActive", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMagicPill), &Z_Construct_UClass_AMagicPill_Statics::NewProp_bIsPowerupActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMagicPill_Statics::NewProp_bIsPowerupActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicPill_Statics::NewProp_bIsPowerupActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicPill_Statics::NewProp_TotalNoOfTicks_MetaData[] = {
		{ "Category", "Powerups" },
		{ "Comment", "/* Total times we apply the powerup effect */" },
		{ "ModuleRelativePath", "Public/MagicPill.h" },
		{ "ToolTip", "Total times we apply the powerup effect" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMagicPill_Statics::NewProp_TotalNoOfTicks = { "TotalNoOfTicks", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicPill, TotalNoOfTicks), METADATA_PARAMS(Z_Construct_UClass_AMagicPill_Statics::NewProp_TotalNoOfTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicPill_Statics::NewProp_TotalNoOfTicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicPill_Statics::NewProp_PowerupInterval_MetaData[] = {
		{ "Category", "Powerups" },
		{ "Comment", "/* Time between powerup ticks */" },
		{ "ModuleRelativePath", "Public/MagicPill.h" },
		{ "ToolTip", "Time between powerup ticks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMagicPill_Statics::NewProp_PowerupInterval = { "PowerupInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicPill, PowerupInterval), METADATA_PARAMS(Z_Construct_UClass_AMagicPill_Statics::NewProp_PowerupInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicPill_Statics::NewProp_PowerupInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicPill_Statics::NewProp_InteractMessage_MetaData[] = {
		{ "Category", "InteractMessage" },
		{ "ModuleRelativePath", "Public/MagicPill.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AMagicPill_Statics::NewProp_InteractMessage = { "InteractMessage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicPill, InteractMessage), METADATA_PARAMS(Z_Construct_UClass_AMagicPill_Statics::NewProp_InteractMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicPill_Statics::NewProp_InteractMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicPill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicPill_Statics::NewProp_bIsPowerupActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicPill_Statics::NewProp_TotalNoOfTicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicPill_Statics::NewProp_PowerupInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicPill_Statics::NewProp_InteractMessage,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMagicPill_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWraithUIInterface_NoRegister, (int32)VTABLE_OFFSET(AMagicPill, IWraithUIInterface), false },
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
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagicPill_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(AMagicPill, 874911194);
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
