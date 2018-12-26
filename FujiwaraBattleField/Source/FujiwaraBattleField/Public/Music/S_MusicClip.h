// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundBase.h"
#include "S_MusicClip.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct FMusicClip
{
	GENERATED_BODY()
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Music")
		bool bIsLooped;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Music")
		USoundBase* Music;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Music")
		float ClipDuration;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Music")
		float TransitionTime;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Music")
		TArray<int> ExitDestinations;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Music")
		FString StateInfo;
};