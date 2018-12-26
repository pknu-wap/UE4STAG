// Fill out your copyright notice in the Description page of Project Settings.

#include "FBFPlayerController.h"

void AFBFPlayerController::BeginPlay()
{
	PrimaryActorTick.bCanEverTick = true;
	EnableInput(this);
	//InputComponent->BindKey(EKeys::Escape, IE_Released, this, &Contoller::AReleased);
}
	//// Bind delegates here.
	//serInterface = CreateWidget<FloatingWidget>(this, UMyUserWidget::StaticClass());
	//FInputModeGameAndUI Mode;
	//Mode.SetLockMouseToViewport(true);
	//Mode.SetHideCursorDuringCapture(false);
	//SetInputMode(Mode);
	//UserInterface->AddToViewport(9999); // Z-order, this just makes it render on the very top.

