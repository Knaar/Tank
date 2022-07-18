#include "MapLoader.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"

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

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	//AudioComponent->SetAutoActivate(false);
	AudioComponent->SetupAttachment(MeshComponent);

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
		FTimerHandle SomeTimer;
		AudioComponent->Play();
		
		GetWorld()->GetTimerManager().SetTimer(SomeTimer,this, &AMapLoader::Teleport, 1, false, 0.5f);
		
	}
	
}

void AMapLoader::Teleport()
{
	AudioComponent->Play();

	UGameplayStatics::OpenLevel(GetWorld(), LoadLevelName);
}

