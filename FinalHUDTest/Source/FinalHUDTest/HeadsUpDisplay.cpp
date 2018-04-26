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

		CurrentMoraleVal = 0.0f;
		CurrentRoadVal = 0.0f;
		CurrentEconomyVal = 0.0f;
		CurrentHealthSafetyVal = 0.0f;
		CurrentPopulationVal = 0.0f;

		// Arrays to track what actions have been taken
		PeopleCheck.Init(false, 9);
		EnergyCheck.Init(false, 3);
		FWCheck.Init(false, 5);
		EnvCheck.Init(false, 2);
		InfCheck.Init(false, 8);

		// Projected Resource Values
		ProjCashVal = 0;
		ProjWorkforceVal = 0;
		ProjPowerVal = 0;
		ProjMaterialVal = 0;

		ProjMoraleVal = 0;
		ProjRoadVal = 0;
		ProjEconomyVal = 0;
		ProjHealthSafetyVal = 0;
		ProjPopulationVal = 0;

		
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

float AHeadsUpDisplay::GetProjectedCashVal()
{
	return ProjCashVal;
}

float AHeadsUpDisplay::GetProjectedPowerVal()
{
	return ProjPowerVal;
}

float AHeadsUpDisplay::GetProjectedWorkforceVal()
{
	return ProjWorkforceVal;
}

float AHeadsUpDisplay::GetProjectedMaterialVal()
{
	return ProjMaterialVal;
}

float AHeadsUpDisplay::GetMoraleVal()
{
	return CurrentMoraleVal;
}

float AHeadsUpDisplay::GetEconomyVal()
{
	return CurrentEconomyVal;
}

float AHeadsUpDisplay::GetRoadsVal()
{
	return CurrentRoadVal;
}

float AHeadsUpDisplay::GetPopulationVal()
{
	return CurrentPopulationVal;
}

float AHeadsUpDisplay::GetHealthSafetyVal()
{
	return CurrentHealthSafetyVal;
}


void AHeadsUpDisplay::SetTaskActivity(int activityID, bool enable)
{
		int category = activityID / 100;
		int ID = activityID % 100 - 1;

		//Add penalty if we checked, subtract if we didn't

		if (category == 1) {
			PeopleCheck[ID] = enable;
		}
		if (category == 2) {
			EnergyCheck[ID] = enable;
		}
		if (category == 3) {
			FWCheck[ID] =  enable;
		}
		if (category == 4) {
			EnvCheck[ID] = enable;
		}
		if (category == 5) {
			InfCheck[ID] = enable;
		}
	
		UpdateProjectedValues();
}

void AHeadsUpDisplay::UpdateCurrentVals(ALocalGovActor* localGovActions)
{
	TArray<float> blockingVals;
	TArray<float> gainPenaltyVals;
	TArray<float> tagUpdateVals;
	blockingVals.Init(0, 4);
	gainPenaltyVals.Init(0, 4);
	tagUpdateVals.Init(0, 6);

	blockingVals = localGovActions->localGovSendBlockingInfo();
	gainPenaltyVals = localGovActions->localGovSendPenaltyInfo();
	tagUpdateVals = localGovActions->localGovSendTagUpdate();

	WorkforceEffectivenessPenalty = blockingVals[0];
	PowerEffectivenessPenalty = blockingVals[1];
	CashEffectivenessPenalty = blockingVals[2];
	MaterialEffectivenessPenalty = blockingVals[3];

	WorkforceGainPenalty = gainPenaltyVals[0];
	PowerGainPenalty = gainPenaltyVals[1];
	CashGainPenalty = gainPenaltyVals[2];
	MaterialGainPenalty = gainPenaltyVals[3];

	//Calculate effectiveness penalty
	float effectivenessPenalty = ProjCashVal * CashEffectivenessPenalty + ProjWorkforceVal * WorkforceEffectivenessPenalty
		+ ProjPowerVal * PowerEffectivenessPenalty + ProjMaterialVal * MaterialEffectivenessPenalty;
	float actionEffectiveness = 1 - effectivenessPenalty;

	//Calculate gain penalties
	if (CashGainPenalty > 0 && ProjCashVal > 0) { ProjCashVal = ProjCashVal * (1 - CashGainPenalty);}
	if (WorkforceGainPenalty > 0 && ProjWorkforceVal > 0) { ProjWorkforceVal = ProjWorkforceVal * (1 - WorkforceGainPenalty); }
	if (PowerGainPenalty > 0 && ProjPowerVal > 0) { ProjPowerVal = ProjPowerVal * (1 - PowerGainPenalty); }
	if (MaterialGainPenalty > 0 && ProjMaterialVal > 0) { ProjMaterialVal = ProjMaterialVal * (1 - MaterialGainPenalty); }

	//Apply changes
	CurrentCashVal = CurrentCashVal + ProjCashVal;
	CurrentMaterialVal = CurrentMaterialVal + ProjMaterialVal;
	CurrentWorkforceVal = CurrentWorkforceVal + ProjWorkforceVal;
	CurrentPowerVal = CurrentPowerVal + ProjPowerVal;

	CurrentMoraleVal = CurrentMoraleVal + ProjMoraleVal * actionEffectiveness + tagUpdateVals[0];
	CurrentRoadVal = CurrentRoadVal + ProjRoadVal * actionEffectiveness + tagUpdateVals[1];
	CurrentPopulationVal = CurrentPopulationVal + ProjPopulationVal * actionEffectiveness + tagUpdateVals[2];
	CurrentEconomyVal = CurrentEconomyVal + ProjEconomyVal * actionEffectiveness + tagUpdateVals[3];
	CurrentHealthSafetyVal = CurrentHealthSafetyVal + ProjHealthSafetyVal * actionEffectiveness + tagUpdateVals[4];

	//Reset Counter Variables
	ProjCashVal = 0;
	ProjMaterialVal = 0;
	ProjWorkforceVal = 0;
	ProjPowerVal = 0;

	ProjMoraleVal = 0;
	ProjRoadVal = 0;
	ProjPopulationVal = 0;
	ProjEconomyVal = 0;
	ProjHealthSafetyVal = 0;

	//Prepare Local Government actions for next action
	localGovActions->updateLocalGovPriorities(this);

	UpdateProjectedValues();
}

void AHeadsUpDisplay::UpdateProjectedValues()
{
	//Reset all values for counting
	ProjCashVal = 0;
	ProjMaterialVal = 0;
	ProjWorkforceVal = 0;
	ProjPowerVal = 0;

	ProjMoraleVal = 0;
	ProjRoadVal = 0;
	ProjPopulationVal = 0;
	ProjEconomyVal = 0;
	ProjHealthSafetyVal = 0;

	PlayerAction actionRef;
	for (int i = 0; i < PeopleCheck.Num(); i++)
	{
		if (PeopleCheck[i])
			AddProjectedValues(peopleActions[i]);
	}

	for (int i = 0; i < EnergyCheck.Num(); i++)
	{
		if (EnergyCheck[i])
			AddProjectedValues(energyActions[i]);
	}

	for (int i = 0; i < FWCheck.Num(); i++)
	{
		if (FWCheck[i])
			AddProjectedValues(foodWaterActions[i]);
	}

	for (int i = 0; i < EnvCheck.Num(); i++)
	{
		if (EnvCheck[i])
			AddProjectedValues(enviroActions[i]);
	}

	for (int i = 0; i < InfCheck.Num(); i++)
	{
		if (InfCheck[i])
			AddProjectedValues(infrastructureActions[i]);
	}

}

void AHeadsUpDisplay::AddProjectedValues(PlayerAction actionRef)
{
	float modifier = 1;
	float scalingVal = 1000;

	if (actionRef.moraleAffected == INFINITY) { modifier = modifier * (1 + CurrentMoraleVal / scalingVal); }
	else if (actionRef.moraleAffected == -INFINITY) { modifier = modifier * (1 - CurrentMoraleVal / scalingVal); }
	else { ProjMoraleVal = ProjMoraleVal + actionRef.moraleAffected; }

	if (actionRef.roadsAffected == INFINITY) { modifier = modifier * (1 + CurrentRoadVal / scalingVal); }
	else if (actionRef.roadsAffected == -INFINITY) { modifier = modifier * (1 - CurrentRoadVal / scalingVal); }
	else { ProjRoadVal = ProjRoadVal + actionRef.roadsAffected; }

	if (actionRef.populationAffected == INFINITY) { modifier = modifier * (1 + CurrentPopulationVal / scalingVal); }
	else if (actionRef.populationAffected == -INFINITY) { modifier = modifier * (1 - CurrentPopulationVal / scalingVal); }
	else { ProjPopulationVal = ProjPopulationVal + actionRef.populationAffected; }

	if (actionRef.economicsAffected == INFINITY) { modifier = modifier * (1 + CurrentEconomyVal / scalingVal); }
	else if (actionRef.economicsAffected == -INFINITY) { modifier = modifier * (1 - CurrentEconomyVal / scalingVal); }
	else { ProjEconomyVal = ProjEconomyVal + actionRef.economicsAffected; }

	if (actionRef.healthAffected == INFINITY) { modifier = modifier * (1 + CurrentHealthSafetyVal / scalingVal); }
	else if (actionRef.healthAffected == -INFINITY) { modifier = modifier * (1 - CurrentHealthSafetyVal / scalingVal); }
	else { ProjHealthSafetyVal = ProjHealthSafetyVal + actionRef.healthAffected; }

	ProjWorkforceVal = ProjWorkforceVal + actionRef.workforceAffected * modifier;
	ProjPowerVal = ProjPowerVal + actionRef.energyAffected * modifier;
	ProjCashVal = ProjCashVal + actionRef.moneyAffected * modifier;
	ProjMaterialVal = ProjMaterialVal + actionRef.materialAffected * modifier;
}

bool AHeadsUpDisplay::GetTaskIDStatus(int taskID)
{
	int category = taskID / 100;
	int ID = taskID % 100 - 1;
	int value = 0;
	if (category == 1)
	{
		value = PeopleCheck[ID];
	}
	else if (category == 2)
	{
		value = EnergyCheck[ID];
	}
	else if (category == 3)
	{
		value = FWCheck[ID];
	}
	else if (category == 4)
	{
		value = EnvCheck[ID];
	}
	else if (category == 5)
	{
		value = InfCheck[ID];
	}
	else
	{
		value = 0;
	}

	if (value == 1)
	{
		return true;
	}

	return false;

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

