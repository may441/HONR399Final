// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "LocalGovActor.h"
#include "HeadsUpDisplay.generated.h"

typedef struct PlayerAction {
	int actionID;

	float workforceAffected = 0;
	float energyAffected = 0;
	float moneyAffected = 0;
	float materialAffected = 0;

	float moraleAffected = ' ';
	float roadsAffected = ' ';
	float populationAffected = ' ';
	float economicsAffected = ' ';
	float healthAffected = ' ';

	//Initializer function
	PlayerAction(int actionID, float workforceAffected, float energyAffected,
		float moneyAffected, float materialAffected, float moraleAffected,
		float roadsAffected, float populationAffected, float economicsAffected,
		float healthAffected) : actionID(actionID), workforceAffected(workforceAffected),
		moneyAffected(moneyAffected), materialAffected(materialAffected),
		moraleAffected(moraleAffected), roadsAffected(roadsAffected),
		populationAffected(populationAffected), economicsAffected(economicsAffected),
		healthAffected(healthAffected)
	{}

	PlayerAction()
	{}

};

								          //ID    WF   EN  MON   MAT       MOR        ROAD       POP    ECON       H/S
const PlayerAction helicopterBasedRescue  (101,   -5,   0,   0,   -5,        5,          0,        5,      0,        5);
const PlayerAction groundBasedRescue      (102,   -5,   0,   0,   -5,        0,   INFINITY,        5,      0,        5);
const PlayerAction waterBasedRescue       (103,   -5,   0,   0,   -5,        0,          0,        5,      0,        5);
const PlayerAction homelessShelters       (104,    0,  -5,  -5,    0,        5,          0,        0,      0,        5);
const PlayerAction familyRelocation       (105,   -5,   0,   0,    0,        5,          0,        0,      0,        5);
const PlayerAction idServices             (106,   -5,   0,   0,    0,        5,          0, INFINITY,      0,        5);
const PlayerAction triageServices         (107,    0,  -5,  -5,   -5,        0,          0,        0,      0,        5);
const PlayerAction extendedCareServices   (108,    0,  -5,  -5,    0,        5,          0,-INFINITY,      0,        5);
const PlayerAction enforcement            (109,    0,   0,  -5,    0,        5,          0,-INFINITY,      0,        0);
const PlayerAction repairPowerPlant       (201,   -5,   5,   0,   -5,        0,          0,        5,      5,        0);
const PlayerAction repairPowerLines       (202,   -5,   5,   0,    0,        0,   INFINITY,        5,      5,        0);
const PlayerAction repairPriorityOrder    (203,    0,   0,   0,    0,        0,          0,        0,      0,        0);
const PlayerAction aidViaTrucks           (301,   -5,   0,   0,    0,        0,   INFINITY,        0,      0,        5);
const PlayerAction sundryDistribution     (302,   -5,   0,   0,    0,        0,   INFINITY,        0,      0,        5);
const PlayerAction supermarketsEnabled    (303,    0,  -5,   0,    0,        5,          0,        5,      5,        0);
const PlayerAction groundwaterTreatment   (304,    0,   0,  -5,   -5,        0,          0,        0,      5,        5);
const PlayerAction humanitarianAid        (305,   -5,   0,   0,    0,        5,   INFINITY,-INFINITY,      0,        5);
const PlayerAction restoreAgriculture     (401,   -5,   0,   0,    0,        0,          0,        0,      5,        0);
const PlayerAction toxicWasteCleanup      (402,    0,   0,   0,    0,        0,          0,        0,      0,        5);
const PlayerAction repairHousing          (501,   -5,   0,   0,    0,        5,          0,        5,      0,        0);
const PlayerAction insuranceClaims        (502,    0,   0,   0,    0,        0,         -5,        5,      5,        0);
const PlayerAction trafficEnforcement     (503,   -5,   0,   0,    0,        0,          5,        0,      0,        0);
const PlayerAction loansEnabled           (504,   -5,   0,  -5,    0,        0,          5,        0,      5,        0);
const PlayerAction purchaseMaterial       (505,    0,   0,  -5,    5,        0,          0,        5,      0,        0);
const PlayerAction recruitVolunteers      (506,    5,   0,   0,    0, INFINITY,          0,INFINITY,INFINITY, INFINITY);
const PlayerAction internetEnabled        (507,   -5,  -5,   0,    0,        5,          0,        5,      5,        0);

const PlayerAction peopleActions[9] = {
	helicopterBasedRescue,
	groundBasedRescue,
	waterBasedRescue,
	homelessShelters,
	familyRelocation,
	idServices,
	triageServices,
	extendedCareServices,
	enforcement
};

const PlayerAction energyActions[3] = {
	repairPowerPlant,
	repairPowerLines,
	repairPriorityOrder
};

const PlayerAction foodWaterActions[5] = {
	aidViaTrucks,
	sundryDistribution,
	supermarketsEnabled,
	groundwaterTreatment,
	humanitarianAid
};

const PlayerAction enviroActions[2] = {
	restoreAgriculture,
	toxicWasteCleanup
};

const PlayerAction infrastructureActions[7] = {
	repairHousing,
	insuranceClaims,
	trafficEnforcement,
	loansEnabled,
	purchaseMaterial,
	recruitVolunteers,
	internetEnabled
};


UCLASS()
class FINALHUDTEST_API AHeadsUpDisplay : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AHeadsUpDisplay();

	UFUNCTION(BlueprintPure, Category = "Game State Access")
	float GetCurrentCashVal();

	UFUNCTION(BlueprintPure, Category = "Game State Access")
	float GetCurrentPowerVal();

	UFUNCTION(BlueprintPure, Category = "Game State Access")
	float GetCurrentWorkforceVal();

	UFUNCTION(BlueprintPure, Category = "Game State Access")
	float GetCurrentMaterialVal();

	UFUNCTION(BlueprintPure, Category = "Game State Access")
	float GetProjectedCashVal();

	UFUNCTION(BlueprintPure, Category = "Game State Access")
	float GetProjectedPowerVal();

	UFUNCTION(BlueprintPure, Category = "Game State Access")
	float GetProjectedWorkforceVal();

	UFUNCTION(BlueprintPure, Category = "Game State Access")
	float GetProjectedMaterialVal();

	UFUNCTION(BlueprintPure, Category = "Game State Access")
		float GetMoraleVal();
	UFUNCTION(BlueprintPure, Category = "Game State Access")
		float GetEconomyVal();
	UFUNCTION(BlueprintPure, Category = "Game State Access")
		float GetRoadsVal();
	UFUNCTION(BlueprintPure, Category = "Game State Access")
		float GetPopulationVal();
	UFUNCTION(BlueprintPure, Category = "Game State Access")
		float GetHealthSafetyVal();


	UFUNCTION(BlueprintCallable, Category = "Game State Access")
	void SetTaskActivity(int activityID, bool enable);

	UFUNCTION(BlueprintPure, Category = "Game State Access")
	bool GetTaskIDStatus(int taskID);
	

public:

	UPROPERTY(EditAnywhere, Category = "CurrentCash")
		float CurrentCashVal;
	UPROPERTY(EditAnywhere, Category = "CurrentPeople")
		float CurrentWorkforceVal;
	UPROPERTY(EditAnywhere, Category = "CurrentPower")
		float CurrentPowerVal;
	UPROPERTY(EditAnywhere, Category = "CurrentMoney")
		float CurrentMaterialVal;

	UPROPERTY(EditAnywhere, Category = "CurrentCash")
		float ProjCashVal;
	UPROPERTY(EditAnywhere, Category = "CurrentPeople")
		float ProjWorkforceVal;
	UPROPERTY(EditAnywhere, Category = "CurrentPower")
		float ProjPowerVal;
	UPROPERTY(EditAnywhere, Category = "CurrentMoney")
		float ProjMaterialVal;

	UPROPERTY(EditAnywhere, Category = "CurrentCash")
		float CashEffectivenessPenalty;
	UPROPERTY(EditAnywhere, Category = "CurrentPeople")
		float WorkforceEffectivenessPenalty;
	UPROPERTY(EditAnywhere, Category = "CurrentPower")
		float PowerEffectivenessPenalty;
	UPROPERTY(EditAnywhere, Category = "CurrentMoney")
		float MaterialEffectivenessPenalty;

	UPROPERTY(EditAnywhere, Category = "CurrentCash")
		float CashGainPenalty;
	UPROPERTY(EditAnywhere, Category = "CurrentPeople")
		float WorkforceGainPenalty;
	UPROPERTY(EditAnywhere, Category = "CurrentPower")
		float PowerGainPenalty;
	UPROPERTY(EditAnywhere, Category = "CurrentMoney")
		float MaterialGainPenalty;


	UPROPERTY(EditAnywhere, Category = "TagVal")
		float ProjMoraleVal;
	UPROPERTY(EditAnywhere, Category = "TagVal")
		float ProjRoadVal;
	UPROPERTY(EditAnywhere, Category = "TagVal")
		float ProjPopulationVal;
	UPROPERTY(EditAnywhere, Category = "TagVal")
		float ProjEconomyVal;
	UPROPERTY(EditAnywhere, Category = "TagVal")
		float ProjHealthSafetyVal;

	UPROPERTY(EditAnywhere, Category = "TagVal")
		float CurrentMoraleVal;
	UPROPERTY(EditAnywhere, Category = "TagVal")
		float CurrentRoadVal;
	UPROPERTY(EditAnywhere, Category = "TagVal")
		float CurrentPopulationVal;
	UPROPERTY(EditAnywhere, Category = "TagVal")
		float CurrentEconomyVal;
	UPROPERTY(EditAnywhere, Category = "TagVal")
		float CurrentHealthSafetyVal;


	UPROPERTY(EditAnywhere, Category = "CheckPeople")
		TArray<bool> PeopleCheck;

	UPROPERTY(EditAnywhere, Category = "CheckEnergy")
		TArray<bool> EnergyCheck;

	UPROPERTY(EditAnywhere, Category = "CheckFW")
		TArray<bool> FWCheck;

	UPROPERTY(EditAnywhere, Category = "CheckEnv")
		TArray<bool> EnvCheck;

	UPROPERTY(EditAnywhere, Category = "CheckInf")
		TArray<bool> InfCheck;

	UFUNCTION(BlueprintCallable, Category = "Game State Access")
		void UpdateCurrentVals(ALocalGovActor* localGovActions);

	UFUNCTION(BlueprintCallable, Category = "Game State Access")
		void UpdateProjectedValues();
	
		void AddProjectedValues(PlayerAction actionRef);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
