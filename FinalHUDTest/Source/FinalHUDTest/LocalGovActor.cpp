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
		matchVal[3] = 0.025;
	}
	else
	{
		matchVal[3] = 0;
	}
}

void ALocalGovActor::localGovSendBlockingInfo(TArray<float> blockingVals, TArray<float> gainPenaltyVals)
{
	int lowBlocking[4];
	int highBlocking[4];
	localGovSendActionInfo(lowBlocking, 'x');
	localGovSendActionInfo(highBlocking, 'X');
	blockingVals[0] = lowBlocking[0] * 0.025 + highBlocking[0] * 0.05;
	blockingVals[1] = lowBlocking[1] * 0.025 + highBlocking[1] * 0.05;
	blockingVals[2] = lowBlocking[2] * 0.025 + highBlocking[2] * 0.05;
	blockingVals[3] = lowBlocking[3] * 0.025 + highBlocking[3] * 0.05;

	int lowPenalty[4];
	int highPenalty[4];
	localGovSendActionInfo(lowPenalty, 'o');
	localGovSendActionInfo(highPenalty, 'O');
	gainPenaltyVals[0] = lowPenalty[0] * 0.1 + highPenalty[0] * 0.25;
	gainPenaltyVals[1] = lowPenalty[1] * 0.1 + highPenalty[1] * 0.25;
	gainPenaltyVals[2] = lowPenalty[2] * 0.1 + highPenalty[2] * 0.25;
	gainPenaltyVals[3] = lowPenalty[3] * 0.1 + highPenalty[3] * 0.25;
}

void ALocalGovActor::localGovSendTagUpdate(TArray<float> BoostVals)
{
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

}

void ALocalGovActor::printCurrentActions(AHeadsUpDisplay* PlayerController)
{
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("People: %d Energy: %d Food/Water: %d EnviroAction: %d Infrastructure: %d"), peopleActions.actionID, energyActions.actionID, foodWaterActions.actionID, environmentActions.actionID, infrastructureActions.actionID));
}

