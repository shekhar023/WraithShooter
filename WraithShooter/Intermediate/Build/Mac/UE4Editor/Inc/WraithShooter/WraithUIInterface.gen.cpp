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
// End Cross Module References
	DEFINE_FUNCTION(IWraithUIInterface::execReactToPlayerEntered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReactToPlayerEntered_Implementation();
		P_NATIVE_END;
	}
	bool IWraithUIInterface::ReactToPlayerEntered()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReactToPlayerEntered instead.");
		WraithUIInterface_eventReactToPlayerEntered_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IWraithUIInterface::ReactToPlayerExited()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReactToPlayerExited instead.");
		WraithUIInterface_eventReactToPlayerExited_Parms Parms;
		return Parms.ReturnValue;
	}
	void UWraithUIInterface::StaticRegisterNativesUWraithUIInterface()
	{
		UClass* Class = UWraithUIInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReactToPlayerEntered", &IWraithUIInterface::execReactToPlayerEntered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerEntered_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerEntered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WraithUIInterface_eventReactToPlayerEntered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerEntered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WraithUIInterface_eventReactToPlayerEntered_Parms), &Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerEntered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerEntered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerEntered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interfaces" },
		{ "Comment", "//Declare function must be implemented in c++\n" },
		{ "ModuleRelativePath", "Public/WraithUIInterface.h" },
		{ "ToolTip", "Declare function must be implemented in c++" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWraithUIInterface, nullptr, "ReactToPlayerEntered", nullptr, nullptr, sizeof(WraithUIInterface_eventReactToPlayerEntered_Parms), Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerExited_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerExited_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WraithUIInterface_eventReactToPlayerExited_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerExited_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WraithUIInterface_eventReactToPlayerExited_Parms), &Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerExited_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerExited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerExited_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerExited_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interfaces" },
		{ "ModuleRelativePath", "Public/WraithUIInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWraithUIInterface, nullptr, "ReactToPlayerExited", nullptr, nullptr, sizeof(WraithUIInterface_eventReactToPlayerExited_Parms), Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerExited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerExited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerExited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerExited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerExited_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerEntered, "ReactToPlayerEntered" }, // 3574366759
		{ &Z_Construct_UFunction_UWraithUIInterface_ReactToPlayerExited, "ReactToPlayerExited" }, // 1398500375
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
	IMPLEMENT_CLASS(UWraithUIInterface, 582976382);
	template<> WRAITHSHOOTER_API UClass* StaticClass<UWraithUIInterface>()
	{
		return UWraithUIInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWraithUIInterface(Z_Construct_UClass_UWraithUIInterface, &UWraithUIInterface::StaticClass, TEXT("/Script/WraithShooter"), TEXT("UWraithUIInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWraithUIInterface);
	static FName NAME_UWraithUIInterface_ReactToPlayerEntered = FName(TEXT("ReactToPlayerEntered"));
	bool IWraithUIInterface::Execute_ReactToPlayerEntered(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWraithUIInterface::StaticClass()));
		WraithUIInterface_eventReactToPlayerEntered_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWraithUIInterface_ReactToPlayerEntered);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IWraithUIInterface*)(O->GetNativeInterfaceAddress(UWraithUIInterface::StaticClass())))
		{
			Parms.ReturnValue = I->ReactToPlayerEntered_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWraithUIInterface_ReactToPlayerExited = FName(TEXT("ReactToPlayerExited"));
	bool IWraithUIInterface::Execute_ReactToPlayerExited(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWraithUIInterface::StaticClass()));
		WraithUIInterface_eventReactToPlayerExited_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWraithUIInterface_ReactToPlayerExited);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
