// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LocalGovActor.h"
#include "HUDController.generated.h"

/**
 * 
 */
UCLASS()
class FINALHUDTEST_API AHUDController : public APlayerController
{
private:
	GENERATED_BODY()

	AHUDController();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
		TSubclassOf<class UUserWidget> TopLevel;
	
	// Variable to hold the widget After Creating it.
	UUserWidget* gameWidget;

//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
//		TSubclassOf<class ALocalGovActor> myGovActor;

//	ALocalGovActor *govActor;

//	UFUNCTION(BlueprintCallable, Category = "Local Government Actions")
//	ALocalGovActor* returnLocalActor();
	// Override BeginPlay()
	virtual void BeginPlay() override;
};
