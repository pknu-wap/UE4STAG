// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FujiwaraBattleField/Public/Widget/FloatingWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatingWidget() {}
// Cross Module References
	FUJIWARABATTLEFIELD_API UClass* Z_Construct_UClass_UFloatingWidget_NoRegister();
	FUJIWARABATTLEFIELD_API UClass* Z_Construct_UClass_UFloatingWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FujiwaraBattleField();
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UFunction_UFloatingWidget_Close();
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UFunction_UFloatingWidget_Floating();
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UFunction_UFloatingWidget_GetCloseSound();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UFunction_UFloatingWidget_GetControlledByHotKey();
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UFunction_UFloatingWidget_GetFloatSound();
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UFunction_UFloatingWidget_GetHotKey();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	FUJIWARABATTLEFIELD_API UFunction* Z_Construct_UFunction_UFloatingWidget_Toggle();
// End Cross Module References
	static FName NAME_UFloatingWidget_Close = FName(TEXT("Close"));
	void UFloatingWidget::Close()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFloatingWidget_Close),NULL);
	}
	static FName NAME_UFloatingWidget_Floating = FName(TEXT("Floating"));
	void UFloatingWidget::Floating()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFloatingWidget_Floating),NULL);
	}
	static FName NAME_UFloatingWidget_Toggle = FName(TEXT("Toggle"));
	void UFloatingWidget::Toggle()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFloatingWidget_Toggle),NULL);
	}
	void UFloatingWidget::StaticRegisterNativesUFloatingWidget()
	{
		UClass* Class = UFloatingWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCloseSound", &UFloatingWidget::execGetCloseSound },
			{ "GetControlledByHotKey", &UFloatingWidget::execGetControlledByHotKey },
			{ "GetFloatSound", &UFloatingWidget::execGetFloatSound },
			{ "GetHotKey", &UFloatingWidget::execGetHotKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFloatingWidget_Close_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatingWidget_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Widget/FloatingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatingWidget_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatingWidget, "Close", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatingWidget_Close_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFloatingWidget_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatingWidget_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatingWidget_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatingWidget_Floating_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatingWidget_Floating_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Widget/FloatingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatingWidget_Floating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatingWidget, "Floating", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatingWidget_Floating_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFloatingWidget_Floating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatingWidget_Floating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatingWidget_Floating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatingWidget_GetCloseSound_Statics
	{
		struct FloatingWidget_eventGetCloseSound_Parms
		{
			USoundBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFloatingWidget_GetCloseSound_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FloatingWidget_eventGetCloseSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatingWidget_GetCloseSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatingWidget_GetCloseSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatingWidget_GetCloseSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Widget/FloatingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatingWidget_GetCloseSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatingWidget, "GetCloseSound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FloatingWidget_eventGetCloseSound_Parms), Z_Construct_UFunction_UFloatingWidget_GetCloseSound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFloatingWidget_GetCloseSound_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatingWidget_GetCloseSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFloatingWidget_GetCloseSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatingWidget_GetCloseSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatingWidget_GetCloseSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatingWidget_GetControlledByHotKey_Statics
	{
		struct FloatingWidget_eventGetControlledByHotKey_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFloatingWidget_GetControlledByHotKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FloatingWidget_eventGetControlledByHotKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFloatingWidget_GetControlledByHotKey_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FloatingWidget_eventGetControlledByHotKey_Parms), &Z_Construct_UFunction_UFloatingWidget_GetControlledByHotKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatingWidget_GetControlledByHotKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatingWidget_GetControlledByHotKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatingWidget_GetControlledByHotKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Widget/FloatingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatingWidget_GetControlledByHotKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatingWidget, "GetControlledByHotKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FloatingWidget_eventGetControlledByHotKey_Parms), Z_Construct_UFunction_UFloatingWidget_GetControlledByHotKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFloatingWidget_GetControlledByHotKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatingWidget_GetControlledByHotKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFloatingWidget_GetControlledByHotKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatingWidget_GetControlledByHotKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatingWidget_GetControlledByHotKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatingWidget_GetFloatSound_Statics
	{
		struct FloatingWidget_eventGetFloatSound_Parms
		{
			USoundBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFloatingWidget_GetFloatSound_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FloatingWidget_eventGetFloatSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatingWidget_GetFloatSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatingWidget_GetFloatSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatingWidget_GetFloatSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Widget/FloatingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatingWidget_GetFloatSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatingWidget, "GetFloatSound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FloatingWidget_eventGetFloatSound_Parms), Z_Construct_UFunction_UFloatingWidget_GetFloatSound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFloatingWidget_GetFloatSound_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatingWidget_GetFloatSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFloatingWidget_GetFloatSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatingWidget_GetFloatSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatingWidget_GetFloatSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatingWidget_GetHotKey_Statics
	{
		struct FloatingWidget_eventGetHotKey_Parms
		{
			FKey ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatingWidget_GetHotKey_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FloatingWidget_eventGetHotKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatingWidget_GetHotKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatingWidget_GetHotKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatingWidget_GetHotKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Widget/FloatingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatingWidget_GetHotKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatingWidget, "GetHotKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FloatingWidget_eventGetHotKey_Parms), Z_Construct_UFunction_UFloatingWidget_GetHotKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFloatingWidget_GetHotKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatingWidget_GetHotKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFloatingWidget_GetHotKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatingWidget_GetHotKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatingWidget_GetHotKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatingWidget_Toggle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatingWidget_Toggle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Widget/FloatingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatingWidget_Toggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatingWidget, "Toggle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatingWidget_Toggle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFloatingWidget_Toggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatingWidget_Toggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatingWidget_Toggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFloatingWidget_NoRegister()
	{
		return UFloatingWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFloatingWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayed_MetaData[];
#endif
		static void NewProp_bDisplayed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bControlledByHotKey_MetaData[];
#endif
		static void NewProp_bControlledByHotKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bControlledByHotKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HotKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HotKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatingWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FujiwaraBattleField,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFloatingWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloatingWidget_Close, "Close" }, // 2037020472
		{ &Z_Construct_UFunction_UFloatingWidget_Floating, "Floating" }, // 1056529460
		{ &Z_Construct_UFunction_UFloatingWidget_GetCloseSound, "GetCloseSound" }, // 3642335962
		{ &Z_Construct_UFunction_UFloatingWidget_GetControlledByHotKey, "GetControlledByHotKey" }, // 1759947925
		{ &Z_Construct_UFunction_UFloatingWidget_GetFloatSound, "GetFloatSound" }, // 3975038485
		{ &Z_Construct_UFunction_UFloatingWidget_GetHotKey, "GetHotKey" }, // 1196330612
		{ &Z_Construct_UFunction_UFloatingWidget_Toggle, "Toggle" }, // 886250864
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widget/FloatingWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/FloatingWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingWidget_Statics::NewProp_CloseSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Widget/FloatingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloatingWidget_Statics::NewProp_CloseSound = { UE4CodeGen_Private::EPropertyClass::Object, "CloseSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UFloatingWidget, CloseSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFloatingWidget_Statics::NewProp_CloseSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFloatingWidget_Statics::NewProp_CloseSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingWidget_Statics::NewProp_FloatSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Widget/FloatingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloatingWidget_Statics::NewProp_FloatSound = { UE4CodeGen_Private::EPropertyClass::Object, "FloatSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UFloatingWidget, FloatSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFloatingWidget_Statics::NewProp_FloatSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFloatingWidget_Statics::NewProp_FloatSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingWidget_Statics::NewProp_bDisplayed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Widget/FloatingWidget.h" },
	};
#endif
	void Z_Construct_UClass_UFloatingWidget_Statics::NewProp_bDisplayed_SetBit(void* Obj)
	{
		((UFloatingWidget*)Obj)->bDisplayed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFloatingWidget_Statics::NewProp_bDisplayed = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisplayed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFloatingWidget), &Z_Construct_UClass_UFloatingWidget_Statics::NewProp_bDisplayed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFloatingWidget_Statics::NewProp_bDisplayed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFloatingWidget_Statics::NewProp_bDisplayed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingWidget_Statics::NewProp_bControlledByHotKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Widget/FloatingWidget.h" },
	};
#endif
	void Z_Construct_UClass_UFloatingWidget_Statics::NewProp_bControlledByHotKey_SetBit(void* Obj)
	{
		((UFloatingWidget*)Obj)->bControlledByHotKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFloatingWidget_Statics::NewProp_bControlledByHotKey = { UE4CodeGen_Private::EPropertyClass::Bool, "bControlledByHotKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFloatingWidget), &Z_Construct_UClass_UFloatingWidget_Statics::NewProp_bControlledByHotKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFloatingWidget_Statics::NewProp_bControlledByHotKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFloatingWidget_Statics::NewProp_bControlledByHotKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingWidget_Statics::NewProp_HotKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Widget/FloatingWidget.h" },
		{ "ToolTip", "UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = \"Input\", meta = (AllowPrivateAccess = \"true\"))\n               AFBFPlayerController* inputController;// UI\xeb\xa5\xbc \xec\xa0\x9c\xec\x96\xb4\xed\x95\xa0 \xed\x82\xa4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloatingWidget_Statics::NewProp_HotKey = { UE4CodeGen_Private::EPropertyClass::Struct, "HotKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UFloatingWidget, HotKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UFloatingWidget_Statics::NewProp_HotKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFloatingWidget_Statics::NewProp_HotKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloatingWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingWidget_Statics::NewProp_CloseSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingWidget_Statics::NewProp_FloatSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingWidget_Statics::NewProp_bDisplayed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingWidget_Statics::NewProp_bControlledByHotKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingWidget_Statics::NewProp_HotKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatingWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatingWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFloatingWidget_Statics::ClassParams = {
		&UFloatingWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFloatingWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFloatingWidget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFloatingWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFloatingWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloatingWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFloatingWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFloatingWidget, 2963243897);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFloatingWidget(Z_Construct_UClass_UFloatingWidget, &UFloatingWidget::StaticClass, TEXT("/Script/FujiwaraBattleField"), TEXT("UFloatingWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatingWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
