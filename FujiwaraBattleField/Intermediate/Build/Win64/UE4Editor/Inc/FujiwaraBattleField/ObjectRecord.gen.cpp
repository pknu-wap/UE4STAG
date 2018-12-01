// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FujiwaraBattleField/Public/Save/ObjectRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectRecord() {}
// Cross Module References
	FUJIWARABATTLEFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FObjectRecord();
	UPackage* Z_Construct_UPackage__Script_FujiwaraBattleField();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FObjectRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUJIWARABATTLEFIELD_API uint32 Get_Z_Construct_UScriptStruct_FObjectRecord_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectRecord, Z_Construct_UPackage__Script_FujiwaraBattleField(), TEXT("ObjectRecord"), sizeof(FObjectRecord), Get_Z_Construct_UScriptStruct_FObjectRecord_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FObjectRecord(FObjectRecord::StaticStruct, TEXT("/Script/FujiwaraBattleField"), TEXT("ObjectRecord"), false, nullptr, nullptr);
static struct FScriptStruct_FujiwaraBattleField_StaticRegisterNativesFObjectRecord
{
	FScriptStruct_FujiwaraBattleField_StaticRegisterNativesFObjectRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ObjectRecord")),new UScriptStruct::TCppStructOps<FObjectRecord>);
	}
} ScriptStruct_FujiwaraBattleField_StaticRegisterNativesFObjectRecord;
	struct Z_Construct_UScriptStruct_FObjectRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Self_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Self;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActor_MetaData[];
#endif
		static void NewProp_bActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OuterID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectRecord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Save/ObjectRecord.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "ObjectRecord" },
		{ "ModuleRelativePath", "Public/Save/ObjectRecord.h" },
		{ "ToolTip", "Spawn location if it's an actor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Transform = { UE4CodeGen_Private::EPropertyClass::Struct, "Transform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FObjectRecord, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Transform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "ObjectRecord" },
		{ "ModuleRelativePath", "Public/Save/ObjectRecord.h" },
		{ "ToolTip", "serialized data for all UProperties that are 'SaveGame' enabled" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Array, "Data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FObjectRecord, Data), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Data_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ObjectRecord" },
		{ "ModuleRelativePath", "Public/Save/ObjectRecord.h" },
		{ "ToolTip", "Name of the object" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FObjectRecord, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Self_MetaData[] = {
		{ "Category", "ObjectRecord" },
		{ "ModuleRelativePath", "Public/Save/ObjectRecord.h" },
		{ "ToolTip", "this is for loading only, store a pointer for the loaded object here so you can loop for the records later to de-serialize all the data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Self = { UE4CodeGen_Private::EPropertyClass::Object, "Self", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FObjectRecord, Self), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Self_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Self_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_bActor_MetaData[] = {
		{ "Category", "ObjectRecord" },
		{ "ModuleRelativePath", "Public/Save/ObjectRecord.h" },
		{ "ToolTip", "if the outer is an actor otherwise will be UObject" },
	};
#endif
	void Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_bActor_SetBit(void* Obj)
	{
		((FObjectRecord*)Obj)->bActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_bActor = { UE4CodeGen_Private::EPropertyClass::Bool, "bActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FObjectRecord), &Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_bActor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_bActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_bActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_OuterID_MetaData[] = {
		{ "Category", "ObjectRecord" },
		{ "ModuleRelativePath", "Public/Save/ObjectRecord.h" },
		{ "ToolTip", "save the outer used for object so they get loaded back in the correct hierachy" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_OuterID = { UE4CodeGen_Private::EPropertyClass::Int, "OuterID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FObjectRecord, OuterID), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_OuterID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_OuterID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Outer_MetaData[] = {
		{ "Category", "ObjectRecord" },
		{ "ModuleRelativePath", "Public/Save/ObjectRecord.h" },
		{ "ToolTip", "save the outer used for object so they get loaded back in the correct hierachy" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Outer = { UE4CodeGen_Private::EPropertyClass::Object, "Outer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FObjectRecord, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Outer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Outer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "ObjectRecord" },
		{ "ModuleRelativePath", "Public/Save/ObjectRecord.h" },
		{ "ToolTip", "class that this object is" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class = { UE4CodeGen_Private::EPropertyClass::Class, "Class", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FObjectRecord, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Self,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_bActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_OuterID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FujiwaraBattleField,
		nullptr,
		&NewStructOps,
		"ObjectRecord",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FObjectRecord),
		alignof(FObjectRecord),
		Z_Construct_UScriptStruct_FObjectRecord_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectRecord_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FObjectRecord_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FujiwaraBattleField();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ObjectRecord"), sizeof(FObjectRecord), Get_Z_Construct_UScriptStruct_FObjectRecord_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FObjectRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FObjectRecord_CRC() { return 1589665461U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
