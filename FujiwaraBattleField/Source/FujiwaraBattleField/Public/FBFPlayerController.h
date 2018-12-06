// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UserWidget.h"
#include "Widget/FloatingWidget.h"
#include "Sound/SoundBase.h"
#include "FBFPlayerController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWidgetStack);
/**
 * 
 */
UCLASS()
class FUJIWARABATTLEFIELD_API AFBFPlayerController : public APlayerController
{
	GENERATED_BODY()

public :

	virtual void BeginPlay();
		
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Widget")
		TArray<TSubclassOf<UUserWidget>> FloatingWidgets;

	UPROPERTY(BlueprintAssignable, Category = "Input")
		FWidgetStack OnWidgetDelegate;
};
