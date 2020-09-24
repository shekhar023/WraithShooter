// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WraithShooter/Public/Actors/PickupActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupActor() {}
// Cross Module References
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_APickupActor_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_APickupActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WraithShooter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_UWraithUIInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APickupActor::execGetMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetMeshComponent();
		P_NATIVE_END;
	}
	void APickupActor::StaticRegisterNativesAPickupActor()
	{
		UClass* Class = APickupActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMeshComponent", &APickupActor::execGetMeshComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupActor_GetMeshComponent_Statics
	{
		struct PickupActor_eventGetMeshComponent_Parms
		{
			UStaticMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupActor_GetMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupActor_GetMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickupActor_eventGetMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APickupActor_GetMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupActor_GetMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupActor_GetMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupActor_GetMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupActor_GetMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/PickupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupActor_GetMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupActor, nullptr, "GetMeshComponent", nullptr, nullptr, sizeof(PickupActor_eventGetMeshComponent_Parms), Z_Construct_UFunction_APickupActor_GetMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupActor_GetMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupActor_GetMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupActor_GetMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupActor_GetMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupActor_GetMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickupActor_NoRegister()
	{
		return APickupActor::StaticClass();
	}
	struct Z_Construct_UClass_APickupActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InteractMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupActor_GetMeshComponent, "GetMeshComponent" }, // 3889852906
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/PickupActor.h" },
		{ "ModuleRelativePath", "Public/Actors/PickupActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupActor_Statics::NewProp_InteractMessage_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "ModuleRelativePath", "Public/Actors/PickupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_APickupActor_Statics::NewProp_InteractMessage = { "InteractMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupActor, InteractMessage), METADATA_PARAMS(Z_Construct_UClass_APickupActor_Statics::NewProp_InteractMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupActor_Statics::NewProp_InteractMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupActor_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PickupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupActor_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupActor, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupActor_Statics::NewProp_SphereComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupActor_Statics::NewProp_SphereComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupActor_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PickupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupActor_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupActor, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupActor_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupActor_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupActor_Statics::NewProp_InteractMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupActor_Statics::NewProp_SphereComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupActor_Statics::NewProp_MeshComp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APickupActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWraithUIInterface_NoRegister, (int32)VTABLE_OFFSET(APickupActor, IWraithUIInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickupActor_Statics::ClassParams = {
		&APickupActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickupActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickupActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickupActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickupActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickupActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickupActor, 3023548290);
	template<> WRAITHSHOOTER_API UClass* StaticClass<APickupActor>()
	{
		return APickupActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickupActor(Z_Construct_UClass_APickupActor, &APickupActor::StaticClass, TEXT("/Script/WraithShooter"), TEXT("APickupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
