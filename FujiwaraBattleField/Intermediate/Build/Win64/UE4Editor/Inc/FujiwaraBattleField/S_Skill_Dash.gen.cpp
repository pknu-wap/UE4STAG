// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FujiwaraBattleField/Public/Skill/S_Skill_Dash.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_Skill_Dash() {}
// Cross Module References
	FUJIWARABATTLEFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FSkill_Dash();
	UPackage* Z_Construct_UPackage__Script_FujiwaraBattleField();
// End Cross Module References
class UScriptStruct* FSkill_Dash::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUJIWARABATTLEFIELD_API uint32 Get_Z_Construct_UScriptStruct_FSkill_Dash_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkill_Dash, Z_Construct_UPackage__Script_FujiwaraBattleField(), TEXT("Skill_Dash"), sizeof(FSkill_Dash), Get_Z_Construct_UScriptStruct_FSkill_Dash_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkill_Dash(FSkill_Dash::StaticStruct, TEXT("/Script/FujiwaraBattleField"), TEXT("Skill_Dash"), false, nullptr, nullptr);
static struct FScriptStruct_FujiwaraBattleField_StaticRegisterNativesFSkill_Dash
{
	FScriptStruct_FujiwaraBattleField_StaticRegisterNativesFSkill_Dash()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Skill_Dash")),new UScriptStruct::TCppStructOps<FSkill_Dash>);
	}
} ScriptStruct_FujiwaraBattleField_StaticRegisterNativesFSkill_Dash;
	struct Z_Construct_UScriptStruct_FSkill_Dash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BreakTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Dash_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Dash.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkill_Dash_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkill_Dash>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Dash_Statics::NewProp_BreakTime_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Dash.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Dash_Statics::NewProp_BreakTime = { UE4CodeGen_Private::EPropertyClass::Float, "BreakTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Dash, BreakTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Dash_Statics::NewProp_BreakTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Dash_Statics::NewProp_BreakTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Dash_Statics::NewProp_DashPower_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Dash.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Dash_Statics::NewProp_DashPower = { UE4CodeGen_Private::EPropertyClass::Float, "DashPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Dash, DashPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Dash_Statics::NewProp_DashPower_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Dash_Statics::NewProp_DashPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkill_Dash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Dash_Statics::NewProp_BreakTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Dash_Statics::NewProp_DashPower,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkill_Dash_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FujiwaraBattleField,
		nullptr,
		&NewStructOps,
		"Skill_Dash",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSkill_Dash),
		alignof(FSkill_Dash),
		Z_Construct_UScriptStruct_FSkill_Dash_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Dash_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Dash_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Dash_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkill_Dash()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkill_Dash_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FujiwaraBattleField();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Skill_Dash"), sizeof(FSkill_Dash), Get_Z_Construct_UScriptStruct_FSkill_Dash_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkill_Dash_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkill_Dash_CRC() { return 408674136U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
