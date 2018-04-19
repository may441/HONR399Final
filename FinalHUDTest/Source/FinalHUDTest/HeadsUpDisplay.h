// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "HeadsUpDisplay.generated.h"

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

	UFUNCTION(BlueprintCallable, Category = "Game State Access")
	void SetTaskActivity(int activityID, bool enable);
	

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
