// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "S_Skill_Dash.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct FSkill_Dash
{
	GENERATED_BODY()

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Dash")
		float DashPower;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Dash")
		float BreakTime;
};