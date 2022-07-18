// Fill out your copyright notice in the Description page of Project Settings.


#include "TankFactory.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"
#include "HealthComponent.h"
#include "TankPawn.h"
#include "Kismet/GameplayStatics.h"


ATankFactory::ATankFactory()
{
 
	PrimaryActorTick.bCanEverTick = false;
	
	USceneComponent* SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComp;

	BuildingMeshAlive = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BuildingMeshAlive"));
	BuildingMeshAlive->SetupAttachment(SceneComp);
	BuildingMeshAlive->SetVisibility(true);
	
	BuildingMeshDestroyed = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BuildingMeshDestroyed"));
	BuildingMeshDestroyed->SetupAttachment(SceneComp);
	BuildingMeshDestroyed->SetVisibility(false);

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	BoxCollider->SetupAttachment(SceneComp);

	TankSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("TankSpawnPoint"));
	TankSpawnPoint->SetupAttachment(SceneComp);

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	HealthComponent->OnDamaged.AddUObject(this, &ATankFactory::DamageTaked);
	HealthComponent->OnDie.AddUObject(this, &ATankFactory::Die);

	AudioTankSpawnComonent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioSpawnComponent"));
	AudioTankSpawnComonent->SetAutoActivate(false);
	AudioTankSpawnComonent->SetupAttachment(SceneComp);

	AudioFactoryDeathComonent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioDeathComponent"));
	AudioFactoryDeathComonent->SetAutoActivate(false);
	AudioFactoryDeathComonent->SetupAttachment(SceneComp);
}

void ATankFactory::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle SpawnTimer;
	
	GetWorld()->GetTimerManager().SetTimer(SpawnTimer, this, &ATankFactory::SpawnTank, SpawnTankRate, true, 0);
}

void ATankFactory::SpawnTank()
{
	if (bFactoryAlive)
	{
		AudioTankSpawnComonent->Play();
		FTransform SpawnPlace(TankSpawnPoint->GetComponentRotation(), TankSpawnPoint->GetComponentLocation(), FVector(1));
		ATankPawn* newTank = GetWorld()->SpawnActorDeferred<ATankPawn>(SpawnTankClass, SpawnPlace, this, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

		newTank->SetPatrollingPoints(TankWayPoints);

		UGameplayStatics::FinishSpawningActor(newTank, SpawnPlace);
	}
	
}

void ATankFactory::TakeDamage(FDamageData DamageData)
{
	HealthComponent->TakeDamage(DamageData);
}

void ATankFactory::Die()
{
	if (bFactoryAlive)
	{
		AudioFactoryDeathComonent->Play();
		BuildingMeshAlive->SetVisibility(false);
		BuildingMeshDestroyed->SetVisibility(true);

		bFactoryAlive = false;
		if (MapLoader) {
			MapLoader->SetIsActivated(true);
		}
	}
	

	
}

void ATankFactory::DamageTaked(float DamageValue)
{
	//UE_LOG(LogTemp, Warning, TEXT("Factory %s take Damage: %f,  Health: %f"), *GetName(), DamageValue, HealthComponent->GetHealth());
}

