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
	peopleActions = 0;
	energyActions = 0;
	foodWaterActions = 0;
	environmentActions = 0;
	infrastructureActions = 0;

	disasterAssessed         =false;
	soeDeclared              =false;
	hospitalRepaired         =false;
							 
	generatorsSetUp          =false;
	stateAssistanceRequested =false;
	contractorsHired         =false;
							 
	ngosCoordinated          =false;
	plantFixed               =false;
							 
	enviroReady              =false;
							 
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

}

void ALocalGovActor::localGovSendBlockingInfo(TSubclassOf<class AHUDController> PlayerController)
{
}

void ALocalGovActor::localGovSendTagUpdate(TSubclassOf<class AHUDController> PlayerController)
{
}

