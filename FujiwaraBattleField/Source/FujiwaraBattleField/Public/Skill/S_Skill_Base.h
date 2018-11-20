// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "S_Skill_Base.generated.h"
/**
 *
 */
UENUM(BlueprintType)
enum SkillType
{
	None UMETA(DisplayName = "None"), 
	Spell UMETA(DisplayName = "Spell"),
	Dash UMETA(DisplayName = "Dash"), 
	CC UMETA(DisplayName = "CC"),
};
USTRUCT(BlueprintType)
struct FSkill_Base
{
	GENERATED_BODY()
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Skill")
		TEnumAsByte<SkillType> type;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Skill")
		UTexture2D* Overrideicon;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Skill")
		float Cooldown;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Skill")
		float CastingTime;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Skill")
		int Cost;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Skill")
		float TickIntervall;

};