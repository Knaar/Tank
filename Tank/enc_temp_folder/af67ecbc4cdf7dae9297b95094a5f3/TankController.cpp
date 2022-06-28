// Fill out your copyright notice in the Description page of Project Settings.


#include "TankController.h"
#include "TankPawn.h"

ATankController::ATankController()
{
	bShowMouseCursor = true;
}

/*ATankController::ATankController()
{
	bShowMouseCursor = true;
}*/

void ATankController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("MoveForward", this, &ATankController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ATankController::MoveRight);
	InputComponent->BindAxis("RotateRight", this, &ATankController::RotateRight);
}

void ATankController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	FVector mouseDirection;
	DeprojectMousePositionToWorld(MousePos, mouseDirection);//с помощью этого метода получаем позицию мыши и её вращение
	FVector TankPosition = TankPawn->GetActorLocation();
	MousePos.Z = TankPosition.Z;

	FVector dir = MousePos - TankPosition;//вектор направления
	dir.Normalize();
	MousePos = TankPosition + dir * 1000.0f;
	DrawDebugLine(GetWorld(), TankPosition, MousePos, FColor::Green, false, 1,1, 5);

	
}


void ATankController::SetPawn(APawn* InPawn)
{
	Super::SetPawn(InPawn);
	TankPawn = Cast<ATankPawn>(InPawn);
}

/*
void ATankController::BeginPlay()
{
	Super::BeginPlay();
	TankPawn = Cast<ATankPawn>(GetPawn());
}*/

void ATankController::MoveForward(float Value)
{
	TankPawn->MoveForward(Value);
}

void ATankController::MoveRight(float Value)
{
	TankPawn->MoveRight(Value);
}

void ATankController::RotateRight(float Value)
{
	TankPawn->RotateRight(Value);
}
