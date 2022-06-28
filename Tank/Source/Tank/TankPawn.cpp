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

	/* �������� ��� ��������� ������
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

void ATankPawn::RotateRight(float Value)
{
	TargetAxisRotationValue = Value;
}

void ATankPawn::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	//Tank movement;
	FVector CurrentLocation = GetActorLocation();
	FVector forwardVector = GetActorForwardVector();
	FVector RightVector = GetActorRightVector();
	FVector movePosition = CurrentLocation +( forwardVector * MoveSpeed * TargetAxisForwardValue*DeltaSeconds)+(RightVector * MoveSpeed * TargetAxisRightValue*DeltaSeconds);
	SetActorLocation(movePosition, true);

	//Tank Rotation;
	float YawRotation = RotationSpeed * TargetAxisRotationValue * DeltaSeconds;
	FRotator CurrRotation = GetActorRotation();

	YawRotation += CurrRotation.Yaw;
	FRotator newRotation = FRotator(0.0f, YawRotation, 0.0f);
	SetActorRotation(newRotation);

	//Short Version Tank Rotation
	//SetActorRotation(FRotator(0.0f, (GetActorRotation().Yaw + (RotationSpeed * TargetAxisRotationValue * DeltaSeconds)), 0.0f));
}

void ATankPawn::BeginPlay() 
{
	Super::BeginPlay();
	SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Z, 50.0f));
}

