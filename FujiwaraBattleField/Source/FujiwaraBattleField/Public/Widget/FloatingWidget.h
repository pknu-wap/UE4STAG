// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WidgetTree.h"
#include "UserWidget.h"
#include "FBFPlayerController.h"
#include "FloatingWidget.generated.h"
/**
 * 
 */
DECLARE_EVENT(AMyTriggerVolume, FPlayerEntered)

UCLASS(BlueprintType)
class FUJIWARABATTLEFIELD_API UFloatingWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Widget")
		void Floating();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Widget")
		void Close();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Widget")
		void Toggle();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		FKey GetHotKey();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		bool GetControlledByHotKey();
	UFUNCTION(BlueprintCallable, Category = "Sound")
		USoundBase* GetFloatSound();
	UFUNCTION(BlueprintCallable, Category = "Sound")
		USoundBase* GetCloseSound();

private:
	/*UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Input", meta = (AllowPrivateAccess = "true"))
		AFBFPlayerController* inputController;*/
	// UI를 제어할 키
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Input", meta = (AllowPrivateAccess = "true"))
		FKey HotKey;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Input", meta = (AllowPrivateAccess = "true"))
		bool bControlledByHotKey;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Input", meta = (AllowPrivateAccess = "true"))
		bool bDisplayed;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Sound", meta = (AllowPrivateAccess = "true"))
		USoundBase* FloatSound;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Sound", meta = (AllowPrivateAccess = "true"))
		USoundBase* CloseSound;
};
