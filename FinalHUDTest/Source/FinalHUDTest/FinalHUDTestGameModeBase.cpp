// Fill out your copyright notice in the Description page of Project Settings.

#include "FinalHUDTestGameModeBase.h"
#include "HUDController.h"
#include "HeadsUpDisplay.h"

AFinalHUDTestGameModeBase::AFinalHUDTestGameModeBase()
{ 
	DefaultPawnClass = AHeadsUpDisplay::StaticClass();
	PlayerControllerClass = AHUDController::StaticClass();
}