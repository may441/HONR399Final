// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LocalGovActor.generated.h"

typedef struct TownAction {
	int actionID;

	char workforceAffected = ' ';
	char energyAffected = ' ';
	char moneyAffected = ' ';
	char materialAffected = ' ';

	char moraleAffected = ' ';
	char roadsAffected = ' ';
	char populationAffected = ' ';
	char economicsAffected = ' ';
	char healthAffected = ' ';
	int duration = 1;

	//Initializer function
	TownAction(int actionID, char workforceAffected, char energyAffected,
		char moneyAffected, char materialAffected, char moraleAffected,
		char roadsAffected, char populationAffected, char economicsAffected,
		char healthAffected, int duration) : actionID(actionID), workforceAffected(workforceAffected),
		moneyAffected(moneyAffected), materialAffected(materialAffected),
		moraleAffected(moraleAffected), roadsAffected(roadsAffected),
		populationAffected(populationAffected), economicsAffected(economicsAffected),
		healthAffected(healthAffected), duration(duration)
	{}

	TownAction()
	{}

};
									  //ID    WF   EN  MON   MAT   MOR  ROAD  POP ECON  H/S  DUR
const TownAction AssessDisasterExtent(  601, ' ', 'X', 'X',  ' ',  ' ',  ' ', ' ', ' ', ' ',  1);
const TownAction AssignFirefighters  (  602, 'x', ' ', ' ',  ' ',  ' ',  ' ', '1', ' ', '1',  1);
const TownAction DeclareEmergency    (  603, ' ', ' ', ' ',  ' ',  'O',  ' ', ' ', '0', ' ',  1);
const TownAction MobilizeERS         (  604, ' ', ' ', ' ',  'x',  ' ',  ' ', '1', ' ', '1',  1);
const TownAction RepairHospital      (  605, ' ', 'O', ' ',  ' ',  '1',  ' ', ' ', ' ', ' ',  1);
const TownAction TownHallMeeting     (  606, ' ', ' ', ' ',  ' ',  '1',  ' ', '^', ' ', ' ',  1);
const TownAction SetUpGenerators     (  701, ' ', 'x', ' ',  ' ',  ' ',  ' ', ' ', '1', '1',  1);
const TownAction RequestStateAssist  (  702, ' ', ' ', 'o',  ' ',  ' ',  ' ', ' ', ' ', ' ',  1);
const TownAction HiringContractors   (  703, ' ', ' ', ' ',  ' ',  ' ',  ' ', ' ', ' ', ' ',  1);
const TownAction ContractorRepairing (  704, ' ', '1', ' ',  ' ',  ' ',  ' ', ' ', ' ', ' ',  1);
const TownAction CoordinateWPowerCo  (  705, ' ', ' ', ' ',  ' ',  ' ',  ' ', ' ', ' ', ' ',  1);
const TownAction NGOsFoodAssistance  (  801, 'x', ' ', 'o',  ' ',  ' ',  ' ', ' ', ' ', '1',  1);
const TownAction NGOCoordinating     (  802, ' ', ' ', ' ',  ' ',  ' ',  ' ', ' ', ' ', ' ',  1);
const TownAction NGOHousing          (  803, ' ', ' ', ' ',  'O',  ' ',  ' ', '1', ' ', ' ',  1);
const TownAction FixingGroundwater   (  804, ' ', ' ', ' ',  'X',  ' ',  ' ', ' ', ' ', '1',  1);
const TownAction RestoreFarmland     (  901, ' ', ' ', 'x',  ' ',  ' ',  ' ', ' ', '1', ' ',  1);
const TownAction FileInsuranceClaim  (  902, ' ', ' ', 'x',  ' ',  ' ',  ' ', ' ', '1', ' ',  1);
const TownAction CleanLocalParks     (  903, ' ', ' ', 'x',  ' ',  ' ',  ' ', ' ', ' ', ' ',  1);
const TownAction InactiveEnviro      (  904, ' ', ' ', ' ',  ' ',  ' ',  ' ', ' ', ' ', ' ',  1);
const TownAction IncentivizeBusiness ( 1001, ' ', ' ', ' ',  ' ',  ' ',  ' ', ' ', '1', ' ',  1);
const TownAction RepairLocalRoads    ( 1002, ' ', ' ', ' ',  'X',  ' ',  '1', ' ', ' ', ' ',  1);
const TownAction RepairRuralRoads    ( 1003, ' ', ' ', ' ',  'x',  ' ',  '1', ' ', ' ', ' ',  1);
const TownAction RepairLocalBusiness ( 1004, ' ', ' ', 'x',  ' ',  ' ',  ' ', ' ', '1', ' ',  1);
const TownAction HiringRoadContractor( 1005, ' ', ' ', 'o',  ' ',  ' ',  ' ', ' ', ' ', ' ',  1);
const TownAction RequestMutualAid    ( 1006, ' ', ' ', ' ',  ' ',  '0',  ' ', ' ', '0', ' ',  1);
const TownAction ReviewRoadContractor( 1007, ' ', ' ', ' ',  ' ',  ' ',  ' ', ' ', '0', ' ',  1);
const TownAction InactiveInfra       ( 1008, ' ', ' ', ' ',  ' ',  ' ',  ' ', ' ', ' ', ' ',  1);
const TownAction Placeholder         ( 9999, ' ', ' ', ' ',  ' ',  ' ',  ' ', ' ', ' ', ' ',  1);



UCLASS()
class FINALHUDTEST_API ALocalGovActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALocalGovActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Local Government Actions")
	void updateLocalGovPriorities(TSubclassOf<class AHUDController> PlayerController);
	
	UFUNCTION(BlueprintCallable, Category = "Local Government Actions")
	void localGovSendBlockingInfo(TSubclassOf<class AHUDController> PlayerController);
	
	UFUNCTION(BlueprintCallable, Category = "Local Government Actions")
	void localGovSendTagUpdate(TSubclassOf<class AHUDController> PlayerController);
	
	TownAction peopleActions;
	TownAction energyActions;
	TownAction foodWaterActions;
	TownAction environmentActions;
	TownAction infrastructureActions;

	bool disasterAssessed;
	bool soeDeclared;
	bool ersMobilized;
	bool hospitalRepaired;

	bool generatorsSetUp;
	bool stateAssistanceRequested;
	bool contractorsHired;
	
	bool ngosCoordinated;
	bool plantFixed;

	bool enviroReady;
	bool farmlandFinished;
	bool parksFixed;

	bool roadContractorsHired;
	bool aidRequested;

};
