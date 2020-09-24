// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WraithShooter/Public/WraithUIInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWraithUIInterface() {}
// Cross Module References
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_UWraithUIInterface_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_UWraithUIInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_WraithShooter();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IWraithUIInterface::execEndFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndFocus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWraithUIInterface::execStartFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFocus_Implementation();
		P_NATIVE_END;
	}
	void IWraithUIInterface::EndFocus()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EndFocus instead.");
	}
	void IWraithUIInterface::OnInteract(AActor* Caller)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInteract instead.");
	}
	void IWraithUIInterface::StartFocus()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartFocus instead.");
	}
	void UWraithUIInterface::StaticRegisterNativesUWraithUIInterface()
	{
		UClass* Class = UWraithUIInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndFocus", &IWraithUIInterface::execEndFocus },
			{ "StartFocus", &IWraithUIInterface::execStartFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWraithUIInterface_EndFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWraithUIInterface_EndFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/WraithUIInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWraithUIInterface_EndFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWraithUIInterface, nullptr, "EndFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWraithUIInterface_EndFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWraithUIInterface_EndFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWraithUIInterface_EndFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWraithUIInterface_EndFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWraithUIInterface_OnInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWraithUIInterface_OnInteract_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WraithUIInterface_eventOnInteract_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWraithUIInterface_OnInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWraithUIInterface_OnInteract_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWraithUIInterface_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/WraithUIInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWraithUIInterface_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWraithUIInterface, nullptr, "OnInteract", nullptr, nullptr, sizeof(WraithUIInterface_eventOnInteract_Parms), Z_Construct_UFunction_UWraithUIInterface_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWraithUIInterface_OnInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWraithUIInterface_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWraithUIInterface_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWraithUIInterface_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWraithUIInterface_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWraithUIInterface_StartFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWraithUIInterface_StartFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/WraithUIInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWraithUIInterface_StartFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWraithUIInterface, nullptr, "StartFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWraithUIInterface_StartFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWraithUIInterface_StartFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWraithUIInterface_StartFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWraithUIInterface_StartFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWraithUIInterface_NoRegister()
	{
		return UWraithUIInterface::StaticClass();
	}
	struct Z_Construct_UClass_UWraithUIInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWraithUIInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWraithUIInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWraithUIInterface_EndFocus, "EndFocus" }, // 4276915832
		{ &Z_Construct_UFunction_UWraithUIInterface_OnInteract, "OnInteract" }, // 269457561
		{ &Z_Construct_UFunction_UWraithUIInterface_StartFocus, "StartFocus" }, // 311644748
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWraithUIInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WraithUIInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWraithUIInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWraithUIInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWraithUIInterface_Statics::ClassParams = {
		&UWraithUIInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWraithUIInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWraithUIInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWraithUIInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWraithUIInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWraithUIInterface, 3090342381);
	template<> WRAITHSHOOTER_API UClass* StaticClass<UWraithUIInterface>()
	{
		return UWraithUIInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWraithUIInterface(Z_Construct_UClass_UWraithUIInterface, &UWraithUIInterface::StaticClass, TEXT("/Script/WraithShooter"), TEXT("UWraithUIInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWraithUIInterface);
	static FName NAME_UWraithUIInterface_EndFocus = FName(TEXT("EndFocus"));
	void IWraithUIInterface::Execute_EndFocus(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWraithUIInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UWraithUIInterface_EndFocus);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IWraithUIInterface*)(O->GetNativeInterfaceAddress(UWraithUIInterface::StaticClass())))
		{
			I->EndFocus_Implementation();
		}
	}
	static FName NAME_UWraithUIInterface_OnInteract = FName(TEXT("OnInteract"));
	void IWraithUIInterface::Execute_OnInteract(UObject* O, AActor* Caller)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWraithUIInterface::StaticClass()));
		WraithUIInterface_eventOnInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWraithUIInterface_OnInteract);
		if (Func)
		{
			Parms.Caller=Caller;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UWraithUIInterface_StartFocus = FName(TEXT("StartFocus"));
	void IWraithUIInterface::Execute_StartFocus(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWraithUIInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UWraithUIInterface_StartFocus);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IWraithUIInterface*)(O->GetNativeInterfaceAddress(UWraithUIInterface::StaticClass())))
		{
			I->StartFocus_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
