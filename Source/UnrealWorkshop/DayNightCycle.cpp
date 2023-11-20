// Fill out your copyright notice in the Description page of Project Settings.


#include "DayNightCycle.h"

// Sets default values
ADayNightCycle::ADayNightCycle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADayNightCycle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADayNightCycle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (lightSource) //Ensures there is a light source
	{
		lightSource->AddActorLocalRotation(FRotator((DeltaTime * turnRate), 0, 0)); //Makes the light source rotate according to the turn rate
	}

	if (sun)
	{
		FOutputDeviceNull ar;
		sun->CallFunctionByNameWithArguments(TEXT("UpdateSunDirection"), ar, NULL, true); //Using the built in sun direction function on the sky sphere to change where the sun is on the skybox
	}
}