// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class TANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
public:
protected:
	UPROPERTY()
	class ATankPawn *TankPawn;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI|Movement")
	TArray<FVector> PatrollingPath;

	int32 CurrentPatrollingIndex = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Movement")
	float MovementAccurency;

	virtual void BeginPlay()override;
	virtual void Tick(float DeltaSeconds)override;
};
