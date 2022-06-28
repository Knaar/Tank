#include "Cannon.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"


// Sets default values
ACannon::ACannon()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	CannonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cannon"));
	RootComponent = CannonMesh;

	ProjectileSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("ProjectileSpawnPoint"));
	ProjectileSpawnPoint->SetupAttachment(CannonMesh);
}

void ACannon::Fire()
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
	}
	else
	{
		GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, ReloadTime, false);
	}
	/*if (!bCanFire)
	{
		return;
	}
	bCanFire = false;
	if (CannonType==ECannonType::FireProjectile)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, FString(TEXT("Fire Projectile")));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, FString(TEXT("Fire Trace")));
	}
	*/
	
	
	
}

void ACannon::FireSpecial()
{
	while (bulletsInMagasine>0)
	{
		if (CannonType == ECannonType::FireProjectile)
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, FString(TEXT("Fire Projectile")));
			bulletsInMagasine--;
			GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::IDontKnowHowToUsePause, ShootTime, false);

		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, FString(TEXT("Fire Trace")));
			bulletsInMagasine--;
			GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::IDontKnowHowToUsePause, ShootTime, false);

		}
		
	}
	GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, ReloadTime, false);
}

void ACannon::Reload()
{
	//bCanFire = true;
	bulletsInMagasine = 5;
}

void ACannon::IDontKnowHowToUsePause()
{

}

