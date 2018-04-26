// Fill out your copyright notice in the Description page of Project Settings.

#include "LocalGovActor.h"



// Sets default values
ALocalGovActor::ALocalGovActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALocalGovActor::BeginPlay()
{
	Super::BeginPlay();
	peopleActions = Placeholder;
	energyActions = Placeholder;
	foodWaterActions = Placeholder;
	environmentActions = Placeholder;
	infrastructureActions = Placeholder;

	int peopleTurnsRemaining = 0;
	int energyTurnsRemaining = 0;
	int foodWaterTurnsRemaining = 0;
	int environmentTurnsRemaining = 0;
	int infrastructureTurnsRemaining = 0;

	disasterAssessed         =false;
	soeDeclared              =false;
	hospitalRepaired         =false;
	ersMobilized			 =false;
							 
	generatorsSetUp          =false;
	stateAssistanceRequested =false;
	contractorsHired         =false;
							 
	ngosCoordinated          =false;
	plantFixed               =false;
							 
	enviroReady              =false;
	farmlandFinished		 =false;
	parksFixed               =false;
							 
	roadContractorsHired     =false;
	aidRequested             =false;

}

// Called every frame
void ALocalGovActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALocalGovActor::updateLocalGovPriorities(AHeadsUpDisplay* PlayerController)
{
	//Initialize RNG
	std::random_device rd;     // only used once to initialise (seed) engine
	std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
	std::uniform_int_distribution<int> uni(0, 2); // guaranteed unbiased
	std::uniform_int_distribution<int> bernoulli(0, 1);
	//AI action priorities
	//People
	if (peopleTurnsRemaining == 0)
	{
		if (!disasterAssessed)
		{
			peopleActions = AssessDisasterExtent;
			disasterAssessed = true;
		}
		else
		{
			if (!soeDeclared)
			{
				peopleActions = DeclareEmergency;
				soeDeclared = true;
			}
			else
			{
				if (!ersMobilized)
				{
					peopleActions = MobilizeERS;
					ersMobilized = true;
				}
				else
				{
					int decision = uni(rng);
					if (decision == 0)
					{
						peopleActions = AssignFirefighters;
					}
					else if (decision == 1)
					{
						peopleActions = RepairHospital;
					}
					else
					{
						peopleActions = TownHallMeeting;
					}
				}
			}
		}
		peopleTurnsRemaining = peopleActions.duration;
	}
	else
	{
		peopleTurnsRemaining--;
	}
	//Energy
	if (energyTurnsRemaining == 0)
	{
		if (!stateAssistanceRequested)
		{
			energyActions = RequestStateAssist;
			stateAssistanceRequested = true;
		}
		else
		{
			if (!generatorsSetUp)
			{
				energyActions = SetUpGenerators;
				generatorsSetUp = true;
			}
			else
			{
				if (energyActions.actionID == CoordinateWPowerCo.actionID)
				{
					energyActions = HiringContractors;
				}
				else if (energyActions.actionID == HiringContractors.actionID)
				{
					energyActions = ContractorRepairing;
				}
				else
				{
					energyActions = CoordinateWPowerCo;
				}
			}
		}
		energyTurnsRemaining = energyActions.duration;
	}
	else
	{
		energyTurnsRemaining--;
	}
	//Food/Water
	if (foodWaterTurnsRemaining == 0)
	{
		if (!ngosCoordinated)
		{
			foodWaterActions = NGOCoordinating;
			ngosCoordinated = true;
		}
		else
		{
			int decision = uni(rng);
			if (decision == 0)
			{
				foodWaterActions = NGOsFoodAssistance;
			}
			else if (decision == 1)
			{
				foodWaterActions = NGOHousing;
			}
			else if (decision == 2)
			{
				foodWaterActions = FixingGroundwater;
			}
			ngosCoordinated = false;
		}
		foodWaterTurnsRemaining = foodWaterActions.duration;
	}
	else
	{
		foodWaterTurnsRemaining--;
	}
		//Environment
	if (environmentTurnsRemaining == 0)
	{
		if (!enviroReady)
		{
			environmentActions = InactiveEnviro;
			enviroReady = true;
		}
		else
		{
			if (!farmlandFinished || !parksFixed)
			{
				int decision = bernoulli(rng);
				if (decision == 1)
				{
					environmentActions = RestoreFarmland;
					farmlandFinished = true;
				}
				else
				{
					environmentActions = CleanLocalParks;
					parksFixed = true;
				}
			}
			else
			{
				if (farmlandFinished && !parksFixed)
				{
					environmentActions = RestoreFarmland;
					farmlandFinished = true;
				}
				else if (!parksFixed && farmlandFinished)
				{
					environmentActions = RestoreFarmland;
					parksFixed = true;
				}
				else
				{
					environmentActions = FileInsuranceClaim;
				}
			}
		}
		environmentTurnsRemaining = environmentActions.duration;
	}
	else
	{
		environmentTurnsRemaining--;
	}



	//Infrastructure
	if (infrastructureTurnsRemaining == 0)
	{
		if (!aidRequested)
		{
			infrastructureActions = RequestMutualAid;
			aidRequested = true;
		}
		else
		{
			if (!contractorsHired)
			{
				infrastructureActions = HiringRoadContractor;
				contractorsHired = true;
			}
			else
			{
				int decision = uni(rng);
				if (decision == 1)
				{
					infrastructureActions = RepairLocalRoads;
				}
				else if (decision == 2)
				{
					infrastructureActions = RepairLocalBusiness;
				}
				else
				{
					infrastructureActions = IncentivizeBusiness;
				}
			}
		}
		infrastructureTurnsRemaining = infrastructureActions.duration;
	}
	else
	{
		infrastructureTurnsRemaining--;
	}
}

void ALocalGovActor::localGovSendActionInfo(int* matchVal, char type)
{
	if (peopleActions.workforceAffected == type || energyActions.workforceAffected == type ||
		foodWaterActions.workforceAffected == type || environmentActions.workforceAffected == type
		|| infrastructureActions.workforceAffected == type)
	{
		matchVal[0] = 1;
	}
	else
	{
		matchVal[0] = 0;
	}

	if (peopleActions.energyAffected == type || energyActions.energyAffected == type ||
		foodWaterActions.energyAffected == type || environmentActions.energyAffected == type
		|| infrastructureActions.energyAffected == type)
	{
		matchVal[1] = 1;
	}
	else
	{
		matchVal[1] = 0;
	}

	if (peopleActions.moneyAffected == type || energyActions.moneyAffected == type ||
		foodWaterActions.moneyAffected == type || environmentActions.moneyAffected == type
		|| infrastructureActions.moneyAffected == type)
	{
		matchVal[2] = 1;
	}
	else
	{
		matchVal[2] = 0;
	}

	if (peopleActions.materialAffected == type || energyActions.materialAffected == type ||
		foodWaterActions.materialAffected == type || environmentActions.materialAffected == type
		|| infrastructureActions.materialAffected == type)
	{
		matchVal[3] = 1;
	}
	else
	{
		matchVal[3] = 0;
	}
}

TArray<float> ALocalGovActor::localGovSendBlockingInfo()
{
	TArray<float> blockingVals;
	blockingVals.Init(0, 4);

	int lowBlocking[4];
	int highBlocking[4];
	localGovSendActionInfo(lowBlocking, 'x');
	localGovSendActionInfo(highBlocking, 'X');
	blockingVals[0] = float(lowBlocking[0] * 0.025 + highBlocking[0] * 0.05);
	blockingVals[1] = lowBlocking[1] * 0.025 + highBlocking[1] * 0.05;
	blockingVals[2] = lowBlocking[2] * 0.025 + highBlocking[2] * 0.05;
	blockingVals[3] = lowBlocking[3] * 0.025 + highBlocking[3] * 0.05;

	return blockingVals;
}

TArray<float> ALocalGovActor::localGovSendPenaltyInfo()
{
	TArray<float> gainPenaltyVals;
	gainPenaltyVals.Init(0, 4);

	int lowPenalty[4];
	int highPenalty[4];
	localGovSendActionInfo(lowPenalty, 'o');
	localGovSendActionInfo(highPenalty, 'O');
	gainPenaltyVals[0] = lowPenalty[0] * 0.1 + highPenalty[0] * 0.25;
	gainPenaltyVals[1] = lowPenalty[1] * 0.1 + highPenalty[1] * 0.25;
	gainPenaltyVals[2] = lowPenalty[2] * 0.1 + highPenalty[2] * 0.25;
	gainPenaltyVals[3] = lowPenalty[3] * 0.1 + highPenalty[3] * 0.25;

	return gainPenaltyVals;
}

TArray<float> ALocalGovActor::localGovSendTagUpdate()
{
	TArray<float> BoostVals;
	BoostVals.Init(0, 5);

	BoostVals[0] = peopleActions.moraleAffected + energyActions.moraleAffected +
		foodWaterActions.moraleAffected + environmentActions.moraleAffected + infrastructureActions.moraleAffected;
	BoostVals[1] = peopleActions.roadsAffected + energyActions.roadsAffected +
		foodWaterActions.roadsAffected + environmentActions.roadsAffected + infrastructureActions.roadsAffected;
	BoostVals[2] = peopleActions.populationAffected + energyActions.populationAffected +
		foodWaterActions.populationAffected + environmentActions.populationAffected + infrastructureActions.populationAffected;
	BoostVals[3] = peopleActions.economicsAffected + energyActions.economicsAffected +
		foodWaterActions.economicsAffected + environmentActions.economicsAffected + infrastructureActions.economicsAffected;
	BoostVals[4] = peopleActions.healthAffected + energyActions.healthAffected +
		foodWaterActions.healthAffected + environmentActions.healthAffected + infrastructureActions.healthAffected;

	return BoostVals;
}

FString ALocalGovActor::localGovReturnActionName(int category)
{
	TownAction activeAction;
	switch (category) {
		case 1:
			activeAction = peopleActions;
			break;
		case 2:
			activeAction = energyActions;
			break;
		case 3:
			activeAction = foodWaterActions;
			break;
		case 4:
			activeAction = environmentActions;
			break;
		case 5:
			activeAction = infrastructureActions;
			break;
	}

	FString returnVal;

	switch (activeAction.actionID) {
	case 601: returnVal = TEXT("Assess Disaster Extent"); break;
	case 602: returnVal = TEXT("Assign Firefighters to Ground Based Rescue"); break;
	case 603: returnVal = TEXT("Declare State of Emergency"); break;
	case 604: returnVal = TEXT("Mobilizing Local Emergency Response Services"); break;
	case 605: returnVal = TEXT("Repairing Hospital"); break;
	case 606: returnVal = TEXT("Town Hall Meeting"); break;
	case 701: returnVal = TEXT("Setting Up Emergency Generators"); break;
	case 702: returnVal = TEXT("Requesting State Assistance"); break;
	case 703: returnVal = TEXT("Hiring Contractors"); break;
	case 704: returnVal = TEXT("Contractors Repairing"); break;
	case 705: returnVal = TEXT("Coordinating with Power Companies"); break;
	case 801: returnVal = TEXT("NGOs providing assistance"); break;
	case 802: returnVal = TEXT("Coordinating with NGOs"); break;
	case 803: returnVal = TEXT("NGOs providing housing assistance"); break;
	case 804: returnVal = TEXT("Fixing Groundwater Plant"); break;
	case 901: returnVal = TEXT("Restoring Farmland"); break;
	case 902: returnVal = TEXT("Filing Insurance Claims"); break;
	case 903: returnVal = TEXT("Cleaning Local Parks"); break;
	case 904: returnVal = TEXT("No action at this time"); break;
	case 1001: returnVal = TEXT("Incentivizing Business Return"); break;
	case 1002: returnVal = TEXT("Repairing Local Roads"); break;
	case 1003: returnVal = TEXT("Repairing Rural Roads"); break;
	case 1004: returnVal = TEXT("Repairing Local Businesses"); break;
	case 1005: returnVal = TEXT("Hiring Contractors"); break;
	case 1006: returnVal = TEXT("Requesting Mutual Aid"); break;
	case 1007: returnVal = TEXT("Reviewing Contractor Requests"); break;
	case 1008: returnVal = TEXT("Inactive"); break;
	}
		return returnVal;
}

FString ALocalGovActor::localGovReturnBlocking(int category)
{
	TownAction activeAction;
	switch (category) {
	case 1:
		activeAction = peopleActions;
		break;
	case 2:
		activeAction = energyActions;
		break;
	case 3:
		activeAction = foodWaterActions;
		break;
	case 4:
		activeAction = environmentActions;
		break;
	case 5:
		activeAction = infrastructureActions;
		break;
	}
	FString returnVal = TEXT("");

	if (activeAction.workforceAffected == 'x' || activeAction.workforceAffected == 'X')
	{
		returnVal += TEXT("Workforce\n");
	}
	else if (activeAction.moneyAffected == 'x' || activeAction.moneyAffected == 'X')
	{
		returnVal += TEXT("Money\n");
	}
	else if (activeAction.energyAffected == 'x' || activeAction.energyAffected == 'X')
	{
		returnVal += TEXT("Energy\n");
	}
	else if (activeAction.materialAffected == 'x' || activeAction.materialAffected == 'X')
	{
		returnVal += TEXT("Material\n");
	}
	else
	{
		returnVal = TEXT("None");
	}

	return FString();
}

FString ALocalGovActor::localGovReturnGainPenalty(int category)
{
	TownAction activeAction;
	switch (category) {
	case 1:
		activeAction = peopleActions;
		break;
	case 2:
		activeAction = energyActions;
		break;
	case 3:
		activeAction = foodWaterActions;
		break;
	case 4:
		activeAction = environmentActions;
		break;
	case 5:
		activeAction = infrastructureActions;
		break;
	}
	FString returnVal = TEXT("");

	if (activeAction.workforceAffected == 'o' || activeAction.workforceAffected == 'O')
	{
		returnVal += TEXT("Workforce\n");
	}
	else if (activeAction.moneyAffected == 'o' || activeAction.moneyAffected == 'O')
	{
		returnVal += TEXT("Money\n");
	}
	else if (activeAction.energyAffected == 'o' || activeAction.energyAffected == 'O')
	{
		returnVal += TEXT("Energy\n");
	}
	else if (activeAction.materialAffected == 'o' || activeAction.materialAffected == 'O')
	{
		returnVal += TEXT("Material\n");
	}
	else
	{
		returnVal = TEXT("None");
	}

	return FString();
}

void ALocalGovActor::printCurrentActions(AHeadsUpDisplay* PlayerController)
{
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("People: %d Energy: %d Food/Water: %d EnviroAction: %d Infrastructure: %d"), peopleActions.actionID, energyActions.actionID, foodWaterActions.actionID, environmentActions.actionID, infrastructureActions.actionID));
}

bool ALocalGovActor::actionIsActive(int actionID)
{
	bool returnVal = false;
	returnVal = actionID == peopleActions.actionID ? true : returnVal;
	returnVal = actionID == energyActions.actionID ? true : returnVal;
	returnVal = actionID == foodWaterActions.actionID ? true : returnVal;
	returnVal = actionID == environmentActions.actionID ? true : returnVal;
	returnVal = actionID == infrastructureActions.actionID ? true : returnVal;

	return returnVal;
}

