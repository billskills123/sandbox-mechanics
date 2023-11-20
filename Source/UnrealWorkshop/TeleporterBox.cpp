// Fill out your copyright notice in the Description page of Project Settings.


#include "TeleporterBox.h"

//Sets up the teleporter box
ATeleporterBox::ATeleporterBox()
{
	OnActorBeginOverlap.AddDynamic(this, &ATeleporterBox::EnterTeleporter);
	OnActorEndOverlap.AddDynamic(this, &ATeleporterBox::ExitTeleporter);
	teleporting = false;
}

void ATeleporterBox::BeginPlay()
{
	Super::BeginPlay();
}

//Called when walking into the teleporter
void ATeleporterBox::EnterTeleporter(class AActor* overlappedActor, class AActor* otherActor) 
{
	if (otherActor && otherActor != this) //Ensures the teleporting is not teleporting to itself
	{
		if (otherTele) //Checks there is another teleporter
		{
			AUnrealWorkshopCharacter* character = Cast<AUnrealWorkshopCharacter>(otherActor); //Checking to see if the overlapped actor is the player character
			if (character && !otherTele->teleporting)
			{
				teleporting = true;
				character->SetActorRotation(otherTele->GetActorRotation()); //Ensures the player is facing forward after teleporting
				character->GetController()->SetControlRotation(character->GetActorRotation()); //Ensures the camera is behind the player
				character->SetActorLocation(otherTele->GetActorLocation()); //Moves the player
			}
		}
	}
}

//Called when exiting the teleporter
void ATeleporterBox::ExitTeleporter(class AActor* overlappedActor, class AActor* otherActor)
{
	if (otherActor && otherActor != this)
	{
		if (otherTele && !teleporting)
		{
			otherTele->teleporting = false; //Disables the teleporting. Allows the player to teleport again and stops any infinite loops
		}
	}
}