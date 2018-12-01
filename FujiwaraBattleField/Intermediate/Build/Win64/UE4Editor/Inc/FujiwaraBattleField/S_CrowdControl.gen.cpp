// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FujiwaraBattleField/Public/CC/S_CrowdControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_CrowdControl() {}
// Cross Module References
	FUJIWARABATTLEFIELD_API UEnum* Z_Construct_UEnum_FujiwaraBattleField_CCType();
	UPackage* Z_Construct_UPackage__Script_FujiwaraBattleField();
	FUJIWARABATTLEFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdControl();
// End Cross Module References
	static UEnum* CCType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FujiwaraBattleField_CCType, Z_Construct_UPackage__Script_FujiwaraBattleField(), TEXT("CCType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CCType(CCType_StaticEnum, TEXT("/Script/FujiwaraBattleField"), TEXT("CCType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FujiwaraBattleField_CCType_CRC() { return 1695379412U; }
	UEnum* Z_Construct_UEnum_FujiwaraBattleField_CCType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FujiwaraBattleField();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CCType"), 0, Get_Z_Construct_UEnum_FujiwaraBattleField_CCType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Basic", (int64)Basic },
				{ "Slow", (int64)Slow },
				{ "SkillBlocked", (int64)SkillBlocked },
				{ "MoveBlocked", (int64)MoveBlocked },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Basic.DisplayName", "Basic" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/CC/S_CrowdControl.h" },
				{ "MoveBlocked.DisplayName", "MoveBlocked" },
				{ "SkillBlocked.DisplayName", "SkillBlocked" },
				{ "Slow.DisplayName", "Slow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FujiwaraBattleField,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"CCType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"CCType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCrowdControl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUJIWARABATTLEFIELD_API uint32 Get_Z_Construct_UScriptStruct_FCrowdControl_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdControl, Z_Construct_UPackage__Script_FujiwaraBattleField(), TEXT("CrowdControl"), sizeof(FCrowdControl), Get_Z_Construct_UScriptStruct_FCrowdControl_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCrowdControl(FCrowdControl::StaticStruct, TEXT("/Script/FujiwaraBattleField"), TEXT("CrowdControl"), false, nullptr, nullptr);
static struct FScriptStruct_FujiwaraBattleField_StaticRegisterNativesFCrowdControl
{
	FScriptStruct_FujiwaraBattleField_StaticRegisterNativesFCrowdControl()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CrowdControl")),new UScriptStruct::TCppStructOps<FCrowdControl>);
	}
} ScriptStruct_FujiwaraBattleField_StaticRegisterNativesFCrowdControl;
	struct Z_Construct_UScriptStruct_FCrowdControl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Dulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CC_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CC;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CC_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdControl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CC/S_CrowdControl.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdControl>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdControl_Statics::NewProp_Dulation_MetaData[] = {
		{ "Category", "CC" },
		{ "ModuleRelativePath", "Public/CC/S_CrowdControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdControl_Statics::NewProp_Dulation = { UE4CodeGen_Private::EPropertyClass::Float, "Dulation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCrowdControl, Dulation), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdControl_Statics::NewProp_Dulation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdControl_Statics::NewProp_Dulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdControl_Statics::NewProp_CC_MetaData[] = {
		{ "Category", "CC" },
		{ "ModuleRelativePath", "Public/CC/S_CrowdControl.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdControl_Statics::NewProp_CC = { UE4CodeGen_Private::EPropertyClass::Array, "CC", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCrowdControl, CC), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdControl_Statics::NewProp_CC_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdControl_Statics::NewProp_CC_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdControl_Statics::NewProp_CC_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "CC", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_FujiwaraBattleField_CCType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdControl_Statics::NewProp_Dulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdControl_Statics::NewProp_CC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdControl_Statics::NewProp_CC_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FujiwaraBattleField,
		nullptr,
		&NewStructOps,
		"CrowdControl",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FCrowdControl),
		alignof(FCrowdControl),
		Z_Construct_UScriptStruct_FCrowdControl_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdControl_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdControl_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdControl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCrowdControl_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FujiwaraBattleField();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CrowdControl"), sizeof(FCrowdControl), Get_Z_Construct_UScriptStruct_FCrowdControl_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCrowdControl_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCrowdControl_CRC() { return 2352429753U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
