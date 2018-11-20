// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "S_Skill_Spell.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct FSkill_Spell
{
	GENERATED_BODY()

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Skill")
		FVector InitPos;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Skill")
		float InitScale;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Spell")
		float ScaleOffset;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Skill")
		float InitSpeed;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Spell")
		float SpeedOffset;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Spell")
		float Damage;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Spell")
		float DamageOffset;
	// Pitch
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Skill")
		float YAxisOffset;
	// Yaw
	UPROPERTY(EditAnyWhere	, BlueprintReadWrite, Category = "Skill")
		float ZAxisOffset;

	FSkill_Spell()
	{
		InitScale = 1;
		ScaleOffset = 1;
		InitSpeed = 1000;
		SpeedOffset = 1000;
		Damage = 10;
		DamageOffset = 30;
		YAxisOffset = 1;
		ZAxisOffset = 1;
	};
};