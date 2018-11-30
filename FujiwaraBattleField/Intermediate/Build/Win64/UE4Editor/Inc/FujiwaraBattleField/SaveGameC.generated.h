// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
struct FObjectRecord;
#ifdef FUJIWARABATTLEFIELD_SaveGameC_generated_h
#error "SaveGameC.generated.h already included, missing '#pragma once' in SaveGameC.h"
#endif
#define FUJIWARABATTLEFIELD_SaveGameC_generated_h

#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadData(Z_Param_Object,Z_Param_Out_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveData(Z_Param_Object,Z_Param_Out_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUObjectDataLoader) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UObjectDataLoader(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUObjectsPreloader) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_WorldActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UObjectsPreloader(Z_Param_WorldActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUObjectSaver) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_SaveObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UObjectSaver(Z_Param_SaveObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUObjectArraySaver) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SaveObjects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UObjectArraySaver(Z_Param_Out_SaveObjects); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActorPreloader) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_WorldActor); \
		P_GET_STRUCT_REF(FObjectRecord,Z_Param_Out_ActorRecord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActorPreloader(Z_Param_WorldActor,Z_Param_Out_ActorRecord); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActorSaver) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SaveActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActorSaver(Z_Param_SaveActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActorArraySaver) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_SaveActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActorArraySaver(Z_Param_Out_SaveActors); \
		P_NATIVE_END; \
	}


#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadData(Z_Param_Object,Z_Param_Out_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveData(Z_Param_Object,Z_Param_Out_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUObjectDataLoader) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UObjectDataLoader(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUObjectsPreloader) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_WorldActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UObjectsPreloader(Z_Param_WorldActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUObjectSaver) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_SaveObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UObjectSaver(Z_Param_SaveObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUObjectArraySaver) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SaveObjects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UObjectArraySaver(Z_Param_Out_SaveObjects); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActorPreloader) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_WorldActor); \
		P_GET_STRUCT_REF(FObjectRecord,Z_Param_Out_ActorRecord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActorPreloader(Z_Param_WorldActor,Z_Param_Out_ActorRecord); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActorSaver) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SaveActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActorSaver(Z_Param_SaveActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActorArraySaver) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_SaveActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActorArraySaver(Z_Param_Out_SaveActors); \
		P_NATIVE_END; \
	}


#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveGameC(); \
	friend struct Z_Construct_UClass_USaveGameC_Statics; \
public: \
	DECLARE_CLASS(USaveGameC, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FujiwaraBattleField"), NO_API) \
	DECLARE_SERIALIZER(USaveGameC)


#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSaveGameC(); \
	friend struct Z_Construct_UClass_USaveGameC_Statics; \
public: \
	DECLARE_CLASS(USaveGameC, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FujiwaraBattleField"), NO_API) \
	DECLARE_SERIALIZER(USaveGameC)


#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameC(USaveGameC&&); \
	NO_API USaveGameC(const USaveGameC&); \
public:


#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameC(USaveGameC&&); \
	NO_API USaveGameC(const USaveGameC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameC)


#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_PRIVATE_PROPERTY_OFFSET
#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_9_PROLOG
#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_PRIVATE_PROPERTY_OFFSET \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_RPC_WRAPPERS \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_INCLASS \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_PRIVATE_PROPERTY_OFFSET \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_INCLASS_NO_PURE_DECLS \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FujiwaraBattleField_Source_FujiwaraBattleField_Public_Save_SaveGameC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
