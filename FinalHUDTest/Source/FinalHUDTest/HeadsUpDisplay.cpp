// Fill out your copyright notice in the Description page of Project Settings.

#include "HeadsUpDisplay.h"
#include "Blueprint/UserWidget.h"

// Sets default values
AHeadsUpDisplay::AHeadsUpDisplay()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
		
		// Current Resource Values
		CurrentCashVal = 100.0f;
		CurrentWorkforceVal = 100.0f;
		CurrentPowerVal = 100.0f;
		CurrentMaterialVal = 100.0f;

		// Arrays to track what actions have been taken
		PeopleCheck.Init(0, 9);
		EnergyCheck.Init(0, 3);
		FWCheck.Init(0, 5);
		EnvCheck.Init(0, 2);
		InfCheck.Init(0, 9);

		// Projected Resource Values
		ProjCashVal = CurrentCashVal;
		ProjWorkforceVal = CurrentWorkforceVal;
		ProjPowerVal = CurrentPowerVal;
		ProjMaterialVal = CurrentMaterialVal;
}

float AHeadsUpDisplay::GetCurrentCashVal()
{
	return CurrentCashVal;
}

float AHeadsUpDisplay::GetCurrentPowerVal()
{
	return CurrentPowerVal;
}

float AHeadsUpDisplay::GetCurrentWorkforceVal()
{
	return CurrentWorkforceVal;
}

float AHeadsUpDisplay::GetCurrentMaterialVal()
{
	return CurrentMaterialVal;
}

void AHeadsUpDisplay::SetTaskActivity(int activityID, bool enable)
{
	if (activityID == 1) {
		UpdateCurrentVals();
	}
	else {
		int category = activityID / 100;
		int ID = activityID % 100 - 1;
	}
}

void AHeadsUpDisplay::UpdateCurrentVals()
{
	CurrentCashVal = ProjCashVal;
	CurrentMaterialVal = ProjMaterialVal;
	CurrentWorkforceVal = ProjWorkforceVal;
	CurrentPowerVal = ProjPowerVal;
}

// Called when the game starts or when spawned
void AHeadsUpDisplay::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AHeadsUpDisplay::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHeadsUpDisplay::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

