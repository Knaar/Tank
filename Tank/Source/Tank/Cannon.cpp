#include "Cannon.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "TimerManager.h"
#include "Engine/Engine.h"



// Sets default values
ACannon::ACannon()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	CannonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cannon"));
	RootComponent = CannonMesh;

	ProjectileSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("ProjectileSpawnPoint"));
	ProjectileSpawnPoint->SetupAttachment(CannonMesh);
}



//Why It doesn't working???
void ACannon::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	UE_LOG(LogTemp, Warning, TEXT("Curr RAV: %d"), bulletsInMagasine);
	//I tried to show how many bullets in DebagLog

}





void ACannon::Fire()
{
	if (bulletsInMagasine>0) 
	{
		if (!bCanFire)
		{
			return;
		}
		bCanFire = false;
		if (CannonType == ECannonType::FireProjectile)
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, FString(TEXT("Fire Projectile")));
			bulletsInMagasine--;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, FString(TEXT("Fire Trace")));
			bulletsInMagasine--;
		}
		GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, 1 / FireRate, false);

	}
	
	
	
	
}

void ACannon::FireSpecial()
{
	
		GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::ShootRelease, 0.4f, false);
		
	
	
}

void ACannon::ShootRelease()
{
	if (bulletsInMagasine>0)
	{
		if (CannonType == ECannonType::FireProjectile)
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, FString(TEXT("Fire Projectile")));
			bulletsInMagasine--;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, FString(TEXT("Fire Trace")));
			bulletsInMagasine--;
		}
		SomeIterator++;
		if (SomeIterator < NumOfAutoShoots)
		{
			FireSpecial();
		}
		else {
			SomeIterator = 0;
		}
	}
	
	
}

void ACannon::Reload()
{
	bCanFire = true;
	
}



