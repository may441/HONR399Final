// Fill out your copyright notice in the Description page of Project Settings.

#include "HUDController.h"
#include "Blueprint/UserWidget.h"


AHUDController::AHUDController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

/*ALocalGovActor* AHUDController::returnLocalActor()
{
	return govActor;
}*/

void AHUDController::BeginPlay()
{

	if (TopLevel) // Check if the Asset is assigned in the blueprint.
	{
		// Create the widget and store it.
		gameWidget = CreateWidget<UUserWidget>(this, TopLevel);
//		govActor = SpawnActor<ALocalGovActor>();
		// now you can use the widget directly since you have a referance for it.
		// Extra check to  make sure the pointer holds the widget.
		if (gameWidget)
		{
			//let add it to the view port
			gameWidget->AddToViewport();
		}

		//Show the Cursor.
		bShowMouseCursor = true;
	}
}
/*
template< class T >
T* SpawnActor
(
	AActor* Owner = NULL,
	APawn* Instigator = NULL,
	bool bNoCollisionFail = false
)
{
	return (T*)(GetWorld()->SpawnActor(T::StaticClass(), NAME_None, NULL, NULL, NULL, bNoCollisionFail, false, Owner, Instigator));
}*/
