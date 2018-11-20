// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FujiwaraBattleField/Public/Character/FBFBaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBFBaseCharacter() {}
// Cross Module References
	FUJIWARABATTLEFIELD_API UClass* Z_Construct_UClass_AFBFBaseCharacter_NoRegister();
	FUJIWARABATTLEFIELD_API UClass* Z_Construct_UClass_AFBFBaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FujiwaraBattleField();
// End Cross Module References
	void AFBFBaseCharacter::StaticRegisterNativesAFBFBaseCharacter()
	{
	}
	UClass* Z_Construct_UClass_AFBFBaseCharacter_NoRegister()
	{
		return AFBFBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFBFBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDash_MetaData[];
#endif
		static void NewProp_bCanDash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCasting_MetaData[];
#endif
		static void NewProp_bIsCasting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCasting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFBFBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FujiwaraBattleField,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBFBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/FBFBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/FBFBaseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBFBaseCharacter_Statics::NewProp_bCanDash_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/Character/FBFBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFBFBaseCharacter_Statics::NewProp_bCanDash_SetBit(void* Obj)
	{
		((AFBFBaseCharacter*)Obj)->bCanDash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFBFBaseCharacter_Statics::NewProp_bCanDash = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanDash", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFBFBaseCharacter), &Z_Construct_UClass_AFBFBaseCharacter_Statics::NewProp_bCanDash_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFBFBaseCharacter_Statics::NewProp_bCanDash_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFBFBaseCharacter_Statics::NewProp_bCanDash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBFBaseCharacter_Statics::NewProp_bIsCasting_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/Character/FBFBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFBFBaseCharacter_Statics::NewProp_bIsCasting_SetBit(void* Obj)
	{
		((AFBFBaseCharacter*)Obj)->bIsCasting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFBFBaseCharacter_Statics::NewProp_bIsCasting = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCasting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFBFBaseCharacter), &Z_Construct_UClass_AFBFBaseCharacter_Statics::NewProp_bIsCasting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFBFBaseCharacter_Statics::NewProp_bIsCasting_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFBFBaseCharacter_Statics::NewProp_bIsCasting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFBFBaseCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBFBaseCharacter_Statics::NewProp_bCanDash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBFBaseCharacter_Statics::NewProp_bIsCasting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFBFBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFBFBaseCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFBFBaseCharacter_Statics::ClassParams = {
		&AFBFBaseCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFBFBaseCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFBFBaseCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFBFBaseCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFBFBaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFBFBaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFBFBaseCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFBFBaseCharacter, 2128489144);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFBFBaseCharacter(Z_Construct_UClass_AFBFBaseCharacter, &AFBFBaseCharacter::StaticClass, TEXT("/Script/FujiwaraBattleField"), TEXT("AFBFBaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFBFBaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
