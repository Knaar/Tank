// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectilePool.h"
#include "Projectile.h"

// Sets default values
AProjectilePool::AProjectilePool()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProjectilePool::BeginPlay()
{
	Super::BeginPlay();
	InitialisePool();
}

void AProjectilePool::GetProjectile(FVector SpawnLocation, FRotator SpawnRotation)
{
	bool bGotSomeActiveProjectite = false;
	for (size_t i = 0; i < ProjectilesArray.Num(); i++)
	{
		if (ProjectilesArray[i]->bIsActivation==false)
		{
			bGotSomeActiveProjectite=true;
			ProjectilesArray[i]->SetActorLocation(SpawnLocation);
			ProjectilesArray[i]->SetActorRotation(SpawnRotation);
			ProjectilesArray[i]->bIsActivation = true;
			ProjectilesArray[i]->SetActorEnableCollision(true);
			ProjectilesArray[i]->Start();
			return;
		}
	}
	if (bGotSomeActiveProjectite==false)
	{
		SpawnProjectile(SpawnLocation, SpawnRotation,true);
	}
}

void AProjectilePool::SpawnProjectile(FVector SpawnLocation, FRotator SpawnRotation, bool bIsActive /*= false*/)
{
	AProjectile* projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
	if (projectile)
	{
		ProjectilesArray.Add(projectile);
		projectile->bIsActivation = bIsActive;
		projectile->SetActorEnableCollision(bIsActive);
		if (bIsActive)
			projectile->Start();
	}

}

void AProjectilePool::InitialisePool()
{
	for (size_t i = 0; i < PoolCapacity; i++)
	{
		SpawnProjectile(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));
	}
}

