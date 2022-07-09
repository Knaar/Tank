// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"
#include "TankPawn.h"
#include "DrawDebugHelpers.h"
#include "Math/UnrealMathUtility.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	TankPawn = Cast<ATankPawn>(GetPawn());

	FVector PawnLocation = TankPawn->GetActorLocation();
	MovementAccurency = TankPawn->GetAccurency();
	TArray<FVector> points = TankPawn->GetPatrolligPoints();
	for (FVector SomePoint : points) {
		PatrollingPath.Add(SomePoint + PawnLocation);
	}
	CurrentPatrollingIndex = 0;

}

void ATankAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	TankPawn->MoveForward(1);
	FVector currentPoint = PatrollingPath[CurrentPatrollingIndex];
	FVector pawnLocation = TankPawn->GetActorLocation();

	if (FVector::Distance(currentPoint, pawnLocation) <= MovementAccurency) {
		CurrentPatrollingIndex++;

		if (CurrentPatrollingIndex >= PatrollingPath.Num()) {
			CurrentPatrollingIndex = 0;
		}
	}

	FVector moveDirection = currentPoint - pawnLocation;
	moveDirection.Normalize();

	FVector forwardDirection = TankPawn->GetActorForwardVector();
	FVector rightDirection = TankPawn->GetActorRightVector();

	DrawDebugLine(GetWorld(),pawnLocation,currentPoint,FColor::Green,false,0.1f,0,5);

	float forwardAngle = FMath::RadiansToDegrees(acosf(FVector::DotProduct(forwardDirection, moveDirection)));
	float rightAngle= FMath::RadiansToDegrees(acosf(FVector::DotProduct(rightDirection, moveDirection)));

	float rotationValue = 0;
	if (forwardAngle>5)
	{
		rotationValue = 1;
	}
	if (rightAngle>90)
	{
		rotationValue = -rotationValue;
	}
	TankPawn->RotateRight(rotationValue);
}
