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
	

private:
	UPROPERTY(EditAnywhere, Category = "CurrentCash")
	float CurrentCashVal;

	UPROPERTY(EditAnywhere, Category = "CurrentPeople")
	float CurrentWorkforceVal;

	UPROPERTY(EditAnywhere, Category = "CurrentPower")
	float CurrentPowerVal;

	UPROPERTY(EditAnywhere, Category = "CurrentMoney")
	float CurrentMaterialVal;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
