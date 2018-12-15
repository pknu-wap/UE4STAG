// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FujiwaraBattleField/Public/Skill/S_Skill_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_Skill_Base() {}
// Cross Module References
	FUJIWARABATTLEFIELD_API UEnum* Z_Construct_UEnum_FujiwaraBattleField_SkillType();
	UPackage* Z_Construct_UPackage__Script_FujiwaraBattleField();
	FUJIWARABATTLEFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FSkill_Base();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* SkillType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FujiwaraBattleField_SkillType, Z_Construct_UPackage__Script_FujiwaraBattleField(), TEXT("SkillType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SkillType(SkillType_StaticEnum, TEXT("/Script/FujiwaraBattleField"), TEXT("SkillType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FujiwaraBattleField_SkillType_CRC() { return 2250935223U; }
	UEnum* Z_Construct_UEnum_FujiwaraBattleField_SkillType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FujiwaraBattleField();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SkillType"), 0, Get_Z_Construct_UEnum_FujiwaraBattleField_SkillType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "None", (int64)None },
				{ "Spell", (int64)Spell },
				{ "Dash", (int64)Dash },
				{ "CC", (int64)CC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CC.DisplayName", "CC" },
				{ "Dash.DisplayName", "Dash" },
				{ "ModuleRelativePath", "Public/Skill/S_Skill_Base.h" },
				{ "None.DisplayName", "None" },
				{ "Spell.DisplayName", "Spell" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FujiwaraBattleField,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"SkillType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"SkillType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSkill_Base::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUJIWARABATTLEFIELD_API uint32 Get_Z_Construct_UScriptStruct_FSkill_Base_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkill_Base, Z_Construct_UPackage__Script_FujiwaraBattleField(), TEXT("Skill_Base"), sizeof(FSkill_Base), Get_Z_Construct_UScriptStruct_FSkill_Base_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkill_Base(FSkill_Base::StaticStruct, TEXT("/Script/FujiwaraBattleField"), TEXT("Skill_Base"), false, nullptr, nullptr);
static struct FScriptStruct_FujiwaraBattleField_StaticRegisterNativesFSkill_Base
{
	FScriptStruct_FujiwaraBattleField_StaticRegisterNativesFSkill_Base()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Skill_Base")),new UScriptStruct::TCppStructOps<FSkill_Base>);
	}
} ScriptStruct_FujiwaraBattleField_StaticRegisterNativesFSkill_Base;
	struct Z_Construct_UScriptStruct_FSkill_Base_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsChargedSkill_MetaData[];
#endif
		static void NewProp_bIsChargedSkill_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChargedSkill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsComboSkill_MetaData[];
#endif
		static void NewProp_bIsComboSkill_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsComboSkill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickIntervall_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickIntervall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Cost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CastingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Overrideicon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Overrideicon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Base_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Base.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkill_Base_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkill_Base>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_bIsChargedSkill_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Base.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_bIsChargedSkill_SetBit(void* Obj)
	{
		((FSkill_Base*)Obj)->bIsChargedSkill = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_bIsChargedSkill = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsChargedSkill", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSkill_Base), &Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_bIsChargedSkill_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_bIsChargedSkill_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_bIsChargedSkill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_bIsComboSkill_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Base.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_bIsComboSkill_SetBit(void* Obj)
	{
		((FSkill_Base*)Obj)->bIsComboSkill = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_bIsComboSkill = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsComboSkill", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSkill_Base), &Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_bIsComboSkill_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_bIsComboSkill_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_bIsComboSkill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_TickIntervall_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_TickIntervall = { UE4CodeGen_Private::EPropertyClass::Float, "TickIntervall", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Base, TickIntervall), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_TickIntervall_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_TickIntervall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Cost = { UE4CodeGen_Private::EPropertyClass::Int, "Cost", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Base, Cost), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Cost_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Cost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_CastingTime_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_CastingTime = { UE4CodeGen_Private::EPropertyClass::Float, "CastingTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Base, CastingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_CastingTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_CastingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Cooldown_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Cooldown = { UE4CodeGen_Private::EPropertyClass::Float, "Cooldown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Base, Cooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Cooldown_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Cooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Overrideicon_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Overrideicon = { UE4CodeGen_Private::EPropertyClass::Object, "Overrideicon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Base, Overrideicon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Overrideicon_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Overrideicon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/Skill/S_Skill_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Byte, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkill_Base, Type), Z_Construct_UEnum_FujiwaraBattleField_SkillType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkill_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_bIsChargedSkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_bIsComboSkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_TickIntervall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_CastingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Overrideicon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Base_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkill_Base_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FujiwaraBattleField,
		nullptr,
		&NewStructOps,
		"Skill_Base",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSkill_Base),
		alignof(FSkill_Base),
		Z_Construct_UScriptStruct_FSkill_Base_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Base_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkill_Base_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Base_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkill_Base()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkill_Base_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FujiwaraBattleField();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Skill_Base"), sizeof(FSkill_Base), Get_Z_Construct_UScriptStruct_FSkill_Base_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkill_Base_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkill_Base_CRC() { return 265083855U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
