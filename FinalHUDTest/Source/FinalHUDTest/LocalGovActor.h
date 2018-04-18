// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LocalGovActor.generated.h"

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
	
	int peopleActions;
	int energyActions;
	int foodWaterActions;
	int environmentActions;
	int infrastructureActions;

	bool disasterAssessed;
	bool soeDeclared;
	bool hospitalRepaired;

	bool generatorsSetUp;
	bool stateAssistanceRequested;
	bool contractorsHired;
	
	bool ngosCoordinated;
	bool plantFixed;

	bool enviroReady;

	bool roadContractorsHired;
	bool aidRequested;
};
