// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FujiwaraBattleField/Public/Skill/S_Skill_Spell.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_Skill_Spell() {}
// Cross Module References
	FUJIWARABATTLEFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FSkill_Spell();
	UPackage* Z_Construct_UPackage__Script_FujiwaraBattleField();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FUJIWARABATTLEFIELD_API UEnum* Z_Construct_UEnum_FujiwaraBattleField_CCType();
// End Cross Module References
class UScriptStruct* FSkill_Spell::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUJIWARABATTLEFIELD_API uint32 Get_Z_Construct_UScriptStruct_FSkill_Spell_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkill_Spell, Z_Construct_UPackage__Script_FujiwaraBattleField(), TEXT("Skill_Spell"), sizeof(FSkill_Spell), Get_Z_Construct_UScriptStruct_FSkill_Spell_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkill_Spell(FSkill_Spell::StaticStruct, TEXT("/Script/FujiwaraBattleField"), TEXT("Skill_Spell"), false, nullptr, nullptr);
static struct FScriptStruct_FujiwaraBattleField_StaticRegisterNativesFSkill_Spell
{
	FScriptStruct_FujiwaraBattleField_StaticRegisterNativesFSkill_Spell()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Skill_Spell")),new UScriptStruct::TCppStructOps<FSkill_Spell>);
	}
} ScriptStruct_FujiwaraBattleField_StaticRegisterNativesFSkill_Spell;
	struct Z_Construct_UScriptStruct_FSkill_Spell_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZAxisOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZAxisOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YAxisOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YAxisOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CCtype_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CCtype;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Spell_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Spell.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkill_Spell>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_SpawnCount_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Spell.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_SpawnCount = { UE4CodeGen_Private::EPropertyClass::Int, "SpawnCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Spell, SpawnCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_SpawnCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_SpawnCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_ZAxisOffset_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Spell.h" },
		{ "ToolTip", "Yaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_ZAxisOffset = { UE4CodeGen_Private::EPropertyClass::Float, "ZAxisOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Spell, ZAxisOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_ZAxisOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_ZAxisOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_YAxisOffset_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Spell.h" },
		{ "ToolTip", "Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_YAxisOffset = { UE4CodeGen_Private::EPropertyClass::Float, "YAxisOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Spell, YAxisOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_YAxisOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_YAxisOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_DamageOffset_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Spell.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_DamageOffset = { UE4CodeGen_Private::EPropertyClass::Float, "DamageOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Spell, DamageOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_DamageOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_DamageOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Spell.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_Damage = { UE4CodeGen_Private::EPropertyClass::Float, "Damage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Spell, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_Damage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_SpeedOffset_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Spell.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_SpeedOffset = { UE4CodeGen_Private::EPropertyClass::Float, "SpeedOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Spell, SpeedOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_SpeedOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_SpeedOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_InitSpeed_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Spell.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_InitSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "InitSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Spell, InitSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_InitSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_InitSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_ScaleOffset_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Spell.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_ScaleOffset = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Spell, ScaleOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_ScaleOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_ScaleOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_InitScale_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Spell.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_InitScale = { UE4CodeGen_Private::EPropertyClass::Float, "InitScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Spell, InitScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_InitScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_InitScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_InitPos_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Spell.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_InitPos = { UE4CodeGen_Private::EPropertyClass::Struct, "InitPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Spell, InitPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_InitPos_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_InitPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_CCtype_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Spell.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_CCtype = { UE4CodeGen_Private::EPropertyClass::Byte, "CCtype", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Spell, CCtype), Z_Construct_UEnum_FujiwaraBattleField_CCType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_CCtype_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_CCtype_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkill_Spell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_SpawnCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_ZAxisOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_YAxisOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_DamageOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_SpeedOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_InitSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_ScaleOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_InitScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_InitPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Spell_Statics::NewProp_CCtype,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkill_Spell_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FujiwaraBattleField,
		nullptr,
		&NewStructOps,
		"Skill_Spell",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSkill_Spell),
		alignof(FSkill_Spell),
		Z_Construct_UScriptStruct_FSkill_Spell_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Spell_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Spell_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Spell_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkill_Spell()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkill_Spell_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FujiwaraBattleField();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Skill_Spell"), sizeof(FSkill_Spell), Get_Z_Construct_UScriptStruct_FSkill_Spell_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkill_Spell_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkill_Spell_CRC() { return 2447279983U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
