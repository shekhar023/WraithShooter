// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WraithShooter/Public/Gun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGun() {}
// Cross Module References
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AGun_NoRegister();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AGun();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WraithShooter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	WRAITHSHOOTER_API UEnum* Z_Construct_UEnum_WraithShooter_EInventorySlot();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	WRAITHSHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGun::execCanReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execIsPlayerAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execStopWeaponAnimation)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Animation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopWeaponAnimation(Z_Param_Animation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execPlayGunAnimations)
	{
		P_GET_OBJECT(UAnimationAsset,Z_Param_GunAnims);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayGunAnimations(Z_Param_GunAnims);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execPlayCharacterAnimations)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_CharacterAnims);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->PlayCharacterAnimations(Z_Param_CharacterAnims);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execGetbCanFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetbCanFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execGetMaxAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execGetCurrentAmmoInClip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmoInClip();
		P_NATIVE_END;
	}
	void AGun::StaticRegisterNativesAGun()
	{
		UClass* Class = AGun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanReload", &AGun::execCanReload },
			{ "GetbCanFire", &AGun::execGetbCanFire },
			{ "GetCurrentAmmoInClip", &AGun::execGetCurrentAmmoInClip },
			{ "GetMaxAmmo", &AGun::execGetMaxAmmo },
			{ "IsPlayerAiming", &AGun::execIsPlayerAiming },
			{ "PlayCharacterAnimations", &AGun::execPlayCharacterAnimations },
			{ "PlayGunAnimations", &AGun::execPlayGunAnimations },
			{ "StopWeaponAnimation", &AGun::execStopWeaponAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGun_CanReload_Statics
	{
		struct Gun_eventCanReload_Parms
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
	void Z_Construct_UFunction_AGun_CanReload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Gun_eventCanReload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGun_CanReload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Gun_eventCanReload_Parms), &Z_Construct_UFunction_AGun_CanReload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_CanReload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_CanReload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_CanReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_CanReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "CanReload", nullptr, nullptr, sizeof(Gun_eventCanReload_Parms), Z_Construct_UFunction_AGun_CanReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_CanReload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_CanReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_CanReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_CanReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_CanReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_GetbCanFire_Statics
	{
		struct Gun_eventGetbCanFire_Parms
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
	void Z_Construct_UFunction_AGun_GetbCanFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Gun_eventGetbCanFire_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGun_GetbCanFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Gun_eventGetbCanFire_Parms), &Z_Construct_UFunction_AGun_GetbCanFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_GetbCanFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_GetbCanFire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_GetbCanFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_GetbCanFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "GetbCanFire", nullptr, nullptr, sizeof(Gun_eventGetbCanFire_Parms), Z_Construct_UFunction_AGun_GetbCanFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_GetbCanFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_GetbCanFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_GetbCanFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_GetbCanFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_GetbCanFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_GetCurrentAmmoInClip_Statics
	{
		struct Gun_eventGetCurrentAmmoInClip_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGun_GetCurrentAmmoInClip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Gun_eventGetCurrentAmmoInClip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_GetCurrentAmmoInClip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_GetCurrentAmmoInClip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_GetCurrentAmmoInClip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_GetCurrentAmmoInClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "GetCurrentAmmoInClip", nullptr, nullptr, sizeof(Gun_eventGetCurrentAmmoInClip_Parms), Z_Construct_UFunction_AGun_GetCurrentAmmoInClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_GetCurrentAmmoInClip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_GetCurrentAmmoInClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_GetCurrentAmmoInClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_GetCurrentAmmoInClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_GetCurrentAmmoInClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_GetMaxAmmo_Statics
	{
		struct Gun_eventGetMaxAmmo_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGun_GetMaxAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Gun_eventGetMaxAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_GetMaxAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_GetMaxAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_GetMaxAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_GetMaxAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "GetMaxAmmo", nullptr, nullptr, sizeof(Gun_eventGetMaxAmmo_Parms), Z_Construct_UFunction_AGun_GetMaxAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_GetMaxAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_GetMaxAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_GetMaxAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_GetMaxAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_GetMaxAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_IsPlayerAiming_Statics
	{
		struct Gun_eventIsPlayerAiming_Parms
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
	void Z_Construct_UFunction_AGun_IsPlayerAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Gun_eventIsPlayerAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGun_IsPlayerAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Gun_eventIsPlayerAiming_Parms), &Z_Construct_UFunction_AGun_IsPlayerAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_IsPlayerAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_IsPlayerAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_IsPlayerAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_IsPlayerAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "IsPlayerAiming", nullptr, nullptr, sizeof(Gun_eventIsPlayerAiming_Parms), Z_Construct_UFunction_AGun_IsPlayerAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_IsPlayerAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_IsPlayerAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_IsPlayerAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_IsPlayerAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_IsPlayerAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_PlayCharacterAnimations_Statics
	{
		struct Gun_eventPlayCharacterAnimations_Parms
		{
			UAnimMontage* CharacterAnims;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterAnims;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGun_PlayCharacterAnimations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Gun_eventPlayCharacterAnimations_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGun_PlayCharacterAnimations_Statics::NewProp_CharacterAnims = { "CharacterAnims", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Gun_eventPlayCharacterAnimations_Parms, CharacterAnims), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_PlayCharacterAnimations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_PlayCharacterAnimations_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_PlayCharacterAnimations_Statics::NewProp_CharacterAnims,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_PlayCharacterAnimations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_PlayCharacterAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "PlayCharacterAnimations", nullptr, nullptr, sizeof(Gun_eventPlayCharacterAnimations_Parms), Z_Construct_UFunction_AGun_PlayCharacterAnimations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_PlayCharacterAnimations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_PlayCharacterAnimations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_PlayCharacterAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_PlayCharacterAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_PlayCharacterAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_PlayGunAnimations_Statics
	{
		struct Gun_eventPlayGunAnimations_Parms
		{
			UAnimationAsset* GunAnims;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunAnims;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGun_PlayGunAnimations_Statics::NewProp_GunAnims = { "GunAnims", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Gun_eventPlayGunAnimations_Parms, GunAnims), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_PlayGunAnimations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_PlayGunAnimations_Statics::NewProp_GunAnims,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_PlayGunAnimations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_PlayGunAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "PlayGunAnimations", nullptr, nullptr, sizeof(Gun_eventPlayGunAnimations_Parms), Z_Construct_UFunction_AGun_PlayGunAnimations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_PlayGunAnimations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_PlayGunAnimations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_PlayGunAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_PlayGunAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_PlayGunAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_StopWeaponAnimation_Statics
	{
		struct Gun_eventStopWeaponAnimation_Parms
		{
			UAnimMontage* Animation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGun_StopWeaponAnimation_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Gun_eventStopWeaponAnimation_Parms, Animation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_StopWeaponAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_StopWeaponAnimation_Statics::NewProp_Animation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_StopWeaponAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_StopWeaponAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "StopWeaponAnimation", nullptr, nullptr, sizeof(Gun_eventStopWeaponAnimation_Parms), Z_Construct_UFunction_AGun_StopWeaponAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_StopWeaponAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_StopWeaponAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_StopWeaponAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_StopWeaponAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_StopWeaponAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGun_NoRegister()
	{
		return AGun::StaticClass();
	}
	struct Z_Construct_UClass_AGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorageSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StorageSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StorageSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHipReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerHipReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerGunFireMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerGunFireMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadHipAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadHipAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadIronSightAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadIronSightAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunFireAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunFireAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunShellFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunShellFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetalImpactEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MetalImpactEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyImpactEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyImpactEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TracerEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireCamShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FireCamShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReloading_MetaData[];
#endif
		static void NewProp_bIsReloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFiring_MetaData[];
#endif
		static void NewProp_bIsFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFiring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmoInClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentAmmoInClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmoInClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAmmoInClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateOfFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunShellSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GunShellSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerTargetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TracerTargetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlashSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MuzzleFlashSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WraithShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGun_CanReload, "CanReload" }, // 4092388373
		{ &Z_Construct_UFunction_AGun_GetbCanFire, "GetbCanFire" }, // 268761114
		{ &Z_Construct_UFunction_AGun_GetCurrentAmmoInClip, "GetCurrentAmmoInClip" }, // 691344743
		{ &Z_Construct_UFunction_AGun_GetMaxAmmo, "GetMaxAmmo" }, // 2526484654
		{ &Z_Construct_UFunction_AGun_IsPlayerAiming, "IsPlayerAiming" }, // 3313242037
		{ &Z_Construct_UFunction_AGun_PlayCharacterAnimations, "PlayCharacterAnimations" }, // 3522497031
		{ &Z_Construct_UFunction_AGun_PlayGunAnimations, "PlayGunAnimations" }, // 932276785
		{ &Z_Construct_UFunction_AGun_StopWeaponAnimation, "StopWeaponAnimation" }, // 199783512
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gun.h" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_StorageSlot_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/* The character socket to store this item at. */" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "The character socket to store this item at." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_StorageSlot = { "StorageSlot", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, StorageSlot), Z_Construct_UEnum_WraithShooter_EInventorySlot, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_StorageSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_StorageSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGun_Statics::NewProp_StorageSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_PlayerHipReloadMontage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_PlayerHipReloadMontage = { "PlayerHipReloadMontage", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, PlayerHipReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_PlayerHipReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_PlayerHipReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_PlayerReloadMontage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_PlayerReloadMontage = { "PlayerReloadMontage", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, PlayerReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_PlayerReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_PlayerReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_PlayerGunFireMontage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_PlayerGunFireMontage = { "PlayerGunFireMontage", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, PlayerGunFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_PlayerGunFireMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_PlayerGunFireMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_EquipAnim_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_EquipAnim = { "EquipAnim", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, EquipAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_EquipAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_EquipAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_ReloadHipAnim_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_ReloadHipAnim = { "ReloadHipAnim", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, ReloadHipAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_ReloadHipAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_ReloadHipAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_ReloadIronSightAnim_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_ReloadIronSightAnim = { "ReloadIronSightAnim", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, ReloadIronSightAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_ReloadIronSightAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_ReloadIronSightAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_GunFireAnim_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_GunFireAnim = { "GunFireAnim", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, GunFireAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_GunFireAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_GunFireAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, ImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_ImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_ImpactSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MuzzleSound_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MuzzleSound = { "MuzzleSound", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, MuzzleSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MuzzleSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MuzzleSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_GunShellFX_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_GunShellFX = { "GunShellFX", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, GunShellFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_GunShellFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_GunShellFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MetalImpactEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MetalImpactEffect = { "MetalImpactEffect", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, MetalImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MetalImpactEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MetalImpactEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_BodyImpactEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_BodyImpactEffect = { "BodyImpactEffect", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, BodyImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_BodyImpactEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_BodyImpactEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_ImpactEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_ImpactEffect = { "ImpactEffect", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, ImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_ImpactEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_ImpactEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_TracerEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_TracerEffect = { "TracerEffect", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, TracerEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_TracerEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_TracerEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_FireCamShake_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_FireCamShake = { "FireCamShake", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, FireCamShake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_FireCamShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_FireCamShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGun_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, SurfaceType), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_SurfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_SurfaceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_SCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_SCharacter = { "SCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, SCharacter), Z_Construct_UClass_AShooterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_SCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_SCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	void Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading_SetBit(void* Obj)
	{
		((AGun*)Obj)->bIsReloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading = { "bIsReloading", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGun), &Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_bIsFiring_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	void Z_Construct_UClass_AGun_Statics::NewProp_bIsFiring_SetBit(void* Obj)
	{
		((AGun*)Obj)->bIsFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_bIsFiring = { "bIsFiring", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGun), &Z_Construct_UClass_AGun_Statics::NewProp_bIsFiring_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_bIsFiring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_bIsFiring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmoInClip_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmoInClip = { "CurrentAmmoInClip", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, CurrentAmmoInClip), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmoInClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmoInClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoInClip_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoInClip = { "MaxAmmoInClip", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, MaxAmmoInClip), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoInClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoInClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, MaxAmmo), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_StartAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_StartAmmo = { "StartAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, StartAmmo), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_StartAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_StartAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, Damage), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_BulletSpread_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_BulletSpread = { "BulletSpread", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, BulletSpread), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_BulletSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_BulletSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_RateOfFire_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_RateOfFire = { "RateOfFire", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, RateOfFire), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_RateOfFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_RateOfFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, MaxRange), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_GunShellSocket_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGun_Statics::NewProp_GunShellSocket = { "GunShellSocket", nullptr, (EPropertyFlags)0x0040000000030001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, GunShellSocket), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_GunShellSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_GunShellSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_TracerTargetName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGun_Statics::NewProp_TracerTargetName = { "TracerTargetName", nullptr, (EPropertyFlags)0x0040000000030001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, TracerTargetName), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_TracerTargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_TracerTargetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlashSocketName_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlashSocketName = { "MuzzleFlashSocketName", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, MuzzleFlashSocketName), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlashSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlashSocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_StorageSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_StorageSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_PlayerHipReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_PlayerReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_PlayerGunFireMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_EquipAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_ReloadHipAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_ReloadIronSightAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_GunFireAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_ImpactSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MuzzleSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_GunShellFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MetalImpactEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_BodyImpactEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_ImpactEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_TracerEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_FireCamShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_SurfaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_SCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_bIsFiring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmoInClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoInClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_StartAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_BulletSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_RateOfFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_GunShellSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_TracerTargetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlashSocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGun_Statics::ClassParams = {
		&AGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGun, 1471582595);
	template<> WRAITHSHOOTER_API UClass* StaticClass<AGun>()
	{
		return AGun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGun(Z_Construct_UClass_AGun, &AGun::StaticClass, TEXT("/Script/WraithShooter"), TEXT("AGun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
