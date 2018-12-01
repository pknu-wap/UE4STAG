// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FujiwaraBattleField/Public/Music/S_MusicClip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_MusicClip() {}
// Cross Module References
	FUJIWARABATTLEFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FMusicClip();
	UPackage* Z_Construct_UPackage__Script_FujiwaraBattleField();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
class UScriptStruct* FMusicClip::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUJIWARABATTLEFIELD_API uint32 Get_Z_Construct_UScriptStruct_FMusicClip_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMusicClip, Z_Construct_UPackage__Script_FujiwaraBattleField(), TEXT("MusicClip"), sizeof(FMusicClip), Get_Z_Construct_UScriptStruct_FMusicClip_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMusicClip(FMusicClip::StaticStruct, TEXT("/Script/FujiwaraBattleField"), TEXT("MusicClip"), false, nullptr, nullptr);
static struct FScriptStruct_FujiwaraBattleField_StaticRegisterNativesFMusicClip
{
	FScriptStruct_FujiwaraBattleField_StaticRegisterNativesFMusicClip()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MusicClip")),new UScriptStruct::TCppStructOps<FMusicClip>);
	}
} ScriptStruct_FujiwaraBattleField_StaticRegisterNativesFMusicClip;
	struct Z_Construct_UScriptStruct_FMusicClip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StateInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitDestinations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExitDestinations;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ExitDestinations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClipDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Music_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Music;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLooped_MetaData[];
#endif
		static void NewProp_bIsLooped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLooped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMusicClip_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Music/S_MusicClip.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMusicClip_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMusicClip>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_StateInfo_MetaData[] = {
		{ "Category", "Music" },
		{ "ModuleRelativePath", "Public/Music/S_MusicClip.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_StateInfo = { UE4CodeGen_Private::EPropertyClass::Str, "StateInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMusicClip, StateInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_StateInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_StateInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_ExitDestinations_MetaData[] = {
		{ "Category", "Music" },
		{ "ModuleRelativePath", "Public/Music/S_MusicClip.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_ExitDestinations = { UE4CodeGen_Private::EPropertyClass::Array, "ExitDestinations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMusicClip, ExitDestinations), METADATA_PARAMS(Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_ExitDestinations_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_ExitDestinations_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_ExitDestinations_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ExitDestinations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_TransitionTime_MetaData[] = {
		{ "Category", "Music" },
		{ "ModuleRelativePath", "Public/Music/S_MusicClip.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_TransitionTime = { UE4CodeGen_Private::EPropertyClass::Float, "TransitionTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMusicClip, TransitionTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_TransitionTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_TransitionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_ClipDuration_MetaData[] = {
		{ "Category", "Music" },
		{ "ModuleRelativePath", "Public/Music/S_MusicClip.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_ClipDuration = { UE4CodeGen_Private::EPropertyClass::Float, "ClipDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMusicClip, ClipDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_ClipDuration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_ClipDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_Music_MetaData[] = {
		{ "Category", "Music" },
		{ "ModuleRelativePath", "Public/Music/S_MusicClip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_Music = { UE4CodeGen_Private::EPropertyClass::Object, "Music", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMusicClip, Music), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_Music_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_Music_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_bIsLooped_MetaData[] = {
		{ "Category", "Music" },
		{ "ModuleRelativePath", "Public/Music/S_MusicClip.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_bIsLooped_SetBit(void* Obj)
	{
		((FMusicClip*)Obj)->bIsLooped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_bIsLooped = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsLooped", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMusicClip), &Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_bIsLooped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_bIsLooped_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_bIsLooped_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMusicClip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_StateInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_ExitDestinations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_ExitDestinations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_TransitionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_ClipDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_Music,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMusicClip_Statics::NewProp_bIsLooped,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMusicClip_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FujiwaraBattleField,
		nullptr,
		&NewStructOps,
		"MusicClip",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMusicClip),
		alignof(FMusicClip),
		Z_Construct_UScriptStruct_FMusicClip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMusicClip_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMusicClip_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMusicClip_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMusicClip()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMusicClip_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FujiwaraBattleField();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MusicClip"), sizeof(FMusicClip), Get_Z_Construct_UScriptStruct_FMusicClip_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMusicClip_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMusicClip_CRC() { return 1840860413U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
