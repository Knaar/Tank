#include "MapLoader.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "../../../../../UE_5.0/Engine/Source/Runtime/Engine/Classes/Kismet/GameplayStatics.h"

AMapLoader::AMapLoader()
{
	PrimaryActorTick.bCanEverTick = true;
	USceneComponent* SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = SceneComponent;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	MeshComponent->SetupAttachment(SceneComponent);

	TriggerCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	TriggerCollider->SetupAttachment(SceneComponent);
	TriggerCollider->OnComponentBeginOverlap.AddDynamic(this, &AMapLoader::OnTriggerOverlapBegin);

	ActivatedLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("ActivatedLight"));
	ActivatedLight->SetupAttachment(SceneComponent);

	DeactivatedLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("DeactivatedLight"));
	DeactivatedLight->SetupAttachment(SceneComponent);

	SetActiveLights();
}

void AMapLoader::SetIsActivated(bool NewIsActivated)
{
	IsActivated = NewIsActivated;
	SetActiveLights();
}

void AMapLoader::BeginPlay()
{
	Super::BeginPlay();
	SetActiveLights();
}

void AMapLoader::SetActiveLights()
{
	ActivatedLight->SetHiddenInGame(!IsActivated);
	DeactivatedLight->SetHiddenInGame(IsActivated);
}

void AMapLoader::OnTriggerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!IsActivated)
	{
		return;
	} 
	APawn* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (OtherActor == PlayerPawn) {
		UGameplayStatics::OpenLevel(GetWorld(), LoadLevelName);
	}
	
}

