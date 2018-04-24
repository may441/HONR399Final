// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "LocalGovActor.h"
#include "HeadsUpDisplay.generated.h"

typedef struct PlayerAction {
	int actionID;

	int workforceAffected = 0;
	int energyAffected = 0;
	int moneyAffected = 0;
	int materialAffected = 0;

	char moraleAffected = ' ';
	char roadsAffected = ' ';
	char populationAffected = ' ';
	char economicsAffected = ' ';
	char healthAffected = ' ';

	//Initializer function
	PlayerAction(int actionID, int workforceAffected, int energyAffected,
		int moneyAffected, int materialAffected, char moraleAffected,
		char roadsAffected, char populationAffected, char economicsAffected,
		char healthAffected) : actionID(actionID), workforceAffected(workforceAffected),
		moneyAffected(moneyAffected), materialAffected(materialAffected),
		moraleAffected(moraleAffected), roadsAffected(roadsAffected),
		populationAffected(populationAffected), economicsAffected(economicsAffected),
		healthAffected(healthAffected)
	{}

	PlayerAction()
	{}

};

								          //ID    WF   EN  MON   MAT   MOR  ROAD  POP ECON  H/S
const PlayerAction helicopterBasedRescue  (101,   -5,   0,   0,   -5,   '1', ' ', '1', ' ', '1');
const PlayerAction groundBasedRescue      (102,   -5,   0,   0,   -5,   ' ', '^', '1', ' ', '1');
const PlayerAction waterBasedRescue       (103,   -5,   0,   0,   -5,   ' ', ' ', '1', ' ', '1');
const PlayerAction homelessShelters       (104,    0,  -5,  -5,    0,   '1', ' ', ' ', ' ', '1');
const PlayerAction familyRelocation       (105,   -5,   0,   0,    0,   '1', ' ', ' ', ' ', '1');
const PlayerAction idServices             (106,   -5,   0,   0,    0,   '1', ' ', '^', ' ', '1');
const PlayerAction triageServices         (107,    0,  -5,  -5,   -5,   ' ', ' ', ' ', ' ', '1');
const PlayerAction extendedCareServices   (108,    0,  -5,  -5,    0,   '1', ' ', '_', ' ', '1');
const PlayerAction enforcement            (109,    0,   0,  -5,    0,   '1', ' ', '_', ' ', ' ');
const PlayerAction repairPowerPlant       (201,   -5,   5,   0,   -5,   ' ', ' ', '1', '1', ' ');
const PlayerAction repairPowerLines       (202,   -5,   5,   0,    0,   ' ', '^', '1', '1', ' ');
const PlayerAction repairPriorityOrder    (203,    0,   0,   0,    0,   ' ', ' ', ' ', ' ', ' ');
const PlayerAction aidViaTrucks           (301,   -5,   0,   0,    0,   ' ', '^', ' ', ' ', '1');
const PlayerAction sundryDistribution     (302,   -5,   0,   0,    0,   ' ', '^', ' ', ' ', '1');
const PlayerAction supermarketsEnabled    (303,    0,  -5,   0,    0,   '1', ' ', '1', '1', ' ');
const PlayerAction groundwaterTreatment   (304,    0,   0,  -5,   -5,   ' ', ' ', ' ', '1', '1');
const PlayerAction humanitarianAid        (305,   -5,   0,   0,    0,   '1', '^', '_', ' ', '1');
const PlayerAction restoreAgriculture     (401,   -5,   0,   0,    0,   ' ', ' ', ' ', '1', ' ');
const PlayerAction toxicWasteCleanup      (402,    0,   0,   0,    0,   ' ', ' ', ' ', ' ', '1');
const PlayerAction repairHousing          (501,   -5,   0,   0,    0,   '1', ' ', '1', ' ', ' ');
const PlayerAction insuranceClaims        (502,    0,   0,   0,    0,   ' ', '0', '1', '1', ' ');
const PlayerAction trafficEnforcement     (503,   -5,   0,   0,    0,   ' ', '1', ' ', ' ', ' ');
const PlayerAction loansEnabled           (504,   -5,   0,  -5,    0,   ' ', '1', ' ', '1', ' ');
const PlayerAction purchaseMaterial       (505,    0,   0,  -5,    5,   ' ', ' ', '1', ' ', ' ');
const PlayerAction recruitVolunteers      (506,    5,   0,   0,    0,   '^', ' ', '^', '^', '^');
const PlayerAction internetEnabled        (507,   -5,  -5,   0,    0,   '1', ' ', '1', '1', ' ');

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

	//AI controller
	ALocalGovActor localGovActions;

	UFUNCTION(BlueprintPure, Category = "Game State Access")
	float GetCurrentCashVal();

	UFUNCTION(BlueprintPure, Category = "Game State Access")
	float GetCurrentPowerVal();

	UFUNCTION(BlueprintPure, Category = "Game State Access")
	float GetCurrentWorkforceVal();

	UFUNCTION(BlueprintPure, Category = "Game State Access")
	float GetCurrentMaterialVal();

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

	UPROPERTY(EditAnywhere, Category = "CheckPeople")
		TArray<int32> PeopleCheck;

	UPROPERTY(EditAnywhere, Category = "CheckEnergy")
		TArray<int32> EnergyCheck;

	UPROPERTY(EditAnywhere, Category = "CheckFW")
		TArray<int32> FWCheck;

	UPROPERTY(EditAnywhere, Category = "CheckEnv")
		TArray<int32> EnvCheck;

	UPROPERTY(EditAnywhere, Category = "CheckInf")
		TArray<int32> InfCheck;

	UFUNCTION(BlueprintCallable, Category = "Game State Access")
		void UpdateCurrentVals();

	UFUNCTION(BlueprintCallable, Category = "Game State Access")
		void PeopleStuff(int ID, bool enable);

	UFUNCTION(BlueprintCallable, Category = "Game State Access")
		void EnergyStuff(int ID, bool enable);

	UFUNCTION(BlueprintCallable, Category = "Game State Access")
		void FWStuff(int ID, bool enable);

	UFUNCTION(BlueprintCallable, Category = "Game State Access")
		void EnvStuff(int ID, bool enable);
	
	UFUNCTION(BlueprintCallable, Category = "Game State Access")
		void InfStuff(int ID, bool enable);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
