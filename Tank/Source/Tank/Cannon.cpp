#include "Cannon.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "TimerManager.h"
#include "Engine/Engine.h"
#include "Projectile.h"
#include "Components/SceneComponent.h"
#include "DrawDebugHelpers.h"



// Sets default values
ACannon::ACannon()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	USceneComponent* CanonSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CanonRoot"));
	RootComponent = CanonSceneComponent;

	CannonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cannon"));
	CannonMesh->SetupAttachment(RootComponent);

	ProjectileSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("ProjectileSpawnPoint"));
	ProjectileSpawnPoint->SetupAttachment(RootComponent);
}




void ACannon::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, FString::Printf(TEXT("Bullets : %d"), bulletsInMagasine));
	

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
			AProjectile* projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, ProjectileSpawnPoint->GetComponentLocation(), ProjectileSpawnPoint->GetComponentRotation());
			if (projectile)
			{
				projectile->Start();
			}
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, FString(TEXT("Fire Trace")));
			bulletsInMagasine--;
			FHitResult hitResult;
			FCollisionQueryParams traceParams =
				FCollisionQueryParams(FName(TEXT("FireTrace")), true, this);
			traceParams.bTraceComplex = true;
			traceParams.bReturnPhysicalMaterial = false;


			FVector start = ProjectileSpawnPoint->GetComponentLocation();
			FVector end = ProjectileSpawnPoint->GetForwardVector() * FireRange + start;
			if (GetWorld()->LineTraceSingleByChannel(hitResult, start, end,
				ECollisionChannel::ECC_Visibility, traceParams))
			{

				DrawDebugLine(GetWorld(), start, hitResult.Location, FColor::Red, false,
					0.5f, 0, 5);
				if (hitResult.GetActor())
				{
					hitResult.GetActor()->Destroy();
				}
			}
			else
			{
				DrawDebugLine(GetWorld(), start, end, FColor::Purple, false, 0.5f, 0, 5);
			}
		}


		}
		GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, 1 / FireRate, false);

	
	
	
	
	
}

void ACannon::FireSpecial()
{
	if (bulletsInMagasine>0)
	{
		bulletsInMagasine--;
		ShootCast();
	}
}

void ACannon::ShootCast()
{
	GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::ShootRelease, 0.4f, false);
}

void ACannon::ShootRelease()
{
		if (CannonType == ECannonType::FireProjectile)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Red, FString(TEXT("Fire Projectile")));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Red, FString(TEXT("Fire Trace")));
		}
		SomeIterator++;
		if (SomeIterator < NumOfAutoShoots)
		{
			ShootCast();
		}
		else {
			SomeIterator = 0;
			GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, 1 / FireRate, false);
		}
}

void ACannon::Reload()
{
	bCanFire = true;
	
}



