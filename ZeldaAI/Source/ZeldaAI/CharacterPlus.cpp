// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterPlus.h"

// Sets default values
ACharacterPlus::ACharacterPlus()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ACharacterPlus::GetActorEyesViewPoint(FVector& out_Location, FRotator& out_Rotation) const
{
	out_Location = GetPawnViewLocation();
	out_Rotation = GetActorRotation();
}

// Called when the game starts or when spawned
void ACharacterPlus::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterPlus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterPlus::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

