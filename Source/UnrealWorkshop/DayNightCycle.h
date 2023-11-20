// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DirectionalLight.h"
#include "Misc/OutputDeviceNull.h"
#include "GameFramework/Actor.h"
#include "DayNightCycle.generated.h"

UCLASS()
class UNREALWORKSHOP_API ADayNightCycle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADayNightCycle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Sky")
		AActor* sun; //Variable for the sky sphere

	UPROPERTY(EditAnywhere, Category = "Sky")
		ADirectionalLight* lightSource; //Variable for the light

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sky")
		float turnRate; //Speed of the day night cycle

};
