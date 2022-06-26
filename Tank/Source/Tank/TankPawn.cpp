// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

ATankPawn::ATankPawn()
{
	PrimaryActorTick.bCanEverTick = true;
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	RootComponent = BodyMesh;

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretMesh"));
	TurretMesh->SetupAttachment(BodyMesh); 

	/* Отключил для статичной камеры
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(BodyMesh);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	*/
}

void ATankPawn::MoveForward(float Value)
{
	TargetAxisForwardValue = Value;
}

void ATankPawn::MoveRight(float Value)
{
	TargetAxisRightValue = Value;
}

void ATankPawn::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	FVector CurrentLocation = GetActorLocation();
	FVector forwardVector = GetActorForwardVector();
	FVector RightVector = GetActorRightVector();


	
	if (TargetAxisForwardValue!=0)
	{
		FVector movePositionForward = CurrentLocation + forwardVector * MoveSpeed * TargetAxisForwardValue;
		SetActorLocation(movePositionForward, true);
	} 
	else
	{
		FVector movePositionRight = CurrentLocation + RightVector * MoveSpeed * TargetAxisRightValue;
		SetActorLocation(movePositionRight, true);
	}
	

	
}

