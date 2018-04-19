// Fill out your copyright notice in the Description page of Project Settings.

#include "LocalGovActor.h"
#include <random>


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

void ALocalGovActor::updateLocalGovPriorities(TSubclassOf<class AHUDController> PlayerController)
{
	//Initialize RNG
	std::random_device rd;     // only used once to initialise (seed) engine
	std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
	std::uniform_int_distribution<int> uni(0, 2); // guaranteed unbiased
	std::uniform_int_distribution<int> bernoulli(0, 1);
	//AI action priorities
	//People
	if (!disasterAssessed)
	{
		peopleActions = AssessDisasterExtent;
	}
	else
	{
		if (!soeDeclared)
		{
			peopleActions = DeclareEmergency;
		}
		else
		{
			if (!ersMobilized)
			{
				peopleActions = MobilizeERS;
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
	//Energy
	if (!stateAssistanceRequested)
	{
		energyActions = RequestStateAssist;
	}
	else
	{
		if (!generatorsSetUp)
		{
			energyActions = SetUpGenerators;
		}
		else
		{
			if (energyActions.actionID == CoordinateWPowerCo.actionID)
			{
				energyActions = HiringContractors;
			}
			else if(energyActions.actionID == HiringContractors.actionID)
			{
				energyActions = ContractorRepairing;
			}
			else
			{
				energyActions = CoordinateWPowerCo;
			}
		}
	}
	//Food/Water

	if (!ngosCoordinated)
	{
		foodWaterActions = NGOCoordinating;
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
	//Environment
	if (!enviroReady)
	{
		environmentActions = InactiveEnviro;
	}
	else
	{
		if(!farmlandFinished || !parksFixed)
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
	//Infrastructure
	if (!aidRequested)
	{
		infrastructureActions = RequestMutualAid;
	}
	else
	{
		if (!contractorsHired)
		{
			infrastructureActions = HiringRoadContractor;
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
}

void ALocalGovActor::localGovSendBlockingInfo(TSubclassOf<class AHUDController> PlayerController)
{
}

void ALocalGovActor::localGovSendTagUpdate(TSubclassOf<class AHUDController> PlayerController)
{
}

