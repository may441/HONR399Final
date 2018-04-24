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
		InfCheck.Init(0, 8);

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

		if (category == 1) {
			PeopleStuff(ID, enable);
		}
		if (category == 2) {
			EnergyStuff(ID, enable);
		}
		if (category == 3) {
			FWStuff(ID, enable);
		}
		if (category == 4) {
			EnvStuff(ID, enable);
		}
		if (category == 5) {
			InfStuff(ID, enable);
		}
	}
}

void AHeadsUpDisplay::UpdateCurrentVals()
{
	CurrentCashVal = ProjCashVal;
	CurrentMaterialVal = ProjMaterialVal;
	CurrentWorkforceVal = ProjWorkforceVal;
	CurrentPowerVal = ProjPowerVal;
}

void AHeadsUpDisplay::PeopleStuff(int ID, bool enable)
{
	int* pointer = PeopleCheck.GetData();
	pointer[ID] = enable;
	
	if (ID == 0) { // Helicopter Rescue
		ProjWorkforceVal = ProjWorkforceVal - 15;
		ProjMaterialVal = ProjMaterialVal - 10;
	}
	if (ID == 1) { // Ground Rescue
		ProjWorkforceVal = ProjWorkforceVal - 5;
	}
	if (ID == 2) { // Water Rescue
		ProjWorkforceVal = ProjWorkforceVal - 10;
		ProjMaterialVal = ProjMaterialVal - 5;
	}
	if (ID == 3) { // Homeless Shelters
		ProjPowerVal = ProjPowerVal - 10;
		ProjCashVal = ProjCashVal - 10;
	}
	if (ID == 4) { // Family Relocation
		ProjWorkforceVal = ProjWorkforceVal - 5;
	}
	if (ID == 5) { // Identification Services
		ProjWorkforceVal = ProjWorkforceVal - 5;
	}
	if (ID == 6) { // Triage
		ProjPowerVal = ProjPowerVal - 5;
		ProjCashVal = ProjCashVal - 5;
		ProjMaterialVal = ProjMaterialVal - 3;
	}
	if (ID == 7) { // Extended Care
		ProjPowerVal = ProjPowerVal - 15;
		ProjCashVal = ProjCashVal - 7;
	}
	if (ID == 8) { // Enforcement
		ProjCashVal = ProjCashVal - 5;
	}
}

void AHeadsUpDisplay::EnergyStuff(int ID, bool enable)
{
	int* pointer = EnergyCheck.GetData();
	pointer[ID] = enable;

	if (pointer[0] * pointer[1] == 1) { // Both power stuff was completed
		ProjPowerVal = ProjPowerVal + 50;
	}
	if (ID == 1) { // Power Lines
		ProjWorkforceVal = ProjWorkforceVal - 5;
	}
	if (ID == 0) { // Power Plants
		ProjWorkforceVal = ProjWorkforceVal - 10;
	}
}

void AHeadsUpDisplay::FWStuff(int ID, bool enable)
{
	int* pointer = FWCheck.GetData();
	pointer[ID] = enable;

	if (ID == 0) { // Aid via Trucks
		ProjWorkforceVal = ProjWorkforceVal - 5;
	}
	if (ID == 1) { // Sundry Distribution
		ProjWorkforceVal = ProjWorkforceVal - 5;
	}
	if (ID == 2) { // Supermarkets
		ProjPowerVal = ProjPowerVal - 10;
	}
	if (ID == 3) { // Groundwater Treatment
		ProjCashVal = ProjCashVal - 7;
		ProjMaterialVal = ProjMaterialVal - 5;
	}
	if (ID == 4) { // Humanitarian Aid
		ProjWorkforceVal = ProjWorkforceVal - 2;
	}
}

void AHeadsUpDisplay::EnvStuff(int ID, bool enable) {
	int* pointer = EnvCheck.GetData();
	pointer[ID] = enable;

	if (ID == 0) { // Restore Agriculture
		ProjWorkforceVal = ProjWorkforceVal - 7;
	}

	// Toxic Waste affects Tags, not resources
}

void AHeadsUpDisplay::InfStuff(int ID, bool enable)
{
	int* pointer = InfCheck.GetData();
	pointer[ID] = enable;

	if (ID == 0) { // Repair Housing
		ProjWorkforceVal = ProjWorkforceVal - 7;
	}

	// Insurance Claims <-- Needs to be added for Tags, not resources

	if (ID == 2) { // Repair Roads
		ProjWorkforceVal = ProjWorkforceVal - 10;
	}
	if (ID == 3) { // Traffic Enforcement
		ProjWorkforceVal = ProjWorkforceVal - 3;
	}
	if (ID == 4) { // Loans
		ProjCashVal = ProjCashVal - 13;
	}
	if (ID == 5) { // Purchase Material
		ProjCashVal = ProjCashVal - 6;
		ProjMaterialVal = ProjMaterialVal + 12;
	}
	if (ID == 6) { // Recruit Volunteers
		ProjWorkforceVal = ProjWorkforceVal + 10;
	}
	if (ID == 7) { // Internet
		ProjWorkforceVal = ProjWorkforceVal - 3;
		ProjPowerVal = ProjPowerVal - 5;
	}
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

