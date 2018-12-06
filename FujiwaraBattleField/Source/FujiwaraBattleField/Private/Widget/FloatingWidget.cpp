// Fill out your copyright notice in the Description page of Project Settings.

#include "FloatingWidget.h"
#include "Sound/SoundBase.h"

//void UFloatingWidget::Floating()
//{
//}
//void UFloatingWidget::Close()
//{
//}
//void UFloatingWidget::Toggle()
//{
//}
FKey UFloatingWidget::GetHotKey()
{
	return HotKey;
}
bool UFloatingWidget::GetControlledByHotKey()
{
	return bControlledByHotKey;
}
USoundBase* UFloatingWidget::GetFloatSound()
{
	return FloatSound;
}
USoundBase* UFloatingWidget::GetCloseSound()
{
	return CloseSound;
}