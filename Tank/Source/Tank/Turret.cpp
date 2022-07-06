#include "Turret.h"
#include "TankController.h"
#include "Kismet/KismetMathLibrary.h"
#include "Cannon.h"
#include "TimerManager.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"



ATurret::ATurret()
{
	PrimaryActorTick.bCanEverTick = true;

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretBody"));
	RootComponent = BodyMesh;

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretTurret"));
	TurretMesh->AttachToComponent(BodyMesh,FAttachmentTransformRules::KeepRelativeTransform);

	CannonSetupPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Cannon Setup"));
	CannonSetupPoint->AttachToComponent(TurretMesh, FAttachmentTransformRules::KeepRelativeTransform);

	HitCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("HitCollider"));
	HitCollider->SetupAttachment(TurretMesh);

	UStaticMesh* TurretMeshTemp = LoadObject<UStaticMesh>(this, *TurretMeshPath);
	if (TurretMeshTemp)
	{
		TurretMesh->SetStaticMesh(TurretMeshTemp);
	}
	UStaticMesh* BodyMeshTemp = LoadObject<UStaticMesh>(this, *BodyMeshPath);
	if (BodyMeshTemp)
	{
		BodyMesh->SetStaticMesh(BodyMeshTemp);
	}

}

void ATurret::BeginPlay()
{
	Super::BeginPlay();
	FActorSpawnParameters params;
	params.Owner = this;

	Cannon = GetWorld()->SpawnActor<ACannon>(CannonClass, params);
	Cannon->AttachToComponent(CannonSetupPoint, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();

	FTimerHandle _targetingTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(_targetingTimerHandle, this, &ATurret::Targeting, TargetingRate, true, TargetingRate);
}

void ATurret::Destroyed()
{
	if (Cannon) {
		Cannon->Destroy();
	}
}

void ATurret::Targeting()
{
	if (IsPlayerINRange()) {
		RotateToPlayer();
	}
	if (CanFire())
	{
		Fire();
	}
}

void ATurret::RotateToPlayer()
{
	FRotator targerRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), PlayerPawn->GetActorLocation());
	FRotator currRotation = TurretMesh->GetComponentRotation();
	targerRotation.Pitch = currRotation.Pitch;
	targerRotation.Roll = currRotation.Roll;
	TurretMesh->SetWorldRotation(FMath::Lerp(currRotation, targerRotation, TargetingSpeed));
}

bool ATurret::IsPlayerINRange()
{
	return FVector::Distance(PlayerPawn->GetActorLocation(),GetActorLocation())<=TargetInRange;
}

bool ATurret::CanFire()
{
	FVector TargetingDir = TurretMesh->GetForwardVector();
	FVector dirToPlayer = PlayerPawn->GetActorLocation() - GetActorLocation(); 

	dirToPlayer.Normalize();
	float aimAngle = FMath::RadiansToDegrees(acosf(FVector::DotProduct(TargetingDir, dirToPlayer)));
	return aimAngle <= Accurency;

}

void ATurret::Fire()
{
	if (Cannon)
	{
		Cannon->Fire();
	}
}

