// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <random>
#include "LocalGovActor.generated.h"

typedef struct TownAction {
	int actionID;

	char workforceAffected = ' ';
	char energyAffected = ' ';
	char moneyAffected = ' ';
	char materialAffected = ' ';

	float moraleAffected = 0;
	float roadsAffected = 0;
	float populationAffected = 0;
	float economicsAffected = 0;
	float healthAffected = 0;
	int duration = 1;

	//Initializer function
	TownAction(int actionID, char workforceAffected, char energyAffected,
		char moneyAffected, char materialAffected, float moraleAffected,
		float roadsAffected, float populationAffected, float economicsAffected,
		float healthAffected, int duration) : actionID(actionID), workforceAffected(workforceAffected),
		moneyAffected(moneyAffected), materialAffected(materialAffected),
		moraleAffected(moraleAffected), roadsAffected(roadsAffected),
		populationAffected(populationAffected), economicsAffected(economicsAffected),
		healthAffected(healthAffected), duration(duration)
	{}

	TownAction()
	{}

};
									  //ID    WF   EN  MON   MAT   MOR  ROAD  POP ECON  H/S  DUR
const TownAction AssessDisasterExtent(  601, ' ', 'X', 'X',  ' ',  0,     0,    0,   0,   0,  0);
const TownAction AssignFirefighters  (  602, 'x', ' ', ' ',  ' ',  0,     0,    5,   0,   5,  0);
const TownAction DeclareEmergency    (  603, ' ', ' ', ' ',  ' ', -5,     0,    0,  -5,   0,  0);
const TownAction MobilizeERS         (  604, ' ', ' ', ' ',  'x',  0,     0,    5,   0,   5,  0);
const TownAction RepairHospital      (  605, ' ', 'O', ' ',  ' ',  5,     0,    0,   0,   0,  0);
const TownAction TownHallMeeting     (  606, ' ', ' ', ' ',  ' ',  5,     0,    0,   0,   0,  0);
const TownAction SetUpGenerators     (  701, ' ', 'x', ' ',  ' ',  0,     0,    0,   5,   5,  0);
const TownAction RequestStateAssist  (  702, ' ', ' ', 'o',  ' ',  0,     0,    0,   0,   0,  0);
const TownAction HiringContractors   (  703, ' ', ' ', ' ',  ' ',  0,     0,    0,   0,   0,  0);
const TownAction ContractorRepairing (  704, ' ', '1', ' ',  ' ',  0,     0,    0,   0,   0,  0);
const TownAction CoordinateWPowerCo  (  705, ' ', ' ', ' ',  ' ',  0,     0,    0,   0,   0,  0);
const TownAction NGOsFoodAssistance  (  801, 'x', ' ', 'o',  ' ',  0,     0,    0,   0,   5,  0);
const TownAction NGOCoordinating     (  802, ' ', ' ', ' ',  ' ',  0,     0,    0,   0,   0,  0);
const TownAction NGOHousing          (  803, ' ', ' ', ' ',  'O',  0,     0,    5,   0,   0,  0);
const TownAction FixingGroundwater   (  804, ' ', ' ', ' ',  'X',  0,     0,    0,   0,   5,  0);
const TownAction RestoreFarmland     (  901, ' ', ' ', 'x',  ' ',  0,     0,    0,   5,   0,  0);
const TownAction FileInsuranceClaim  (  902, ' ', ' ', 'x',  ' ',  0,     0,    0,   5,   0,  0);
const TownAction CleanLocalParks     (  903, ' ', ' ', 'x',  ' ',  0,     0,    0,   0,   0,  0);
const TownAction InactiveEnviro      (  904, ' ', ' ', ' ',  ' ',  0,     0,    0,   0,   0,  0);
const TownAction IncentivizeBusiness ( 1001, ' ', ' ', ' ',  ' ',  0,     0,    0,   5,   0,  0);
const TownAction RepairLocalRoads    ( 1002, ' ', ' ', ' ',  'X',  0,     5,    0,   0,   0,  0);
const TownAction RepairRuralRoads    ( 1003, ' ', ' ', ' ',  'x',  0,     5,    0,   0,   0,  0);
const TownAction RepairLocalBusiness ( 1004, ' ', ' ', 'x',  ' ',  0,     0,    0,   5,   0,  0);
const TownAction HiringRoadContractor( 1005, ' ', ' ', 'o',  ' ',  0,     0,    0,   0,   0,  0);
const TownAction RequestMutualAid    ( 1006, ' ', ' ', ' ',  ' ', -5,     0,    0,  -5,   0,  0);
const TownAction ReviewRoadContractor( 1007, ' ', ' ', ' ',  ' ',  0,     0,    0,  -5,   0,  0);
const TownAction InactiveInfra       ( 1008, ' ', ' ', ' ',  ' ',  0,     0,    0,   0,   0,  0);
const TownAction Placeholder         ( 9999, ' ', ' ', ' ',  ' ',  0,     0,    0,   0,   0,  0);



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
	void updateLocalGovPriorities(AHeadsUpDisplay* PlayerController);
	
	void localGovSendActionInfo(int* matchVal, char type);

	TArray<float> localGovSendBlockingInfo();

	TArray<float> localGovSendPenaltyInfo();

	UFUNCTION(BlueprintCallable, Category = "Local Government Actions")
	TArray<float> localGovSendTagUpdate();

	UFUNCTION(BlueprintCallable, Category = "Local Government Actions")
	FString localGovReturnActionName(int category);

	UFUNCTION(BlueprintCallable, Category = "Local Government Actions")
	FString localGovReturnBlocking(int category);

	UFUNCTION(BlueprintCallable, Category = "Local Government Actions")
	FString localGovReturnGainPenalty(int category);

	UFUNCTION(BlueprintCallable, Category = "Local Government Actions")
	void printCurrentActions(AHeadsUpDisplay* PlayerController);

	UFUNCTION(BlueprintCallable, Category = "Local Government Actions")
	bool actionIsActive(int actionID);



	TownAction peopleActions;
	TownAction energyActions;
	TownAction foodWaterActions;
	TownAction environmentActions;
	TownAction infrastructureActions;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	int peopleTurnsRemaining;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	int energyTurnsRemaining;
	
	UPROPERTY(EditAnywhere, Category = "TownDebug")
	int foodWaterTurnsRemaining;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	int environmentTurnsRemaining;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	int infrastructureTurnsRemaining;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	bool disasterAssessed;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	bool soeDeclared;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	bool ersMobilized;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	bool hospitalRepaired;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	bool generatorsSetUp;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	bool stateAssistanceRequested;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	bool contractorsHired;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	bool ngosCoordinated;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	bool plantFixed;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	bool enviroReady;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	bool farmlandFinished;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	bool parksFixed;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	bool roadContractorsHired;

	UPROPERTY(EditAnywhere, Category = "TownDebug")
	bool aidRequested;

};
