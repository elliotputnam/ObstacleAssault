// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Display, TEXT("MyVector.X: %f"), MyVector.X);
	UE_LOG(LogTemp, Display, TEXT("MyVector.Y: %f"), MyVector.Y);
	UE_LOG(LogTemp, Display, TEXT("MyVector.Z: %f"), MyVector.Z);
	
	MyVector.X = -1650.0f;
	MyVector.Y = -1230.0f;
	MyVector.Z = 370.0f;

	SetActorLocation(MyVector);

}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetActorLocation(MyVector);
	if (MyVector.Z < 700.0f)
	{
		MyVector.Z += 1.0f;
	}
	else
	{
		MyVector.Z = 370.0f;
	}

}

