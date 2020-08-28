// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WraithShooter/Public/SkillStructures.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillStructures() {}
// Cross Module References
	WRAITHSHOOTER_API UEnum* Z_Construct_UEnum_WraithShooter_ESkills();
	UPackage* Z_Construct_UPackage__Script_WraithShooter();
	WRAITHSHOOTER_API UEnum* Z_Construct_UEnum_WraithShooter_EDefensiveAbility();
	WRAITHSHOOTER_API UEnum* Z_Construct_UEnum_WraithShooter_EOffensiveAbility();
	WRAITHSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FSkillsAttributes();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	WRAITHSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FSkillData();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
// End Cross Module References
	static UEnum* ESkills_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WraithShooter_ESkills, Z_Construct_UPackage__Script_WraithShooter(), TEXT("ESkills"));
		}
		return Singleton;
	}
	template<> WRAITHSHOOTER_API UEnum* StaticEnum<ESkills>()
	{
		return ESkills_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkills(ESkills_StaticEnum, TEXT("/Script/WraithShooter"), TEXT("ESkills"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WraithShooter_ESkills_Hash() { return 1388318601U; }
	UEnum* Z_Construct_UEnum_WraithShooter_ESkills()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WraithShooter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkills"), 0, Get_Z_Construct_UEnum_WraithShooter_ESkills_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkills::None", (int64)ESkills::None },
				{ "ESkills::DoubleJump", (int64)ESkills::DoubleJump },
				{ "ESkills::BackDash", (int64)ESkills::BackDash },
				{ "ESkills::Fireball", (int64)ESkills::Fireball },
				{ "ESkills::ElectroSpark", (int64)ESkills::ElectroSpark },
				{ "ESkills::LensOfTruth", (int64)ESkills::LensOfTruth },
				{ "ESkills::Mist", (int64)ESkills::Mist },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BackDash.Name", "ESkills::BackDash" },
				{ "BlueprintType", "true" },
				{ "Comment", "//MARK:ENUM ESkills\n" },
				{ "DoubleJump.Name", "ESkills::DoubleJump" },
				{ "ElectroSpark.Name", "ESkills::ElectroSpark" },
				{ "Fireball.Name", "ESkills::Fireball" },
				{ "LensOfTruth.Name", "ESkills::LensOfTruth" },
				{ "Mist.Name", "ESkills::Mist" },
				{ "ModuleRelativePath", "Public/SkillStructures.h" },
				{ "None.Name", "ESkills::None" },
				{ "ToolTip", "MARK:ENUM ESkills" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WraithShooter,
				nullptr,
				"ESkills",
				"ESkills",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDefensiveAbility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WraithShooter_EDefensiveAbility, Z_Construct_UPackage__Script_WraithShooter(), TEXT("EDefensiveAbility"));
		}
		return Singleton;
	}
	template<> WRAITHSHOOTER_API UEnum* StaticEnum<EDefensiveAbility>()
	{
		return EDefensiveAbility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDefensiveAbility(EDefensiveAbility_StaticEnum, TEXT("/Script/WraithShooter"), TEXT("EDefensiveAbility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WraithShooter_EDefensiveAbility_Hash() { return 1835689526U; }
	UEnum* Z_Construct_UEnum_WraithShooter_EDefensiveAbility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WraithShooter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDefensiveAbility"), 0, Get_Z_Construct_UEnum_WraithShooter_EDefensiveAbility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDefensiveAbility::None", (int64)EDefensiveAbility::None },
				{ "EDefensiveAbility::LensOfTruth", (int64)EDefensiveAbility::LensOfTruth },
				{ "EDefensiveAbility::Mist", (int64)EDefensiveAbility::Mist },
				{ "EDefensiveAbility::Shield", (int64)EDefensiveAbility::Shield },
				{ "EDefensiveAbility::TimeSlow", (int64)EDefensiveAbility::TimeSlow },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//MARK:ENUM EDefensiveAbility\n" },
				{ "LensOfTruth.Name", "EDefensiveAbility::LensOfTruth" },
				{ "Mist.Name", "EDefensiveAbility::Mist" },
				{ "ModuleRelativePath", "Public/SkillStructures.h" },
				{ "None.Name", "EDefensiveAbility::None" },
				{ "Shield.Name", "EDefensiveAbility::Shield" },
				{ "TimeSlow.Name", "EDefensiveAbility::TimeSlow" },
				{ "ToolTip", "MARK:ENUM EDefensiveAbility" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WraithShooter,
				nullptr,
				"EDefensiveAbility",
				"EDefensiveAbility",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOffensiveAbility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WraithShooter_EOffensiveAbility, Z_Construct_UPackage__Script_WraithShooter(), TEXT("EOffensiveAbility"));
		}
		return Singleton;
	}
	template<> WRAITHSHOOTER_API UEnum* StaticEnum<EOffensiveAbility>()
	{
		return EOffensiveAbility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOffensiveAbility(EOffensiveAbility_StaticEnum, TEXT("/Script/WraithShooter"), TEXT("EOffensiveAbility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WraithShooter_EOffensiveAbility_Hash() { return 1183527216U; }
	UEnum* Z_Construct_UEnum_WraithShooter_EOffensiveAbility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WraithShooter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOffensiveAbility"), 0, Get_Z_Construct_UEnum_WraithShooter_EOffensiveAbility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOffensiveAbility::None", (int64)EOffensiveAbility::None },
				{ "EOffensiveAbility::Fireball", (int64)EOffensiveAbility::Fireball },
				{ "EOffensiveAbility::ElectroSpark", (int64)EOffensiveAbility::ElectroSpark },
				{ "EOffensiveAbility::Bloodlust", (int64)EOffensiveAbility::Bloodlust },
				{ "EOffensiveAbility::ArticBlast", (int64)EOffensiveAbility::ArticBlast },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ArticBlast.Name", "EOffensiveAbility::ArticBlast" },
				{ "Bloodlust.Name", "EOffensiveAbility::Bloodlust" },
				{ "BlueprintType", "true" },
				{ "Comment", "//MARK:ENUM EOffensiveAbility\n" },
				{ "ElectroSpark.Name", "EOffensiveAbility::ElectroSpark" },
				{ "Fireball.Name", "EOffensiveAbility::Fireball" },
				{ "ModuleRelativePath", "Public/SkillStructures.h" },
				{ "None.Name", "EOffensiveAbility::None" },
				{ "ToolTip", "MARK:ENUM EOffensiveAbility" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WraithShooter,
				nullptr,
				"EOffensiveAbility",
				"EOffensiveAbility",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSkillsAttributes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WRAITHSHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FSkillsAttributes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkillsAttributes, Z_Construct_UPackage__Script_WraithShooter(), TEXT("SkillsAttributes"), sizeof(FSkillsAttributes), Get_Z_Construct_UScriptStruct_FSkillsAttributes_Hash());
	}
	return Singleton;
}
template<> WRAITHSHOOTER_API UScriptStruct* StaticStruct<FSkillsAttributes>()
{
	return FSkillsAttributes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkillsAttributes(FSkillsAttributes::StaticStruct, TEXT("/Script/WraithShooter"), TEXT("SkillsAttributes"), false, nullptr, nullptr);
static struct FScriptStruct_WraithShooter_StaticRegisterNativesFSkillsAttributes
{
	FScriptStruct_WraithShooter_StaticRegisterNativesFSkillsAttributes()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkillsAttributes")),new UScriptStruct::TCppStructOps<FSkillsAttributes>);
	}
} ScriptStruct_WraithShooter_StaticRegisterNativesFSkillsAttributes;
	struct Z_Construct_UScriptStruct_FSkillsAttributes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnergyCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnergyCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconSlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconSlate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsAttributes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//MARK: Structure for Skills Attributes\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
		{ "ToolTip", "MARK: Structure for Skills Attributes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkillsAttributes>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "SkillsAttributes" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillsAttributes, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_DamageRadius_MetaData[] = {
		{ "Category", "SkillsAttributes" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_DamageRadius = { "DamageRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillsAttributes, DamageRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_DamageRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_DamageRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "SkillsAttributes" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillsAttributes, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_EnergyCost_MetaData[] = {
		{ "Category", "SkillsAttributes" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_EnergyCost = { "EnergyCost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillsAttributes, EnergyCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_EnergyCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_EnergyCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_IconSlate_MetaData[] = {
		{ "Category", "SkillsAttributes" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_IconSlate = { "IconSlate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillsAttributes, IconSlate), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_IconSlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_IconSlate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SkillsAttributes" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillsAttributes, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkillsAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_DamageRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_EnergyCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_IconSlate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsAttributes_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkillsAttributes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
		nullptr,
		&NewStructOps,
		"SkillsAttributes",
		sizeof(FSkillsAttributes),
		alignof(FSkillsAttributes),
		Z_Construct_UScriptStruct_FSkillsAttributes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsAttributes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillsAttributes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsAttributes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkillsAttributes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkillsAttributes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WraithShooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkillsAttributes"), sizeof(FSkillsAttributes), Get_Z_Construct_UScriptStruct_FSkillsAttributes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkillsAttributes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkillsAttributes_Hash() { return 3137214818U; }
class UScriptStruct* FSkillData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WRAITHSHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FSkillData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkillData, Z_Construct_UPackage__Script_WraithShooter(), TEXT("SkillData"), sizeof(FSkillData), Get_Z_Construct_UScriptStruct_FSkillData_Hash());
	}
	return Singleton;
}
template<> WRAITHSHOOTER_API UScriptStruct* StaticStruct<FSkillData>()
{
	return FSkillData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkillData(FSkillData::StaticStruct, TEXT("/Script/WraithShooter"), TEXT("SkillData"), false, nullptr, nullptr);
static struct FScriptStruct_WraithShooter_StaticRegisterNativesFSkillData
{
	FScriptStruct_WraithShooter_StaticRegisterNativesFSkillData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkillData")),new UScriptStruct::TCppStructOps<FSkillData>);
	}
} ScriptStruct_WraithShooter_StaticRegisterNativesFSkillData;
	struct Z_Construct_UScriptStruct_FSkillData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMagicSkill_MetaData[];
#endif
		static void NewProp_bIsMagicSkill_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMagicSkill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillFontColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillFontColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillBorderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillBorderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//MARK: Structure for Skills Data\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
		{ "ToolTip", "MARK: Structure for Skills Data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkillData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkillData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_bIsMagicSkill_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_bIsMagicSkill_SetBit(void* Obj)
	{
		((FSkillData*)Obj)->bIsMagicSkill = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_bIsMagicSkill = { "bIsMagicSkill", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillData), &Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_bIsMagicSkill_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_bIsMagicSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_bIsMagicSkill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_VFX_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_VFX = { "VFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillData, VFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_VFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_VFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillFontColor_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillFontColor = { "SkillFontColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillData, SkillFontColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillFontColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillFontColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillBorderColor_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillBorderColor = { "SkillBorderColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillData, SkillBorderColor), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillBorderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillBorderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillImage_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillImage = { "SkillImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillData, SkillImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillIcon_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillIcon = { "SkillIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillData, SkillIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_InputButton_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_InputButton = { "InputButton", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillData, InputButton), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_InputButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_InputButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Public/SkillStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkillData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_bIsMagicSkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_VFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillFontColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillBorderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_InputButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_Title,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkillData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
		nullptr,
		&NewStructOps,
		"SkillData",
		sizeof(FSkillData),
		alignof(FSkillData),
		Z_Construct_UScriptStruct_FSkillData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkillData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkillData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WraithShooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkillData"), sizeof(FSkillData), Get_Z_Construct_UScriptStruct_FSkillData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkillData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkillData_Hash() { return 3232979768U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
