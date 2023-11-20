// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Hello.generated.h"

UCLASS()
class UNREALWORKSHOP_API AHello : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHello();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attributes)
	FString input;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};