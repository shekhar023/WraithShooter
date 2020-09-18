// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WraithShooter/Public/ShooterCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCharacter() {}
// Cross Module References
	WRAITHSHOOTER_API UEnum* Z_Construct_UEnum_WraithShooter_EInventorySlot();
	UPackage* Z_Construct_UPackage__Script_WraithShooter();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AGun_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	WRAITHSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FSkillsAttributes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WRAITHSHOOTER_API UEnum* Z_Construct_UEnum_WraithShooter_ESkills();
	WRAITHSHOOTER_API UEnum* Z_Construct_UEnum_WraithShooter_EDefensiveAbility();
	WRAITHSHOOTER_API UEnum* Z_Construct_UEnum_WraithShooter_EOffensiveAbility();
	WRAITHSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FSkillData();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AWraithProjectile_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_UWraithUIInterface_NoRegister();
// End Cross Module References
	static UEnum* EInventorySlot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WraithShooter_EInventorySlot, Z_Construct_UPackage__Script_WraithShooter(), TEXT("EInventorySlot"));
		}
		return Singleton;
	}
	template<> WRAITHSHOOTER_API UEnum* StaticEnum<EInventorySlot>()
	{
		return EInventorySlot_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInventorySlot(EInventorySlot_StaticEnum, TEXT("/Script/WraithShooter"), TEXT("EInventorySlot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WraithShooter_EInventorySlot_Hash() { return 4171169627U; }
	UEnum* Z_Construct_UEnum_WraithShooter_EInventorySlot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WraithShooter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInventorySlot"), 0, Get_Z_Construct_UEnum_WraithShooter_EInventorySlot_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInventorySlot::Hands", (int64)EInventorySlot::Hands },
				{ "EInventorySlot::Primary", (int64)EInventorySlot::Primary },
				{ "EInventorySlot::Secondary", (int64)EInventorySlot::Secondary },
				{ "EInventorySlot::Side", (int64)EInventorySlot::Side },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "//MARK:ENUM for sockets\n" },
				{ "Hands.Comment", "/* For currently equipped items/weapons */" },
				{ "Hands.Name", "EInventorySlot::Hands" },
				{ "Hands.ToolTip", "For currently equipped items/weapons" },
				{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
				{ "Primary.Comment", "/* For Primary weapons on spine bone */" },
				{ "Primary.Name", "EInventorySlot::Primary" },
				{ "Primary.ToolTip", "For Primary weapons on spine bone" },
				{ "Secondary.Comment", "/* For Secondary weapons on spine bone */" },
				{ "Secondary.Name", "EInventorySlot::Secondary" },
				{ "Secondary.ToolTip", "For Secondary weapons on spine bone" },
				{ "Side.Comment", "/* For Side weapons on Pelvis bone */" },
				{ "Side.Name", "EInventorySlot::Side" },
				{ "Side.ToolTip", "For Side weapons on Pelvis bone" },
				{ "ToolTip", "MARK:ENUM for sockets" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WraithShooter,
				nullptr,
				"EInventorySlot",
				"EInventorySlot",
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
	DEFINE_FUNCTION(AShooterCharacter::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_GET_STRUCT_REF(FDamageEvent,Z_Param_Out_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TakeDamage(Z_Param_DamageAmount,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execMakeVFXInvisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeVFXInvisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execMakeVFXVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeVFXVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execUnBindDelegates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnBindDelegates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execBindDelegates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindDelegates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execSwapToNewWeaponMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapToNewWeaponMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execGetInventoryAttachPoint)
	{
		P_GET_ENUM(EInventorySlot,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetInventoryAttachPoint(EInventorySlot(Z_Param_Slot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execObjectTrace)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ShotDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ObjectTrace(Z_Param_Out_Hit,Z_Param_Out_ShotDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execGetScoreValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScoreValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execGetPawnMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetPawnMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execGetGunHostlerPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetGunHostlerPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execGetWeaponAttachPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetWeaponAttachPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execGetEnergy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEnergy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execGetbIsAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetbIsAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execGetCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGun**)Z_Param__Result=P_THIS->GetCurrentWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execGetTimerWidgetRef)
	{
		P_GET_OBJECT(UWidgetComponent,Z_Param_TimerWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTimerWidgetRef(Z_Param_TimerWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execCanUseElectroSpark)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CanUseElectroSpark();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execSpawnElectroSpark)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnElectroSpark();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execElectroSparkOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ElectroSparkOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execElectroSparkOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ElectroSparkOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execOnRep_Killer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Killer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execHaveEnoughEnergyToUseAbility)
	{
		P_GET_STRUCT(FSkillsAttributes,Z_Param_AbilityAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HaveEnoughEnergyToUseAbility(Z_Param_AbilityAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execUpdateEnergy)
	{
		P_GET_STRUCT(FSkillsAttributes,Z_Param_AbilityAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEnergy(Z_Param_AbilityAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execServerOnFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerOnFire_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AShooterCharacter_DrawThrowArc = FName(TEXT("DrawThrowArc"));
	void AShooterCharacter::DrawThrowArc()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShooterCharacter_DrawThrowArc),NULL);
	}
	static FName NAME_AShooterCharacter_ServerOnFire = FName(TEXT("ServerOnFire"));
	void AShooterCharacter::ServerOnFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShooterCharacter_ServerOnFire),NULL);
	}
	static FName NAME_AShooterCharacter_ShowDeathOnScreen = FName(TEXT("ShowDeathOnScreen"));
	void AShooterCharacter::ShowDeathOnScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShooterCharacter_ShowDeathOnScreen),NULL);
	}
	static FName NAME_AShooterCharacter_Zoom = FName(TEXT("Zoom"));
	void AShooterCharacter::Zoom(bool CanZoom)
	{
		ShooterCharacter_eventZoom_Parms Parms;
		Parms.CanZoom=CanZoom ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AShooterCharacter_Zoom),&Parms);
	}
	void AShooterCharacter::StaticRegisterNativesAShooterCharacter()
	{
		UClass* Class = AShooterCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindDelegates", &AShooterCharacter::execBindDelegates },
			{ "CanUseElectroSpark", &AShooterCharacter::execCanUseElectroSpark },
			{ "ElectroSparkOff", &AShooterCharacter::execElectroSparkOff },
			{ "ElectroSparkOn", &AShooterCharacter::execElectroSparkOn },
			{ "GetbIsAiming", &AShooterCharacter::execGetbIsAiming },
			{ "GetCurrentWeapon", &AShooterCharacter::execGetCurrentWeapon },
			{ "GetEnergy", &AShooterCharacter::execGetEnergy },
			{ "GetGunHostlerPoint", &AShooterCharacter::execGetGunHostlerPoint },
			{ "GetHealth", &AShooterCharacter::execGetHealth },
			{ "GetInventoryAttachPoint", &AShooterCharacter::execGetInventoryAttachPoint },
			{ "GetPawnMesh", &AShooterCharacter::execGetPawnMesh },
			{ "GetScoreValue", &AShooterCharacter::execGetScoreValue },
			{ "GetTimerWidgetRef", &AShooterCharacter::execGetTimerWidgetRef },
			{ "GetWeaponAttachPoint", &AShooterCharacter::execGetWeaponAttachPoint },
			{ "HaveEnoughEnergyToUseAbility", &AShooterCharacter::execHaveEnoughEnergyToUseAbility },
			{ "IsDead", &AShooterCharacter::execIsDead },
			{ "MakeVFXInvisible", &AShooterCharacter::execMakeVFXInvisible },
			{ "MakeVFXVisible", &AShooterCharacter::execMakeVFXVisible },
			{ "ObjectTrace", &AShooterCharacter::execObjectTrace },
			{ "OnRep_Killer", &AShooterCharacter::execOnRep_Killer },
			{ "ServerOnFire", &AShooterCharacter::execServerOnFire },
			{ "SpawnElectroSpark", &AShooterCharacter::execSpawnElectroSpark },
			{ "SwapToNewWeaponMesh", &AShooterCharacter::execSwapToNewWeaponMesh },
			{ "TakeDamage", &AShooterCharacter::execTakeDamage },
			{ "UnBindDelegates", &AShooterCharacter::execUnBindDelegates },
			{ "UpdateEnergy", &AShooterCharacter::execUpdateEnergy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterCharacter_BindDelegates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_BindDelegates_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//MARK: Function for Binding Delegates created in WraithShooterGameModeBase.h\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: Function for Binding Delegates created in WraithShooterGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_BindDelegates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "BindDelegates", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_BindDelegates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_BindDelegates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_BindDelegates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_BindDelegates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_CanUseElectroSpark_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_CanUseElectroSpark_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_CanUseElectroSpark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "CanUseElectroSpark", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_CanUseElectroSpark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_CanUseElectroSpark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_CanUseElectroSpark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_CanUseElectroSpark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_DrawThrowArc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_DrawThrowArc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fireball" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_DrawThrowArc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "DrawThrowArc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_DrawThrowArc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_DrawThrowArc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_DrawThrowArc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_DrawThrowArc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_ElectroSparkOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_ElectroSparkOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_ElectroSparkOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "ElectroSparkOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_ElectroSparkOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_ElectroSparkOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_ElectroSparkOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_ElectroSparkOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_ElectroSparkOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_ElectroSparkOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_ElectroSparkOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "ElectroSparkOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_ElectroSparkOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_ElectroSparkOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_ElectroSparkOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_ElectroSparkOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_GetbIsAiming_Statics
	{
		struct ShooterCharacter_eventGetbIsAiming_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AShooterCharacter_GetbIsAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShooterCharacter_eventGetbIsAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterCharacter_GetbIsAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShooterCharacter_eventGetbIsAiming_Parms), &Z_Construct_UFunction_AShooterCharacter_GetbIsAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_GetbIsAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetbIsAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetbIsAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GetbIsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GetbIsAiming", nullptr, nullptr, sizeof(ShooterCharacter_eventGetbIsAiming_Parms), Z_Construct_UFunction_AShooterCharacter_GetbIsAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetbIsAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_GetbIsAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetbIsAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetbIsAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GetbIsAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_GetCurrentWeapon_Statics
	{
		struct ShooterCharacter_eventGetCurrentWeapon_Parms
		{
			AGun* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_GetCurrentWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//MARK: Return Functions\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: Return Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GetCurrentWeapon", nullptr, nullptr, sizeof(ShooterCharacter_eventGetCurrentWeapon_Parms), Z_Construct_UFunction_AShooterCharacter_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetCurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_GetEnergy_Statics
	{
		struct ShooterCharacter_eventGetEnergy_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_GetEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventGetEnergy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_GetEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GetEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GetEnergy", nullptr, nullptr, sizeof(ShooterCharacter_eventGetEnergy_Parms), Z_Construct_UFunction_AShooterCharacter_GetEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_GetEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GetEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_GetGunHostlerPoint_Statics
	{
		struct ShooterCharacter_eventGetGunHostlerPoint_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AShooterCharacter_GetGunHostlerPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventGetGunHostlerPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_GetGunHostlerPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetGunHostlerPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetGunHostlerPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GetGunHostlerPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GetGunHostlerPoint", nullptr, nullptr, sizeof(ShooterCharacter_eventGetGunHostlerPoint_Parms), Z_Construct_UFunction_AShooterCharacter_GetGunHostlerPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetGunHostlerPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_GetGunHostlerPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetGunHostlerPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetGunHostlerPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GetGunHostlerPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_GetHealth_Statics
	{
		struct ShooterCharacter_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GetHealth", nullptr, nullptr, sizeof(ShooterCharacter_eventGetHealth_Parms), Z_Construct_UFunction_AShooterCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint_Statics
	{
		struct ShooterCharacter_eventGetInventoryAttachPoint_Parms
		{
			EInventorySlot Slot;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventGetInventoryAttachPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventGetInventoryAttachPoint_Parms, Slot), Z_Construct_UEnum_WraithShooter_EInventorySlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint_Statics::NewProp_Slot_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GetInventoryAttachPoint", nullptr, nullptr, sizeof(ShooterCharacter_eventGetInventoryAttachPoint_Parms), Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_GetPawnMesh_Statics
	{
		struct ShooterCharacter_eventGetPawnMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetPawnMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterCharacter_GetPawnMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventGetPawnMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_GetPawnMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetPawnMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_GetPawnMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetPawnMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetPawnMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GetPawnMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GetPawnMesh", nullptr, nullptr, sizeof(ShooterCharacter_eventGetPawnMesh_Parms), Z_Construct_UFunction_AShooterCharacter_GetPawnMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetPawnMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_GetPawnMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetPawnMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetPawnMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GetPawnMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_GetScoreValue_Statics
	{
		struct ShooterCharacter_eventGetScoreValue_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_GetScoreValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventGetScoreValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_GetScoreValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetScoreValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetScoreValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GetScoreValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GetScoreValue", nullptr, nullptr, sizeof(ShooterCharacter_eventGetScoreValue_Parms), Z_Construct_UFunction_AShooterCharacter_GetScoreValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetScoreValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_GetScoreValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetScoreValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetScoreValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GetScoreValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_GetTimerWidgetRef_Statics
	{
		struct ShooterCharacter_eventGetTimerWidgetRef_Parms
		{
			UWidgetComponent* TimerWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimerWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetTimerWidgetRef_Statics::NewProp_TimerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterCharacter_GetTimerWidgetRef_Statics::NewProp_TimerWidget = { "TimerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventGetTimerWidgetRef_Parms, TimerWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_GetTimerWidgetRef_Statics::NewProp_TimerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetTimerWidgetRef_Statics::NewProp_TimerWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_GetTimerWidgetRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetTimerWidgetRef_Statics::NewProp_TimerWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetTimerWidgetRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GetTimerWidgetRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GetTimerWidgetRef", nullptr, nullptr, sizeof(ShooterCharacter_eventGetTimerWidgetRef_Parms), Z_Construct_UFunction_AShooterCharacter_GetTimerWidgetRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetTimerWidgetRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_GetTimerWidgetRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetTimerWidgetRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetTimerWidgetRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GetTimerWidgetRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_GetWeaponAttachPoint_Statics
	{
		struct ShooterCharacter_eventGetWeaponAttachPoint_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AShooterCharacter_GetWeaponAttachPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventGetWeaponAttachPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_GetWeaponAttachPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetWeaponAttachPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetWeaponAttachPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GetWeaponAttachPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GetWeaponAttachPoint", nullptr, nullptr, sizeof(ShooterCharacter_eventGetWeaponAttachPoint_Parms), Z_Construct_UFunction_AShooterCharacter_GetWeaponAttachPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetWeaponAttachPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_GetWeaponAttachPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetWeaponAttachPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetWeaponAttachPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GetWeaponAttachPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility_Statics
	{
		struct ShooterCharacter_eventHaveEnoughEnergyToUseAbility_Parms
		{
			FSkillsAttributes AbilityAttributes;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityAttributes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShooterCharacter_eventHaveEnoughEnergyToUseAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShooterCharacter_eventHaveEnoughEnergyToUseAbility_Parms), &Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility_Statics::NewProp_AbilityAttributes = { "AbilityAttributes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventHaveEnoughEnergyToUseAbility_Parms, AbilityAttributes), Z_Construct_UScriptStruct_FSkillsAttributes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility_Statics::NewProp_AbilityAttributes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "HaveEnoughEnergyToUseAbility", nullptr, nullptr, sizeof(ShooterCharacter_eventHaveEnoughEnergyToUseAbility_Parms), Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_IsDead_Statics
	{
		struct ShooterCharacter_eventIsDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShooterCharacter_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShooterCharacter_eventIsDead_Parms), &Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "IsDead", nullptr, nullptr, sizeof(ShooterCharacter_eventIsDead_Parms), Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_MakeVFXInvisible_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_MakeVFXInvisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_MakeVFXInvisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "MakeVFXInvisible", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_MakeVFXInvisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_MakeVFXInvisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_MakeVFXInvisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_MakeVFXInvisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_MakeVFXVisible_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_MakeVFXVisible_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//MARK: VFX and SFX function Decleration\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: VFX and SFX function Decleration" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_MakeVFXVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "MakeVFXVisible", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_MakeVFXVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_MakeVFXVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_MakeVFXVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_MakeVFXVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics
	{
		struct ShooterCharacter_eventObjectTrace_Parms
		{
			FHitResult Hit;
			FVector ShotDirection;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShooterCharacter_eventObjectTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShooterCharacter_eventObjectTrace_Parms), &Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics::NewProp_ShotDirection = { "ShotDirection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventObjectTrace_Parms, ShotDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventObjectTrace_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics::NewProp_ShotDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "ObjectTrace", nullptr, nullptr, sizeof(ShooterCharacter_eventObjectTrace_Parms), Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_ObjectTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_ObjectTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_OnRep_Killer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_OnRep_Killer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_OnRep_Killer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "OnRep_Killer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_OnRep_Killer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_OnRep_Killer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_OnRep_Killer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_OnRep_Killer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_ServerOnFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_ServerOnFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Networking\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "Networking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_ServerOnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "ServerOnFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_ServerOnFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_ServerOnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_ServerOnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_ServerOnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_ShowDeathOnScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_ShowDeathOnScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_ShowDeathOnScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "ShowDeathOnScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_ShowDeathOnScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_ShowDeathOnScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_ShowDeathOnScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_ShowDeathOnScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_SpawnElectroSpark_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_SpawnElectroSpark_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_SpawnElectroSpark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "SpawnElectroSpark", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_SpawnElectroSpark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_SpawnElectroSpark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_SpawnElectroSpark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_SpawnElectroSpark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_SwapToNewWeaponMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_SwapToNewWeaponMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_SwapToNewWeaponMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "SwapToNewWeaponMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_SwapToNewWeaponMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_SwapToNewWeaponMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_SwapToNewWeaponMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_SwapToNewWeaponMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics
	{
		struct ShooterCharacter_eventTakeDamage_Parms
		{
			float DamageAmount;
			FDamageEvent DamageEvent;
			AController* EventInstigator;
			AActor* DamageCauser;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventTakeDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventTakeDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventTakeDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::NewProp_DamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::NewProp_DamageEvent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventTakeDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::NewProp_DamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShooterCharacter" },
		{ "Comment", "//damage function\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "damage function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "TakeDamage", nullptr, nullptr, sizeof(ShooterCharacter_eventTakeDamage_Parms), Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_UnBindDelegates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_UnBindDelegates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_UnBindDelegates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "UnBindDelegates", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_UnBindDelegates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_UnBindDelegates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_UnBindDelegates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_UnBindDelegates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_UpdateEnergy_Statics
	{
		struct ShooterCharacter_eventUpdateEnergy_Parms
		{
			FSkillsAttributes AbilityAttributes;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityAttributes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterCharacter_UpdateEnergy_Statics::NewProp_AbilityAttributes = { "AbilityAttributes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventUpdateEnergy_Parms, AbilityAttributes), Z_Construct_UScriptStruct_FSkillsAttributes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_UpdateEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_UpdateEnergy_Statics::NewProp_AbilityAttributes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_UpdateEnergy_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_UpdateEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "UpdateEnergy", nullptr, nullptr, sizeof(ShooterCharacter_eventUpdateEnergy_Parms), Z_Construct_UFunction_AShooterCharacter_UpdateEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_UpdateEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_UpdateEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_UpdateEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_UpdateEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_UpdateEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_Zoom_Statics
	{
		static void NewProp_CanZoom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanZoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AShooterCharacter_Zoom_Statics::NewProp_CanZoom_SetBit(void* Obj)
	{
		((ShooterCharacter_eventZoom_Parms*)Obj)->CanZoom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterCharacter_Zoom_Statics::NewProp_CanZoom = { "CanZoom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShooterCharacter_eventZoom_Parms), &Z_Construct_UFunction_AShooterCharacter_Zoom_Statics::NewProp_CanZoom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_Zoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_Zoom_Statics::NewProp_CanZoom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_Zoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_Zoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "Zoom", nullptr, nullptr, sizeof(ShooterCharacter_eventZoom_Parms), Z_Construct_UFunction_AShooterCharacter_Zoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_Zoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_Zoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_Zoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_Zoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_Zoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterCharacter_NoRegister()
	{
		return AShooterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShooterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShooterBT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShooterBT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisualFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GunClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GunClass_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousGun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousGun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSkillAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentSkillAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillAcquired_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkillAcquired;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkillAcquired_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefensiveAbilitySlotted_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefensiveAbilitySlotted;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefensiveAbilitySlotted_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffensiveAbilitySlotted_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OffensiveAbilitySlotted;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OffensiveAbilitySlotted_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSlowAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeSlowAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSlowData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeSlowData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSlowTimePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSlowTimePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSlowPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSlowPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingTimeSlow_MetaData[];
#endif
		static void NewProp_bIsUsingTimeSlow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingTimeSlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasTimeSlow_MetaData[];
#endif
		static void NewProp_bHasTimeSlow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasTimeSlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShieldAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShieldData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldCoolDownTimePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShieldCoolDownTimePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldTimePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShieldTimePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingShield_MetaData[];
#endif
		static void NewProp_bIsUsingShield_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingShield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasShield_MetaData[];
#endif
		static void NewProp_bHasShield_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasShield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MistAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MistAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MistData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MistData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MistCoolDownTimePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MistCoolDownTimePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MistTimePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MistTimePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingMist_MetaData[];
#endif
		static void NewProp_bIsUsingMist_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingMist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasMist_MetaData[];
#endif
		static void NewProp_bHasMist_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasMist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensFXONSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LensFXONSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensOfTruthAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LensOfTruthAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensOfTruthData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LensOfTruthData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensOfTruthCoolDownTimePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LensOfTruthCoolDownTimePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensOfTruthTimePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LensOfTruthTimePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingLensOfTruth_MetaData[];
#endif
		static void NewProp_bIsUsingLensOfTruth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingLensOfTruth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasLensOfTruth_MetaData[];
#endif
		static void NewProp_bHasLensOfTruth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasLensOfTruth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodlustAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloodlustAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodlustData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloodlustData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBloodlust_MetaData[];
#endif
		static void NewProp_bHasBloodlust_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBloodlust;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArticBlastClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ArticBlastClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArticBlastAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArticBlastAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArticBlastData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArticBlastData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnArticBlastDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnArticBlastDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArticBlastCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArticBlastCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bArticBlastReady_MetaData[];
#endif
		static void NewProp_bArticBlastReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bArticBlastReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedArticBlast_MetaData[];
#endif
		static void NewProp_bUsedArticBlast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedArticBlast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasArticBlast_MetaData[];
#endif
		static void NewProp_bHasArticBlast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasArticBlast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElectroSparkAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ElectroSparkAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElectroSparkData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ElectroSparkData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElectroSparkClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ElectroSparkClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnElectroSparkDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnElectroSparkDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElectroSparkCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElectroSparkCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bElectroSparkReady_MetaData[];
#endif
		static void NewProp_bElectroSparkReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bElectroSparkReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedElectroSpark_MetaData[];
#endif
		static void NewProp_bUsedElectroSpark_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedElectroSpark;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasElectroSpark_MetaData[];
#endif
		static void NewProp_bHasElectroSpark_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasElectroSpark;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireballClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FireballClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToDrawAndDestroyArc_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDrawAndDestroyArc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawPath_TimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawPath_TimerHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireballAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireballAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireballData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireballData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnFireballDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnFireballDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireballCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireballCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGrenadeAiming_MetaData[];
#endif
		static void NewProp_bIsGrenadeAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGrenadeAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireballReady_MetaData[];
#endif
		static void NewProp_bFireballReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireballReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedFireball_MetaData[];
#endif
		static void NewProp_bUsedFireball_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedFireball;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasFireball_MetaData[];
#endif
		static void NewProp_bHasFireball_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasFireball;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackDashData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackDashData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackDashCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackDashCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBackDashReady_MetaData[];
#endif
		static void NewProp_bIsBackDashReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBackDashReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBackDashing_MetaData[];
#endif
		static void NewProp_bIsBackDashing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBackDashing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackDashAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackDashAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackDashForwardAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackDashForwardAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackDashRightAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackDashRightAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackDashLeftAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackDashLeftAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBackDash_MetaData[];
#endif
		static void NewProp_bHasBackDash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBackDash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleJumpData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DoubleJumpData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JumpVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_JumpCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDoubleJumping_MetaData[];
#endif
		static void NewProp_bIsDoubleJumping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDoubleJumping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasDoubleJump_MetaData[];
#endif
		static void NewProp_bHasDoubleJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasDoubleJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileCameraShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileCameraShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDefensiveAbilityReady_MetaData[];
#endif
		static void NewProp_bIsDefensiveAbilityReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDefensiveAbilityReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOffensiveAbilityReady_MetaData[];
#endif
		static void NewProp_bIsOffensiveAbilityReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOffensiveAbilityReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractTraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InteractTraceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanInteract_MetaData[];
#endif
		static void NewProp_bCanInteract_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanInteract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharacterScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEnergy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Energy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrenadeSpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrenadeSpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireballSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FireballSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideWeaponAttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SideWeaponAttachPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeaponAttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SecondaryWeaponAttachPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeaponAttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PrimaryWeaponAttachPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponAttachPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseYawValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseYawValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePitchValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BasePitchValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Killer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterCharacter_BindDelegates, "BindDelegates" }, // 807687997
		{ &Z_Construct_UFunction_AShooterCharacter_CanUseElectroSpark, "CanUseElectroSpark" }, // 3231623235
		{ &Z_Construct_UFunction_AShooterCharacter_DrawThrowArc, "DrawThrowArc" }, // 1803029937
		{ &Z_Construct_UFunction_AShooterCharacter_ElectroSparkOff, "ElectroSparkOff" }, // 3022616913
		{ &Z_Construct_UFunction_AShooterCharacter_ElectroSparkOn, "ElectroSparkOn" }, // 504093205
		{ &Z_Construct_UFunction_AShooterCharacter_GetbIsAiming, "GetbIsAiming" }, // 1742479005
		{ &Z_Construct_UFunction_AShooterCharacter_GetCurrentWeapon, "GetCurrentWeapon" }, // 1149027884
		{ &Z_Construct_UFunction_AShooterCharacter_GetEnergy, "GetEnergy" }, // 3021773823
		{ &Z_Construct_UFunction_AShooterCharacter_GetGunHostlerPoint, "GetGunHostlerPoint" }, // 1822522069
		{ &Z_Construct_UFunction_AShooterCharacter_GetHealth, "GetHealth" }, // 1654135767
		{ &Z_Construct_UFunction_AShooterCharacter_GetInventoryAttachPoint, "GetInventoryAttachPoint" }, // 3492039180
		{ &Z_Construct_UFunction_AShooterCharacter_GetPawnMesh, "GetPawnMesh" }, // 1891782298
		{ &Z_Construct_UFunction_AShooterCharacter_GetScoreValue, "GetScoreValue" }, // 3613444367
		{ &Z_Construct_UFunction_AShooterCharacter_GetTimerWidgetRef, "GetTimerWidgetRef" }, // 3354924771
		{ &Z_Construct_UFunction_AShooterCharacter_GetWeaponAttachPoint, "GetWeaponAttachPoint" }, // 1066273628
		{ &Z_Construct_UFunction_AShooterCharacter_HaveEnoughEnergyToUseAbility, "HaveEnoughEnergyToUseAbility" }, // 315672607
		{ &Z_Construct_UFunction_AShooterCharacter_IsDead, "IsDead" }, // 2180583953
		{ &Z_Construct_UFunction_AShooterCharacter_MakeVFXInvisible, "MakeVFXInvisible" }, // 995759127
		{ &Z_Construct_UFunction_AShooterCharacter_MakeVFXVisible, "MakeVFXVisible" }, // 464836617
		{ &Z_Construct_UFunction_AShooterCharacter_ObjectTrace, "ObjectTrace" }, // 2898214006
		{ &Z_Construct_UFunction_AShooterCharacter_OnRep_Killer, "OnRep_Killer" }, // 2315500271
		{ &Z_Construct_UFunction_AShooterCharacter_ServerOnFire, "ServerOnFire" }, // 4186435920
		{ &Z_Construct_UFunction_AShooterCharacter_ShowDeathOnScreen, "ShowDeathOnScreen" }, // 1145285966
		{ &Z_Construct_UFunction_AShooterCharacter_SpawnElectroSpark, "SpawnElectroSpark" }, // 2134366278
		{ &Z_Construct_UFunction_AShooterCharacter_SwapToNewWeaponMesh, "SwapToNewWeaponMesh" }, // 4133600744
		{ &Z_Construct_UFunction_AShooterCharacter_TakeDamage, "TakeDamage" }, // 761327458
		{ &Z_Construct_UFunction_AShooterCharacter_UnBindDelegates, "UnBindDelegates" }, // 17716327
		{ &Z_Construct_UFunction_AShooterCharacter_UpdateEnergy, "UpdateEnergy" }, // 334739185
		{ &Z_Construct_UFunction_AShooterCharacter_Zoom, "Zoom" }, // 1593723912
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//MARK: ShooterCharacter Class\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShooterCharacter.h" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: ShooterCharacter Class" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShooterBT_MetaData[] = {
		{ "Category", "AIBehavior" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShooterBT = { "ShooterBT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ShooterBT), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShooterBT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShooterBT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FloatingComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FloatingComp = { "FloatingComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, FloatingComp), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FloatingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FloatingComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_VisualFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_VisualFX = { "VisualFX", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, VisualFX), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_VisualFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_VisualFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HealthText_MetaData[] = {
		{ "Category", "Interface" },
		{ "Comment", "//MARK: Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HealthText = { "HealthText", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, HealthText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HealthText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HealthText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Inventory_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GunClass_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GunClass = { "GunClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, GunClass), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GunClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GunClass_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GunClass_Inner = { "GunClass", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGun_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PreviousGun_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PreviousGun = { "PreviousGun", nullptr, (EPropertyFlags)0x0020080000000034, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, PreviousGun), Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PreviousGun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PreviousGun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Gun_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "Comment", "//MARK: Gun Variables and Data Structures\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: Gun Variables and Data Structures" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Gun = { "Gun", nullptr, (EPropertyFlags)0x0020080000000034, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, Gun), Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CurrentSkillAttributes_MetaData[] = {
		{ "Category", "SkillsInfo" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CurrentSkillAttributes = { "CurrentSkillAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CurrentSkillAttributes), Z_Construct_UScriptStruct_FSkillsAttributes, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CurrentSkillAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CurrentSkillAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SkillAcquired_MetaData[] = {
		{ "Category", "SkillsInfo" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SkillAcquired = { "SkillAcquired", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, SkillAcquired), Z_Construct_UEnum_WraithShooter_ESkills, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SkillAcquired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SkillAcquired_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SkillAcquired_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DefensiveAbilitySlotted_MetaData[] = {
		{ "Category", "SkillsInfo" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DefensiveAbilitySlotted = { "DefensiveAbilitySlotted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, DefensiveAbilitySlotted), Z_Construct_UEnum_WraithShooter_EDefensiveAbility, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DefensiveAbilitySlotted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DefensiveAbilitySlotted_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DefensiveAbilitySlotted_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_OffensiveAbilitySlotted_MetaData[] = {
		{ "Category", "SkillsInfo" },
		{ "Comment", "//MARK: ENUMS variables\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: ENUMS variables" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_OffensiveAbilitySlotted = { "OffensiveAbilitySlotted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, OffensiveAbilitySlotted), Z_Construct_UEnum_WraithShooter_EOffensiveAbility, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_OffensiveAbilitySlotted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_OffensiveAbilitySlotted_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_OffensiveAbilitySlotted_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowAttributes_MetaData[] = {
		{ "Category", "TimeSlow" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowAttributes = { "TimeSlowAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, TimeSlowAttributes), Z_Construct_UScriptStruct_FSkillsAttributes, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowData_MetaData[] = {
		{ "Category", "TimeSlow" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowData = { "TimeSlowData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, TimeSlowData), Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowTimePercentage_MetaData[] = {
		{ "Category", "TimeSlow" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowTimePercentage = { "TimeSlowTimePercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, TimeSlowTimePercentage), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowTimePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowTimePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowPercentage_MetaData[] = {
		{ "Category", "TimeSlow" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowPercentage = { "TimeSlowPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, TimeSlowPercentage), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingTimeSlow_MetaData[] = {
		{ "Category", "TimeSlow" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingTimeSlow_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bIsUsingTimeSlow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingTimeSlow = { "bIsUsingTimeSlow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingTimeSlow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingTimeSlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingTimeSlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasTimeSlow_MetaData[] = {
		{ "Category", "TimeSlow" },
		{ "Comment", "//MARK: TimeSlow\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: TimeSlow" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasTimeSlow_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bHasTimeSlow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasTimeSlow = { "bHasTimeSlow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasTimeSlow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasTimeSlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasTimeSlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldAttributes_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldAttributes = { "ShieldAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ShieldAttributes), Z_Construct_UScriptStruct_FSkillsAttributes, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldData_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldData = { "ShieldData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ShieldData), Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldCoolDownTimePercentage_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldCoolDownTimePercentage = { "ShieldCoolDownTimePercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ShieldCoolDownTimePercentage), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldCoolDownTimePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldCoolDownTimePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldTimePercentage_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldTimePercentage = { "ShieldTimePercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ShieldTimePercentage), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldTimePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldTimePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingShield_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingShield_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bIsUsingShield = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingShield = { "bIsUsingShield", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingShield_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingShield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasShield_MetaData[] = {
		{ "Category", "Shield" },
		{ "Comment", "//MARK: Shield\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: Shield" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasShield_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bHasShield = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasShield = { "bHasShield", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasShield_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasShield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistAttributes_MetaData[] = {
		{ "Category", "Mist" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistAttributes = { "MistAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, MistAttributes), Z_Construct_UScriptStruct_FSkillsAttributes, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistData_MetaData[] = {
		{ "Category", "Mist" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistData = { "MistData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, MistData), Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistCoolDownTimePercentage_MetaData[] = {
		{ "Category", "Mist" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistCoolDownTimePercentage = { "MistCoolDownTimePercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, MistCoolDownTimePercentage), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistCoolDownTimePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistCoolDownTimePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistTimePercentage_MetaData[] = {
		{ "Category", "Mist" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistTimePercentage = { "MistTimePercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, MistTimePercentage), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistTimePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistTimePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingMist_MetaData[] = {
		{ "Category", "Mist" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingMist_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bIsUsingMist = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingMist = { "bIsUsingMist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingMist_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingMist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingMist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasMist_MetaData[] = {
		{ "Category", "Mist" },
		{ "Comment", "//MARK:Mist\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK:Mist" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasMist_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bHasMist = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasMist = { "bHasMist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasMist_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasMist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasMist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensFXONSound_MetaData[] = {
		{ "Category", "LensOfTruth" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensFXONSound = { "LensFXONSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, LensFXONSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensFXONSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensFXONSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthAttributes_MetaData[] = {
		{ "Category", "LensOfTruth" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthAttributes = { "LensOfTruthAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, LensOfTruthAttributes), Z_Construct_UScriptStruct_FSkillsAttributes, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthData_MetaData[] = {
		{ "Category", "LensOfTruth" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthData = { "LensOfTruthData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, LensOfTruthData), Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthCoolDownTimePercentage_MetaData[] = {
		{ "Category", "LensOfTruth" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthCoolDownTimePercentage = { "LensOfTruthCoolDownTimePercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, LensOfTruthCoolDownTimePercentage), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthCoolDownTimePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthCoolDownTimePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthTimePercentage_MetaData[] = {
		{ "Category", "LensOfTruth" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthTimePercentage = { "LensOfTruthTimePercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, LensOfTruthTimePercentage), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthTimePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthTimePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingLensOfTruth_MetaData[] = {
		{ "Category", "LensOfTruth" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingLensOfTruth_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bIsUsingLensOfTruth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingLensOfTruth = { "bIsUsingLensOfTruth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingLensOfTruth_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingLensOfTruth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingLensOfTruth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasLensOfTruth_MetaData[] = {
		{ "Category", "LensOfTruth" },
		{ "Comment", "//MARK: LensOfTruth\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: LensOfTruth" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasLensOfTruth_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bHasLensOfTruth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasLensOfTruth = { "bHasLensOfTruth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasLensOfTruth_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasLensOfTruth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasLensOfTruth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BloodlustAttributes_MetaData[] = {
		{ "Category", "Bloodlust" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BloodlustAttributes = { "BloodlustAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, BloodlustAttributes), Z_Construct_UScriptStruct_FSkillsAttributes, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BloodlustAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BloodlustAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BloodlustData_MetaData[] = {
		{ "Category", "Bloodlust" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BloodlustData = { "BloodlustData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, BloodlustData), Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BloodlustData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BloodlustData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasBloodlust_MetaData[] = {
		{ "Category", "Bloodlust" },
		{ "Comment", "//MARK: Bloodlust Variables\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: Bloodlust Variables" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasBloodlust_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bHasBloodlust = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasBloodlust = { "bHasBloodlust", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasBloodlust_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasBloodlust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasBloodlust_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastClass_MetaData[] = {
		{ "Category", "ArticBlast" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastClass = { "ArticBlastClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ArticBlastClass), Z_Construct_UClass_AWraithProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastAttributes_MetaData[] = {
		{ "Category", "ArticBlast" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastAttributes = { "ArticBlastAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ArticBlastAttributes), Z_Construct_UScriptStruct_FSkillsAttributes, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastData_MetaData[] = {
		{ "Category", "ArticBlast" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastData = { "ArticBlastData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ArticBlastData), Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SpawnArticBlastDelay_MetaData[] = {
		{ "Category", "ArticBlast" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SpawnArticBlastDelay = { "SpawnArticBlastDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, SpawnArticBlastDelay), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SpawnArticBlastDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SpawnArticBlastDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastCooldown_MetaData[] = {
		{ "Category", "ArticBlast" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastCooldown = { "ArticBlastCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ArticBlastCooldown), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bArticBlastReady_MetaData[] = {
		{ "Category", "ArticBlast" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bArticBlastReady_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bArticBlastReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bArticBlastReady = { "bArticBlastReady", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bArticBlastReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bArticBlastReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bArticBlastReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedArticBlast_MetaData[] = {
		{ "Category", "ArticBlast" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedArticBlast_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bUsedArticBlast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedArticBlast = { "bUsedArticBlast", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedArticBlast_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedArticBlast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedArticBlast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasArticBlast_MetaData[] = {
		{ "Category", "ArticBlast" },
		{ "Comment", "//MARK: ArticBlast Variables\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: ArticBlast Variables" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasArticBlast_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bHasArticBlast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasArticBlast = { "bHasArticBlast", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasArticBlast_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasArticBlast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasArticBlast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkAttributes_MetaData[] = {
		{ "Category", "ElectroSpark" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkAttributes = { "ElectroSparkAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ElectroSparkAttributes), Z_Construct_UScriptStruct_FSkillsAttributes, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkData_MetaData[] = {
		{ "Category", "ElectroSpark" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkData = { "ElectroSparkData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ElectroSparkData), Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkClass_MetaData[] = {
		{ "Category", "ElectroSpark" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkClass = { "ElectroSparkClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ElectroSparkClass), Z_Construct_UClass_AWraithProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SpawnElectroSparkDelay_MetaData[] = {
		{ "Category", "ElectroSpark" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SpawnElectroSparkDelay = { "SpawnElectroSparkDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, SpawnElectroSparkDelay), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SpawnElectroSparkDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SpawnElectroSparkDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkCooldown_MetaData[] = {
		{ "Category", "ElectroSpark" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkCooldown = { "ElectroSparkCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ElectroSparkCooldown), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bElectroSparkReady_MetaData[] = {
		{ "Category", "ElectroSpark" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bElectroSparkReady_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bElectroSparkReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bElectroSparkReady = { "bElectroSparkReady", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bElectroSparkReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bElectroSparkReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bElectroSparkReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedElectroSpark_MetaData[] = {
		{ "Category", "ElectroSpark" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedElectroSpark_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bUsedElectroSpark = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedElectroSpark = { "bUsedElectroSpark", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedElectroSpark_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedElectroSpark_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedElectroSpark_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasElectroSpark_MetaData[] = {
		{ "Category", "ElectroSpark" },
		{ "Comment", "//MARK: ElectroSpark Variables\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: ElectroSpark Variables" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasElectroSpark_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bHasElectroSpark = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasElectroSpark = { "bHasElectroSpark", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasElectroSpark_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasElectroSpark_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasElectroSpark_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballClass_MetaData[] = {
		{ "Category", "Fireball" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballClass = { "FireballClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, FireballClass), Z_Construct_UClass_AWraithProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeToDrawAndDestroyArc_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeToDrawAndDestroyArc = { "TimeToDrawAndDestroyArc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, TimeToDrawAndDestroyArc), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeToDrawAndDestroyArc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeToDrawAndDestroyArc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DrawPath_TimerHandle_MetaData[] = {
		{ "Category", "TimerHandle" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DrawPath_TimerHandle = { "DrawPath_TimerHandle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, DrawPath_TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DrawPath_TimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DrawPath_TimerHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballAttributes_MetaData[] = {
		{ "Category", "Fireball" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballAttributes = { "FireballAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, FireballAttributes), Z_Construct_UScriptStruct_FSkillsAttributes, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballData_MetaData[] = {
		{ "Category", "Fireball" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballData = { "FireballData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, FireballData), Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SpawnFireballDelay_MetaData[] = {
		{ "Category", "Fireball" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SpawnFireballDelay = { "SpawnFireballDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, SpawnFireballDelay), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SpawnFireballDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SpawnFireballDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballCooldown_MetaData[] = {
		{ "Category", "Fireball" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballCooldown = { "FireballCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, FireballCooldown), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsGrenadeAiming_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsGrenadeAiming_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bIsGrenadeAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsGrenadeAiming = { "bIsGrenadeAiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsGrenadeAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsGrenadeAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsGrenadeAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bFireballReady_MetaData[] = {
		{ "Category", "Fireball" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bFireballReady_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bFireballReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bFireballReady = { "bFireballReady", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bFireballReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bFireballReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bFireballReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedFireball_MetaData[] = {
		{ "Category", "Fireball" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedFireball_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bUsedFireball = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedFireball = { "bUsedFireball", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedFireball_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedFireball_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedFireball_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasFireball_MetaData[] = {
		{ "Category", "Fireball" },
		{ "Comment", "//MARK: Fireball Variables\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: Fireball Variables" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasFireball_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bHasFireball = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasFireball = { "bHasFireball", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasFireball_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasFireball_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasFireball_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashData_MetaData[] = {
		{ "Category", "BackDash" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashData = { "BackDashData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, BackDashData), Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashCooldown_MetaData[] = {
		{ "Category", "BackDash" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashCooldown = { "BackDashCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, BackDashCooldown), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsBackDashReady_MetaData[] = {
		{ "Category", "BackDash" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsBackDashReady_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bIsBackDashReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsBackDashReady = { "bIsBackDashReady", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsBackDashReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsBackDashReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsBackDashReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsBackDashing_MetaData[] = {
		{ "Category", "BackDash" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsBackDashing_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bIsBackDashing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsBackDashing = { "bIsBackDashing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsBackDashing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsBackDashing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsBackDashing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashAmount_MetaData[] = {
		{ "Category", "BackDash" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashAmount = { "BackDashAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, BackDashAmount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashForwardAmount_MetaData[] = {
		{ "Category", "BackDash" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashForwardAmount = { "BackDashForwardAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, BackDashForwardAmount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashForwardAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashForwardAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashRightAmount_MetaData[] = {
		{ "Category", "BackDash" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashRightAmount = { "BackDashRightAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, BackDashRightAmount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashRightAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashRightAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashLeftAmount_MetaData[] = {
		{ "Category", "BackDash" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashLeftAmount = { "BackDashLeftAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, BackDashLeftAmount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashLeftAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashLeftAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasBackDash_MetaData[] = {
		{ "Category", "BackDash" },
		{ "Comment", "//MARK: BackDash Variables\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: BackDash Variables" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasBackDash_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bHasBackDash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasBackDash = { "bHasBackDash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasBackDash_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasBackDash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasBackDash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DoubleJumpData_MetaData[] = {
		{ "Category", "DoubleJump" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DoubleJumpData = { "DoubleJumpData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, DoubleJumpData), Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DoubleJumpData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DoubleJumpData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JumpVelocity_MetaData[] = {
		{ "Category", "DoubleJump" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JumpVelocity = { "JumpVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, JumpVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JumpVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JumpVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JumpCount_MetaData[] = {
		{ "Category", "DoubleJump" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JumpCount = { "JumpCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, JumpCount), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JumpCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JumpCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsDoubleJumping_MetaData[] = {
		{ "Category", "DoubleJump" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsDoubleJumping_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bIsDoubleJumping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsDoubleJumping = { "bIsDoubleJumping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsDoubleJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsDoubleJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsDoubleJumping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasDoubleJump_MetaData[] = {
		{ "Category", "DoubleJump" },
		{ "Comment", "//MARK: Offensive Skills Variables and Data\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: Offensive Skills Variables and Data" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasDoubleJump_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bHasDoubleJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasDoubleJump = { "bHasDoubleJump", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasDoubleJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasDoubleJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasDoubleJump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ProjectileCameraShake_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ProjectileCameraShake = { "ProjectileCameraShake", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, ProjectileCameraShake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ProjectileCameraShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ProjectileCameraShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsDefensiveAbilityReady_MetaData[] = {
		{ "Category", "SkillsInfo" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsDefensiveAbilityReady_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bIsDefensiveAbilityReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsDefensiveAbilityReady = { "bIsDefensiveAbilityReady", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsDefensiveAbilityReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsDefensiveAbilityReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsDefensiveAbilityReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsOffensiveAbilityReady_MetaData[] = {
		{ "Category", "SkillsInfo" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsOffensiveAbilityReady_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bIsOffensiveAbilityReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsOffensiveAbilityReady = { "bIsOffensiveAbilityReady", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsOffensiveAbilityReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsOffensiveAbilityReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsOffensiveAbilityReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bIsAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InteractTraceLength_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "Comment", "//set true when overlapping interactable objects\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "set true when overlapping interactable objects" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InteractTraceLength = { "InteractTraceLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, InteractTraceLength), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InteractTraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InteractTraceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bCanInteract_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "Comment", "//set true when overlapping interactable objects\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "set true when overlapping interactable objects" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bCanInteract_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->bCanInteract = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bCanInteract = { "bCanInteract", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bCanInteract_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bCanInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bCanInteract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CharacterScore_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CharacterScore = { "CharacterScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, CharacterScore), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CharacterScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CharacterScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxEnergy = { "MaxEnergy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, MaxEnergy), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Energy_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Energy = { "Energy", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, Energy), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Energy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Energy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GrenadeSpawnLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GrenadeSpawnLocation = { "GrenadeSpawnLocation", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, GrenadeSpawnLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GrenadeSpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GrenadeSpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballSocket_MetaData[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballSocket = { "FireballSocket", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, FireballSocket), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SideWeaponAttachPoint_MetaData[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SideWeaponAttachPoint = { "SideWeaponAttachPoint", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, SideWeaponAttachPoint), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SideWeaponAttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SideWeaponAttachPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SecondaryWeaponAttachPoint_MetaData[] = {
		{ "Category", "Sockets" },
		{ "Comment", "/* Attachpoint for items carried on the belt/pelvis. */" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "Attachpoint for items carried on the belt/pelvis." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SecondaryWeaponAttachPoint = { "SecondaryWeaponAttachPoint", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, SecondaryWeaponAttachPoint), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SecondaryWeaponAttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SecondaryWeaponAttachPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PrimaryWeaponAttachPoint_MetaData[] = {
		{ "Category", "Sockets" },
		{ "Comment", "/* Attachpoint for primary weapons */" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "Attachpoint for primary weapons" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PrimaryWeaponAttachPoint = { "PrimaryWeaponAttachPoint", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, PrimaryWeaponAttachPoint), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PrimaryWeaponAttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PrimaryWeaponAttachPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponAttachPoint_MetaData[] = {
		{ "Category", "Sockets" },
		{ "Comment", "/* Attachpoint for active weapon/item in hands */" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "Attachpoint for active weapon/item in hands" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponAttachPoint = { "WeaponAttachPoint", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, WeaponAttachPoint), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponAttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponAttachPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseYawValue_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseYawValue = { "BaseYawValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, BaseYawValue), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseYawValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseYawValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BasePitchValue_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "Comment", "//MARK:Variables\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK:Variables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BasePitchValue = { "BasePitchValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, BasePitchValue), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BasePitchValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BasePitchValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Killer_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//MARK: Networking\n" },
		{ "ModuleRelativePath", "Public/ShooterCharacter.h" },
		{ "ToolTip", "MARK: Networking" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Killer = { "Killer", "OnRep_Killer", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, Killer), Z_Construct_UClass_AShooterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Killer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Killer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShooterBT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FloatingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_VisualFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_HealthText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GunClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GunClass_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PreviousGun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CurrentSkillAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SkillAcquired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SkillAcquired_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DefensiveAbilitySlotted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DefensiveAbilitySlotted_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_OffensiveAbilitySlotted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_OffensiveAbilitySlotted_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowTimePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeSlowPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingTimeSlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasTimeSlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldCoolDownTimePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShieldTimePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingShield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasShield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistCoolDownTimePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MistTimePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingMist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasMist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensFXONSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthCoolDownTimePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LensOfTruthTimePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsUsingLensOfTruth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasLensOfTruth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BloodlustAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BloodlustData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasBloodlust,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SpawnArticBlastDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ArticBlastCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bArticBlastReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedArticBlast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasArticBlast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SpawnElectroSparkDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ElectroSparkCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bElectroSparkReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedElectroSpark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasElectroSpark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TimeToDrawAndDestroyArc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DrawPath_TimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SpawnFireballDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsGrenadeAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bFireballReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bUsedFireball,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasFireball,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsBackDashReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsBackDashing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashForwardAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashRightAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BackDashLeftAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasBackDash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DoubleJumpData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JumpVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JumpCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsDoubleJumping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bHasDoubleJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ProjectileCameraShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsDefensiveAbilityReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsOffensiveAbilityReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bIsAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_InteractTraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_bCanInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CharacterScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Energy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GrenadeSpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireballSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SideWeaponAttachPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SecondaryWeaponAttachPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PrimaryWeaponAttachPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponAttachPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BaseYawValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_BasePitchValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Killer,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AShooterCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWraithUIInterface_NoRegister, (int32)VTABLE_OFFSET(AShooterCharacter, IWraithUIInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterCharacter_Statics::ClassParams = {
		&AShooterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterCharacter, 3618637549);
	template<> WRAITHSHOOTER_API UClass* StaticClass<AShooterCharacter>()
	{
		return AShooterCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterCharacter(Z_Construct_UClass_AShooterCharacter, &AShooterCharacter::StaticClass, TEXT("/Script/WraithShooter"), TEXT("AShooterCharacter"), false, nullptr, nullptr, nullptr);

	void AShooterCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Killer(TEXT("Killer"));
		static const FName Name_Energy(TEXT("Energy"));
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_Gun(TEXT("Gun"));
		static const FName Name_PreviousGun(TEXT("PreviousGun"));

		const bool bIsValid = true
			&& Name_Killer == ClassReps[(int32)ENetFields_Private::Killer].Property->GetFName()
			&& Name_Energy == ClassReps[(int32)ENetFields_Private::Energy].Property->GetFName()
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_Gun == ClassReps[(int32)ENetFields_Private::Gun].Property->GetFName()
			&& Name_PreviousGun == ClassReps[(int32)ENetFields_Private::PreviousGun].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AShooterCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
