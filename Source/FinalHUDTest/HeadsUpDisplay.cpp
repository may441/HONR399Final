// Fill out your copyright notice in the Description page of Project Settings.

#include "HeadsUpDisplay.h"
#include "Blueprint/UserWidget.h"

// Sets default values
AHeadsUpDisplay::AHeadsUpDisplay()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
		CurrentCashVal = 100.0f;
		CurrentWorkforceVal = 100.0f;
		CurrentPowerVal = 100.0f;
		CurrentMaterialVal = 100.0f;

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
	//Activity Action Code Goes Here
	CurrentPowerVal = CurrentPowerVal - 5;
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

