// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundBase;
struct FKey;
#ifdef FUJIWARABATTLEFIELD_FloatingWidget_generated_h
#error "FloatingWidget.generated.h already included, missing '#pragma once' in FloatingWidget.h"
#endif
#define FUJIWARABATTLEFIELD_FloatingWidget_generated_h

#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCloseSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundBase**)Z_Param__Result=P_THIS->GetCloseSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundBase**)Z_Param__Result=P_THIS->GetFloatSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControlledByHotKey) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetControlledByHotKey(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHotKey) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=P_THIS->GetHotKey(); \
		P_NATIVE_END; \
	}


#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCloseSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundBase**)Z_Param__Result=P_THIS->GetCloseSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundBase**)Z_Param__Result=P_THIS->GetFloatSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControlledByHotKey) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetControlledByHotKey(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHotKey) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=P_THIS->GetHotKey(); \
		P_NATIVE_END; \
	}


#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_EVENT_PARMS
#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_CALLBACK_WRAPPERS
#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFloatingWidget(); \
	friend struct Z_Construct_UClass_UFloatingWidget_Statics; \
public: \
	DECLARE_CLASS(UFloatingWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FujiwaraBattleField"), NO_API) \
	DECLARE_SERIALIZER(UFloatingWidget)


#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFloatingWidget(); \
	friend struct Z_Construct_UClass_UFloatingWidget_Statics; \
public: \
	DECLARE_CLASS(UFloatingWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FujiwaraBattleField"), NO_API) \
	DECLARE_SERIALIZER(UFloatingWidget)


#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloatingWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloatingWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloatingWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloatingWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFloatingWidget(UFloatingWidget&&); \
	NO_API UFloatingWidget(const UFloatingWidget&); \
public:


#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloatingWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFloatingWidget(UFloatingWidget&&); \
	NO_API UFloatingWidget(const UFloatingWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloatingWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloatingWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloatingWidget)


#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HotKey() { return STRUCT_OFFSET(UFloatingWidget, HotKey); } \
	FORCEINLINE static uint32 __PPO__bControlledByHotKey() { return STRUCT_OFFSET(UFloatingWidget, bControlledByHotKey); } \
	FORCEINLINE static uint32 __PPO__bDisplayed() { return STRUCT_OFFSET(UFloatingWidget, bDisplayed); } \
	FORCEINLINE static uint32 __PPO__FloatSound() { return STRUCT_OFFSET(UFloatingWidget, FloatSound); } \
	FORCEINLINE static uint32 __PPO__CloseSound() { return STRUCT_OFFSET(UFloatingWidget, CloseSound); }


#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_14_PROLOG \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_EVENT_PARMS


#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_RPC_WRAPPERS \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_CALLBACK_WRAPPERS \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_INCLASS \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_CALLBACK_WRAPPERS \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_INCLASS_NO_PURE_DECLS \
	FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FujiwaraBattleField_Source_FujiwaraBattleField_Public_Widget_FloatingWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
