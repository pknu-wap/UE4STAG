// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FujiwaraBattleField/Public/FBFPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBFPlayerController() {}
// Cross Module References
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UDelegateFunction_FujiwaraBattleField_WidgetStack__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FujiwaraBattleField();
	FUJIWARABATTLEFIELD_API UClass* Z_Construct_UClass_AFBFPlayerController_NoRegister();
	FUJIWARABATTLEFIELD_API UClass* Z_Construct_UClass_AFBFPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FujiwaraBattleField_WidgetStack__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FujiwaraBattleField_WidgetStack__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FBFPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FujiwaraBattleField_WidgetStack__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FujiwaraBattleField, "WidgetStack__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FujiwaraBattleField_WidgetStack__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FujiwaraBattleField_WidgetStack__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FujiwaraBattleField_WidgetStack__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FujiwaraBattleField_WidgetStack__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AFBFPlayerController::StaticRegisterNativesAFBFPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AFBFPlayerController_NoRegister()
	{
		return AFBFPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFBFPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWidgetDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWidgetDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatingWidgets;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FloatingWidgets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFBFPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FujiwaraBattleField,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBFPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FBFPlayerController.h" },
		{ "ModuleRelativePath", "Public/FBFPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBFPlayerController_Statics::NewProp_OnWidgetDelegate_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FBFPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFBFPlayerController_Statics::NewProp_OnWidgetDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnWidgetDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFBFPlayerController, OnWidgetDelegate), Z_Construct_UDelegateFunction_FujiwaraBattleField_WidgetStack__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFBFPlayerController_Statics::NewProp_OnWidgetDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFBFPlayerController_Statics::NewProp_OnWidgetDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBFPlayerController_Statics::NewProp_FloatingWidgets_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/FBFPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFBFPlayerController_Statics::NewProp_FloatingWidgets = { UE4CodeGen_Private::EPropertyClass::Array, "FloatingWidgets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AFBFPlayerController, FloatingWidgets), METADATA_PARAMS(Z_Construct_UClass_AFBFPlayerController_Statics::NewProp_FloatingWidgets_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFBFPlayerController_Statics::NewProp_FloatingWidgets_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFBFPlayerController_Statics::NewProp_FloatingWidgets_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "FloatingWidgets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFBFPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBFPlayerController_Statics::NewProp_OnWidgetDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBFPlayerController_Statics::NewProp_FloatingWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBFPlayerController_Statics::NewProp_FloatingWidgets_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFBFPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFBFPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFBFPlayerController_Statics::ClassParams = {
		&AFBFPlayerController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		nullptr, 0,
		Z_Construct_UClass_AFBFPlayerController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFBFPlayerController_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFBFPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFBFPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFBFPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFBFPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFBFPlayerController, 3830461800);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFBFPlayerController(Z_Construct_UClass_AFBFPlayerController, &AFBFPlayerController::StaticClass, TEXT("/Script/FujiwaraBattleField"), TEXT("AFBFPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFBFPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
