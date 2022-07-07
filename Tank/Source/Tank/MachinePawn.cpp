

#include "MachinePawn.h"
#include "TankPawn.h"
#include "Components\StaticMeshComponent.h"
#include "GameFramework\SpringArmComponent.h"
#include "Camera\CameraComponent.h"
#include "TankController.h"
#include "Kismet\KismetMathLibrary.h"
#include "Cannon.h"
#include "Components\ArrowComponent.h"
#include "HealthComponent.h"

AMachinePawn::AMachinePawn()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMachinePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMachinePawn::Die()
{
	Destroy();
}
void AMachinePawn::Fire()
{
	if (Cannon) {
		Cannon->Fire();
	}
}


void AMachinePawn::FireSpecial()
{
	if (Cannon) {
		Cannon->FireSpecial();
	}
}

