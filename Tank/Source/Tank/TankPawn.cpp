// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPawn.h"
#include "Components\StaticMeshComponent.h"
#include "GameFramework\SpringArmComponent.h"
#include "Camera\CameraComponent.h"
#include "TankController.h"
#include "Kismet\KismetMathLibrary.h"
#include "Cannon.h"
#include "Components\ArrowComponent.h"
#include "HealthComponent.h"
#include "Components/BoxComponent.h"


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

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
	HealthComponent->OnDie.AddUObject(this, &ATankPawn::Die);
	HealthComponent->OnDamaged.AddUObject(this, &ATankPawn::DamageTaked);

	HitCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Hit Collider"));
	HitCollider->SetupAttachment(BodyMesh);
	
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



void ATankPawn::SwapWeapon()
{
	if (bMainWeapon)
	{
		SetupCannon(SecondaryCannonClass);
		bMainWeapon = false;
	}
	else {
		SetupCannon(CannonClass);
		bMainWeapon = true;
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

	//Turret rotation;
	FVector MousePos = TankController->GetMousePosition();

	FRotator targetRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), MousePos);
	FRotator TurretRotation = TurretMesh->GetComponentRotation();

	targetRotation.Pitch = TurretRotation.Pitch;
	targetRotation.Roll = TurretRotation.Roll;

	TurretMesh->SetWorldRotation(FMath::Lerp(TurretRotation,targetRotation,RotateInterpolationKey));

}

void ATankPawn::BeginPlay() 
{
	Super::BeginPlay();
	SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y, 50.0f));

	TankController = Cast<ATankController>(GetController());
	SetupCannon(CannonClass);
}

void ATankPawn::SetupCannon(TSubclassOf<ACannon>NewCannonClass)
{
	if (!NewCannonClass)
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

	Cannon = GetWorld()->SpawnActor<ACannon>(NewCannonClass, params);
	Cannon->AttachToComponent(TurretMesh, FAttachmentTransformRules::SnapToTargetIncludingScale);
}

void ATankPawn::SetBullets(int bullets)
{
	Cannon->bulletsInMagasine = Cannon->bulletsInMagasine+bullets;
}

void ATankPawn::TakeDamage(FDamageData DamageData)
{
	HealthComponent->TakeDamage(DamageData);
}



void ATankPawn::DamageTaked(float DamageValue)
{
	UE_LOG(LogTemp, Warning, TEXT("Turr %s taked damage: %f Health:%f"), *GetName(), DamageValue, HealthComponent->GetHealth());
}