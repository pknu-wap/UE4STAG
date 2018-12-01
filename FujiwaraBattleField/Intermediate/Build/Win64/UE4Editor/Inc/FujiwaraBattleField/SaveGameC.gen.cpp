// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FujiwaraBattleField/Public/Save/SaveGameC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameC() {}
// Cross Module References
	FUJIWARABATTLEFIELD_API UClass* Z_Construct_UClass_USaveGameC_NoRegister();
	FUJIWARABATTLEFIELD_API UClass* Z_Construct_UClass_USaveGameC();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_FujiwaraBattleField();
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UFunction_USaveGameC_ActorArraySaver();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UFunction_USaveGameC_ActorPreloader();
	FUJIWARABATTLEFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FObjectRecord();
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UFunction_USaveGameC_ActorSaver();
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UFunction_USaveGameC_LoadData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UFunction_USaveGameC_SaveData();
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UFunction_USaveGameC_UObjectArraySaver();
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UFunction_USaveGameC_UObjectDataLoader();
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UFunction_USaveGameC_UObjectSaver();
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UFunction_USaveGameC_UObjectsPreloader();
// End Cross Module References
	void USaveGameC::StaticRegisterNativesUSaveGameC()
	{
		UClass* Class = USaveGameC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorArraySaver", &USaveGameC::execActorArraySaver },
			{ "ActorPreloader", &USaveGameC::execActorPreloader },
			{ "ActorSaver", &USaveGameC::execActorSaver },
			{ "LoadData", &USaveGameC::execLoadData },
			{ "SaveData", &USaveGameC::execSaveData },
			{ "UObjectArraySaver", &USaveGameC::execUObjectArraySaver },
			{ "UObjectDataLoader", &USaveGameC::execUObjectDataLoader },
			{ "UObjectSaver", &USaveGameC::execUObjectSaver },
			{ "UObjectsPreloader", &USaveGameC::execUObjectsPreloader },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveGameC_ActorArraySaver_Statics
	{
		struct SaveGameC_eventActorArraySaver_Parms
		{
			TArray<AActor*> SaveActors;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SaveActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveGameC_ActorArraySaver_Statics::NewProp_SaveActors = { UE4CodeGen_Private::EPropertyClass::Array, "SaveActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(SaveGameC_eventActorArraySaver_Parms, SaveActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameC_ActorArraySaver_Statics::NewProp_SaveActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SaveActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameC_ActorArraySaver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameC_ActorArraySaver_Statics::NewProp_SaveActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameC_ActorArraySaver_Statics::NewProp_SaveActors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameC_ActorArraySaver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Save/SaveGameC.h" },
		{ "ToolTip", "basically just a wrapper so you don't have to do a for loop in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameC_ActorArraySaver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameC, "ActorArraySaver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SaveGameC_eventActorArraySaver_Parms), Z_Construct_UFunction_USaveGameC_ActorArraySaver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_ActorArraySaver_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameC_ActorArraySaver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_ActorArraySaver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameC_ActorArraySaver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameC_ActorArraySaver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameC_ActorPreloader_Statics
	{
		struct SaveGameC_eventActorPreloader_Parms
		{
			AActor* WorldActor;
			FObjectRecord ActorRecord;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorRecord;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveGameC_ActorPreloader_Statics::NewProp_ActorRecord = { UE4CodeGen_Private::EPropertyClass::Struct, "ActorRecord", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SaveGameC_eventActorPreloader_Parms, ActorRecord), Z_Construct_UScriptStruct_FObjectRecord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameC_ActorPreloader_Statics::NewProp_WorldActor = { UE4CodeGen_Private::EPropertyClass::Object, "WorldActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SaveGameC_eventActorPreloader_Parms, WorldActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameC_ActorPreloader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameC_ActorPreloader_Statics::NewProp_ActorRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameC_ActorPreloader_Statics::NewProp_WorldActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameC_ActorPreloader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Save/SaveGameC.h" },
		{ "ToolTip", "Create all saved actors without any data serialized yet" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameC_ActorPreloader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameC, "ActorPreloader", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SaveGameC_eventActorPreloader_Parms), Z_Construct_UFunction_USaveGameC_ActorPreloader_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_ActorPreloader_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameC_ActorPreloader_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_ActorPreloader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameC_ActorPreloader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameC_ActorPreloader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameC_ActorSaver_Statics
	{
		struct SaveGameC_eventActorSaver_Parms
		{
			AActor* SaveActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameC_ActorSaver_Statics::NewProp_SaveActor = { UE4CodeGen_Private::EPropertyClass::Object, "SaveActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SaveGameC_eventActorSaver_Parms, SaveActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameC_ActorSaver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameC_ActorSaver_Statics::NewProp_SaveActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameC_ActorSaver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Save/SaveGameC.h" },
		{ "ToolTip", "Save individual Actors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameC_ActorSaver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameC, "ActorSaver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SaveGameC_eventActorSaver_Parms), Z_Construct_UFunction_USaveGameC_ActorSaver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_ActorSaver_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameC_ActorSaver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_ActorSaver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameC_ActorSaver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameC_ActorSaver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameC_LoadData_Statics
	{
		struct SaveGameC_eventLoadData_Parms
		{
			UObject* Object;
			TArray<uint8> Data;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveGameC_LoadData_Statics::NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Array, "Data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(SaveGameC_eventLoadData_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveGameC_LoadData_Statics::NewProp_Data_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameC_LoadData_Statics::NewProp_Object = { UE4CodeGen_Private::EPropertyClass::Object, "Object", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SaveGameC_eventLoadData_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameC_LoadData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameC_LoadData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameC_LoadData_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameC_LoadData_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameC_LoadData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Save/SaveGameC.h" },
		{ "ToolTip", "de-serialize the data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameC_LoadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameC, "LoadData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SaveGameC_eventLoadData_Parms), Z_Construct_UFunction_USaveGameC_LoadData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_LoadData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameC_LoadData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_LoadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameC_LoadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameC_LoadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameC_SaveData_Statics
	{
		struct SaveGameC_eventSaveData_Parms
		{
			UObject* Object;
			TArray<uint8> Data;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveGameC_SaveData_Statics::NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Array, "Data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SaveGameC_eventSaveData_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveGameC_SaveData_Statics::NewProp_Data_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameC_SaveData_Statics::NewProp_Object = { UE4CodeGen_Private::EPropertyClass::Object, "Object", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SaveGameC_eventSaveData_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameC_SaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameC_SaveData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameC_SaveData_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameC_SaveData_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameC_SaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Save/SaveGameC.h" },
		{ "ToolTip", "serialize the data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameC_SaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameC, "SaveData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SaveGameC_eventSaveData_Parms), Z_Construct_UFunction_USaveGameC_SaveData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_SaveData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameC_SaveData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_SaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameC_SaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameC_SaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameC_UObjectArraySaver_Statics
	{
		struct SaveGameC_eventUObjectArraySaver_Parms
		{
			TArray<UObject*> SaveObjects;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SaveObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveObjects_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveGameC_UObjectArraySaver_Statics::NewProp_SaveObjects = { UE4CodeGen_Private::EPropertyClass::Array, "SaveObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(SaveGameC_eventUObjectArraySaver_Parms, SaveObjects), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameC_UObjectArraySaver_Statics::NewProp_SaveObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SaveObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameC_UObjectArraySaver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameC_UObjectArraySaver_Statics::NewProp_SaveObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameC_UObjectArraySaver_Statics::NewProp_SaveObjects_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameC_UObjectArraySaver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Save/SaveGameC.h" },
		{ "ToolTip", "basically just a wrapper so you don't have to do a for loop in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameC_UObjectArraySaver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameC, "UObjectArraySaver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SaveGameC_eventUObjectArraySaver_Parms), Z_Construct_UFunction_USaveGameC_UObjectArraySaver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_UObjectArraySaver_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameC_UObjectArraySaver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_UObjectArraySaver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameC_UObjectArraySaver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameC_UObjectArraySaver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameC_UObjectDataLoader_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameC_UObjectDataLoader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Save/SaveGameC.h" },
		{ "ToolTip", "load all data after all objects exist so all pointers will load" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameC_UObjectDataLoader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameC, "UObjectDataLoader", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameC_UObjectDataLoader_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_UObjectDataLoader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameC_UObjectDataLoader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameC_UObjectDataLoader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameC_UObjectSaver_Statics
	{
		struct SaveGameC_eventUObjectSaver_Parms
		{
			UObject* SaveObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameC_UObjectSaver_Statics::NewProp_SaveObject = { UE4CodeGen_Private::EPropertyClass::Object, "SaveObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SaveGameC_eventUObjectSaver_Parms, SaveObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameC_UObjectSaver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameC_UObjectSaver_Statics::NewProp_SaveObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameC_UObjectSaver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Save/SaveGameC.h" },
		{ "ToolTip", "Save individual objects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameC_UObjectSaver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameC, "UObjectSaver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SaveGameC_eventUObjectSaver_Parms), Z_Construct_UFunction_USaveGameC_UObjectSaver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_UObjectSaver_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameC_UObjectSaver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_UObjectSaver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameC_UObjectSaver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameC_UObjectSaver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameC_UObjectsPreloader_Statics
	{
		struct SaveGameC_eventUObjectsPreloader_Parms
		{
			AActor* WorldActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameC_UObjectsPreloader_Statics::NewProp_WorldActor = { UE4CodeGen_Private::EPropertyClass::Object, "WorldActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SaveGameC_eventUObjectsPreloader_Parms, WorldActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameC_UObjectsPreloader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameC_UObjectsPreloader_Statics::NewProp_WorldActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameC_UObjectsPreloader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Save/SaveGameC.h" },
		{ "ToolTip", "create all saved objects without any data serialized yet" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameC_UObjectsPreloader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameC, "UObjectsPreloader", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SaveGameC_eventUObjectsPreloader_Parms), Z_Construct_UFunction_USaveGameC_UObjectsPreloader_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_UObjectsPreloader_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameC_UObjectsPreloader_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameC_UObjectsPreloader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameC_UObjectsPreloader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameC_UObjectsPreloader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveGameC_NoRegister()
	{
		return USaveGameC::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistentOuters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PersistentOuters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PersistentOuters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TempObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TempObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectRecords_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectRecords;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectRecords_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GalaxyData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GalaxyData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GalaxyData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_FujiwaraBattleField,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveGameC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveGameC_ActorArraySaver, "ActorArraySaver" }, // 745679109
		{ &Z_Construct_UFunction_USaveGameC_ActorPreloader, "ActorPreloader" }, // 3116806738
		{ &Z_Construct_UFunction_USaveGameC_ActorSaver, "ActorSaver" }, // 1208042365
		{ &Z_Construct_UFunction_USaveGameC_LoadData, "LoadData" }, // 3815684528
		{ &Z_Construct_UFunction_USaveGameC_SaveData, "SaveData" }, // 1149121698
		{ &Z_Construct_UFunction_USaveGameC_UObjectArraySaver, "UObjectArraySaver" }, // 2909695996
		{ &Z_Construct_UFunction_USaveGameC_UObjectDataLoader, "UObjectDataLoader" }, // 3544768001
		{ &Z_Construct_UFunction_USaveGameC_UObjectSaver, "UObjectSaver" }, // 1671723768
		{ &Z_Construct_UFunction_USaveGameC_UObjectsPreloader, "UObjectsPreloader" }, // 1263774167
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameC_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Save/SaveGameC.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Save/SaveGameC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameC_Statics::NewProp_PersistentOuters_MetaData[] = {
		{ "Category", "SaveGameC" },
		{ "ModuleRelativePath", "Public/Save/SaveGameC.h" },
		{ "ToolTip", "outers that are part of the map or otherwise preloaded so won't be in the list of TempObjects" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveGameC_Statics::NewProp_PersistentOuters = { UE4CodeGen_Private::EPropertyClass::Array, "PersistentOuters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USaveGameC, PersistentOuters), METADATA_PARAMS(Z_Construct_UClass_USaveGameC_Statics::NewProp_PersistentOuters_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameC_Statics::NewProp_PersistentOuters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveGameC_Statics::NewProp_PersistentOuters_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PersistentOuters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameC_Statics::NewProp_TempObjects_MetaData[] = {
		{ "Category", "SaveGameC" },
		{ "ModuleRelativePath", "Public/Save/SaveGameC.h" },
		{ "ToolTip", "used for temp loading objects before serializing but after loading" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveGameC_Statics::NewProp_TempObjects = { UE4CodeGen_Private::EPropertyClass::Array, "TempObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USaveGameC, TempObjects), METADATA_PARAMS(Z_Construct_UClass_USaveGameC_Statics::NewProp_TempObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameC_Statics::NewProp_TempObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveGameC_Statics::NewProp_TempObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TempObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameC_Statics::NewProp_ObjectRecords_MetaData[] = {
		{ "Category", "SaveGameC" },
		{ "ModuleRelativePath", "Public/Save/SaveGameC.h" },
		{ "ToolTip", "All object data in one array" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveGameC_Statics::NewProp_ObjectRecords = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectRecords", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USaveGameC, ObjectRecords), METADATA_PARAMS(Z_Construct_UClass_USaveGameC_Statics::NewProp_ObjectRecords_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameC_Statics::NewProp_ObjectRecords_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameC_Statics::NewProp_ObjectRecords_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectRecords", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FObjectRecord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameC_Statics::NewProp_GalaxyData_MetaData[] = {
		{ "Category", "SaveGameC" },
		{ "ModuleRelativePath", "Public/Save/SaveGameC.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveGameC_Statics::NewProp_GalaxyData = { UE4CodeGen_Private::EPropertyClass::Array, "GalaxyData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USaveGameC, GalaxyData), METADATA_PARAMS(Z_Construct_UClass_USaveGameC_Statics::NewProp_GalaxyData_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameC_Statics::NewProp_GalaxyData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USaveGameC_Statics::NewProp_GalaxyData_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "GalaxyData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameC_Statics::NewProp_PersistentOuters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameC_Statics::NewProp_PersistentOuters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameC_Statics::NewProp_TempObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameC_Statics::NewProp_TempObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameC_Statics::NewProp_ObjectRecords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameC_Statics::NewProp_ObjectRecords_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameC_Statics::NewProp_GalaxyData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameC_Statics::NewProp_GalaxyData_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameC_Statics::ClassParams = {
		&USaveGameC::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_USaveGameC_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USaveGameC_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameC_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveGameC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameC, 3612122584);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameC(Z_Construct_UClass_USaveGameC, &USaveGameC::StaticClass, TEXT("/Script/FujiwaraBattleField"), TEXT("USaveGameC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
