// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "UnrealWorkshopCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "TeleporterBox.generated.h"

/**
 * 
 */
UCLASS()
class UNREALWORKSHOP_API ATeleporterBox : public ATriggerBox
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	ATeleporterBox();

	UFUNCTION()
		void EnterTeleporter(class AActor* overlappedActor, class AActor* otherActor); //Enter teleporter function
	
	UFUNCTION()
		void ExitTeleporter(class AActor* overlappedActor, class AActor* otherActor); //Exit teleporter function

	UPROPERTY(EditAnywhere, Category = "Teleporter")
		ATeleporterBox* otherTele; //Variable for the other teleporter. Destination teleporter

	UPROPERTY()
		bool teleporting; //Boolean check to see if the player is currently teleporting
};