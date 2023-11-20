// Fill out your copyright notice in the Description page of Project Settings.


#include "Hello.h"

// Sets default values
AHello::AHello()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHello::BeginPlay()
{
	Super::BeginPlay();
	GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Red, input);
}

// Called every frame
void AHello::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}