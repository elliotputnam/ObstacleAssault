// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Sets property in editor
	UPROPERTY(EditAnywhere)
	float MemberFloat = 10.0f;

	UPROPERTY(VisibleAnywhere)
	int MemberInt = 69;

	UPROPERTY(EditAnywhere)
	FVector MyVector = FVector(10.0f, 10.0f, 10.0f);

};
