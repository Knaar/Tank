// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPawn.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "TankController.h"
#include "Kismet/KismetMathLibrary.h"
#include "Cannon.h"


ATankPawn::ATankPawn()
{
	PrimaryActorTick.bCanEverTick = true;
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	RootComponent = BodyMesh;

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretMesh"));
	TurretMesh->SetupAttachment(BodyMesh); 

	
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(BodyMesh);
	SpringArm->bDoCollisionTest = false;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritYaw = false;
	SpringArm->bInheritRoll = false;


	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	
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

void ATankPawn::Fire()
{
	if (Cannon) {
		Cannon->Fire();
	}
}

void ATankPawn::FireSpecial()
{
	if (Cannon) {
		Cannon->FireSpecial();
	}
}

void ATankPawn::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	//Tank movement;
	//Added acceleration via interpolation. I do not know why.
	CurrentMoveAxisValue = FMath::Lerp(CurrentMoveAxisValue, TargetAxisForwardValue, InterpolationKey);

	FVector CurrentLocation = GetActorLocation();
	FVector forwardVector = GetActorForwardVector();
	FVector RightVector = GetActorRightVector();

	FVector movePosition = CurrentLocation +( forwardVector * MoveSpeed * CurrentMoveAxisValue *DeltaSeconds)+(RightVector * MoveSpeed * TargetAxisRightValue*DeltaSeconds);
	SetActorLocation(movePosition, true);

	//Tank Rotation;

	CurrentRotateAxisValue = FMath::Lerp(CurrentRotateAxisValue, TargetAxisRotationValue, InterpolationKey);
	float YawRotation = RotationSpeed * CurrentRotateAxisValue * DeltaSeconds;
	FRotator CurrRotation = GetActorRotation();

	YawRotation += CurrRotation.Yaw;
	FRotator newRotation = FRotator(0.0f, YawRotation, 0.0f);
	SetActorRotation(newRotation);

	//Short Version Tank Rotation
	//SetActorRotation(FRotator(0.0f, (GetActorRotation().Yaw + (RotationSpeed * TargetAxisRotationValue * DeltaSeconds)), 0.0f));

	

	//Turret rotation;
	FVector MousePos = TankController->GetMousePosition();

	FRotator targetRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), MousePos);
	FRotator TurretRotation = TurretMesh->GetComponentRotation();

	targetRotation.Pitch = TurretRotation.Pitch;
	targetRotation.Roll = TurretRotation.Roll;

	TurretMesh->SetWorldRotation(FMath::Lerp(TurretRotation,targetRotation,RotateInterpolationKey));

	//So i can't release DebugMessage in Cannon.cpp. That's why this string here...Sry Lol
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, FString::Printf(TEXT("Bullets : %d"), Cannon->bulletsInMagasine));
	//But it's still doing the job
}

void ATankPawn::BeginPlay() 
{
	Super::BeginPlay();
	SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y, 50.0f));

	TankController = Cast<ATankController>(GetController());
	SetupCannon();
}

void ATankPawn::SetupCannon()
{
	if (!CannonClass)
	{
		return;
	}
	if (Cannon)
	{
		Cannon->Destroy();
	}
	FActorSpawnParameters params;
	params.Instigator = this;
	params.Owner = this;

	Cannon = GetWorld()->SpawnActor<ACannon>(CannonClass, params);
	Cannon->AttachToComponent(TurretMesh, FAttachmentTransformRules::SnapToTargetIncludingScale);
}

