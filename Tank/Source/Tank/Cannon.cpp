#include "Cannon.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "TimerManager.h"
#include "Engine/Engine.h"
#include "Projectile.h"
#include "Components/SceneComponent.h"
#include "DrawDebugHelpers.h"
#include "GameStructs.h"



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

	ShootEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleObject"));
	ShootEffect->SetupAttachment(ProjectileSpawnPoint);

	AudioEffect = CreateDefaultSubobject<UAudioComponent>(TEXT("AudoiEffect"));
	AudioEffect->SetAutoActivate(false);
	
}

void ACannon::BeginPlay()
{
	Super::BeginPlay();
	CreateProjectilePool();
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
		ShootEffect->ActivateSystem();
		AudioEffect->Play();
		bulletsInMagasine--;

		if (CannonType == ECannonType::FireProjectile)
		{
			
			GEngine->AddOnScreenDebugMessage(10, 1, FColor::Green, "Fire - projectile");
			if (ProjectilePool)
			{
				ProjectilePool->GetProjectile(ProjectileSpawnPoint->GetComponentLocation(), ProjectileSpawnPoint->GetComponentRotation());				
			}
			else {
				AProjectile* projectile_ptr = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, ProjectileSpawnPoint->GetComponentLocation(), ProjectileSpawnPoint->GetComponentRotation());
				if (projectile_ptr)
				{
					projectile_ptr->OnKilled.AddUObject(this, &ACannon::AddScore);
					projectile_ptr->SetOwner(this);
					projectile_ptr->Start();
				}
			}
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, FString(TEXT("Fire Trace")));
			FHitResult hitResult;
			FCollisionQueryParams traceParams =
				FCollisionQueryParams(FName(TEXT("FireTrace")), true, this);
			traceParams.bTraceComplex = true;
			traceParams.bReturnPhysicalMaterial = false;


			FVector start = ProjectileSpawnPoint->GetComponentLocation();
			FVector end = ProjectileSpawnPoint->GetForwardVector() * FireRange + start;
			AActor* owner = GetOwner();

			if (GetWorld()->LineTraceSingleByChannel(hitResult, start, end,
				ECollisionChannel::ECC_Visibility, traceParams)){

				DrawDebugLine(GetWorld(), start, hitResult.Location, FColor::Red, false,0.2f, 0, 10);
				if (hitResult.GetActor()){

					IDamageTaker* damageTakerActor = Cast<IDamageTaker>(hitResult.GetActor());
					if (damageTakerActor)
					{
						FDamageData damageData;
						damageData.DamageValue = Damage;
						damageData.Instigator = owner;
						damageData.DamageMaker = this;

						damageTakerActor->TakeDamage(damageData);
					}
					else
					{
						hitResult.GetActor()->Destroy();
					}
				}
			}
			else{
				DrawDebugLine(GetWorld(), start, end, FColor::Purple, false, 0.2f, 0, 10);
			}
		}
	}
	GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, FireRate, false);
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
	GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::ShootRelease, FireRate, false);
}

void ACannon::ShootRelease()
{
	ShootEffect->ActivateSystem();
	AudioEffect->Play();
		if (CannonType == ECannonType::FireProjectile)
		{
			GEngine->AddOnScreenDebugMessage(10, 1, FColor::Green, "Fire - projectile");

			if (ProjectilePool)
			{
				ProjectilePool->GetProjectile(ProjectileSpawnPoint->GetComponentLocation(), ProjectileSpawnPoint->GetComponentRotation());
				GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, FString(TEXT("Get Projectile Pool")));
			}
			
		}
		else
		{
			FHitResult hitResult;
			FCollisionQueryParams traceParams =FCollisionQueryParams(FName(TEXT("FireTrace")), true, this);
			traceParams.bTraceComplex = true;
			traceParams.bReturnPhysicalMaterial = false;

			FVector start = ProjectileSpawnPoint->GetComponentLocation();
			FVector end = ProjectileSpawnPoint->GetForwardVector() * FireRange + start;
			if (GetWorld()->LineTraceSingleByChannel(hitResult, start, end,
				ECollisionChannel::ECC_Visibility, traceParams))
			{
				DrawDebugLine(GetWorld(), start, hitResult.Location, FColor::Red, false,0.2f, 0, 10);
				if (hitResult.GetActor())
				{
					hitResult.GetActor()->Destroy();
				}
			}
			else
			{
				DrawDebugLine(GetWorld(), start, end, FColor::Purple, false, 0.2f, 0, 10);
			}
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

void ACannon::CreateProjectilePool()
{
	if (ProjectilePoolClass)
	{
		ProjectilePool = GetWorld()->SpawnActor<AProjectilePool>(ProjectilePoolClass, ProjectileSpawnPoint->GetComponentLocation(), ProjectileSpawnPoint->GetComponentRotation());
	}
}

void ACannon::AddScore(float ScoreValue)
{
	if (ScoreChanged.IsBound())
	{
		ScoreChanged.Broadcast(ScoreValue);
	}
}

