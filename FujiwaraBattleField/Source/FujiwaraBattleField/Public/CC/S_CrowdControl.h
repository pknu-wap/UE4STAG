// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "S_CrowdControl.generated.h"

UENUM(BlueprintType)
enum CCType
{
	Basic UMETA(DisplayName = "Basic"),
	Slow UMETA(DisplayName = "Slow"),
	SkillBlocked UMETA(DisplayName = "SkillBlocked"),
	MoveBlocked UMETA(DisplayName = "MoveBlocked"),
};

USTRUCT(BlueprintType)
struct FCrowdControl
{
	GENERATED_BODY()
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "CC")
		TArray<TEnumAsByte<CCType>> CC;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "CC")
		float Dulation;
};
