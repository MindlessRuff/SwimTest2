// Fill out your copyright notice in the Description page of Project Settings.


#include "Hatch.h"

// Sets default values
AHatch::AHatch()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHatch::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHatch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHatch::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AHatch::OpenHatch()
{
	return;
}

