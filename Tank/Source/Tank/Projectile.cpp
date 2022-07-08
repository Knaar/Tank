#include "Projectile.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DamageTaker.h"
#include "GameStructs.h"

AProjectile::AProjectile()
{
	PrimaryActorTick.bCanEverTick = false;
	
	USceneComponent* SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = SceneComponent;

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	ProjectileMesh->SetupAttachment(SceneComponent);
	ProjectileMesh->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OnMeshOverlapBegin);
	ProjectileMesh->SetCollisionObjectType(ECollisionChannel::ECC_EngineTraceChannel1);
}

void AProjectile::Start()
{
	GetWorld()->GetTimerManager().SetTimer(MovieTimer, this, &AProjectile::Move, moveRate, true, moveRate);
	GetWorld()->GetTimerManager().SetTimer(DeactivateTimer, this, &AProjectile::Deactivate, deactivateTime, false);
}

void AProjectile::Deactivate()
{
	bIsActivation = false;
	SetActorLocation(FVector(0.0f, 0.0f, 0.0f));
	GetWorld()->GetTimerManager().ClearTimer(DeactivateTimer);
	GetWorld()->GetTimerManager().ClearTimer(MovieTimer);
	SetActorEnableCollision(false);
}

void AProjectile::Move()
{
	FVector nextPosition = GetActorLocation() + GetActorForwardVector() * moveSpeed*moveRate;
	SetActorLocation(nextPosition);
}

void AProjectile::OnMeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Projectile collided with % s, collided with component % s"), *GetName(),*OtherActor->GetName());
	AActor* owner = GetOwner();
	AActor* ownerByOwner = owner != nullptr ? owner->GetOwner() : nullptr;
	
	if (OtherActor != owner && OtherActor != ownerByOwner)
	{
		IDamageTaker* damageTakerActor = Cast<IDamageTaker>(OtherActor);
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
			OtherActor->Destroy();
		}

		Deactivate();
	}
}

