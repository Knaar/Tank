

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

	
	AudioEffect = CreateDefaultSubobject<UAudioComponent>(TEXT("AudoiEffect"));
	//RootComponent = AudioEffect;

	AudioEffectDamaged = CreateDefaultSubobject<UAudioComponent>(TEXT("AudoiEffectDamaged"));
	//RootComponent = AudioEffect;


}

void AMachinePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMachinePawn::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, FString::Printf(TEXT("Score: %f"), Score));
}

void AMachinePawn::Die()
{
	if (Cannon)
	{
		Cannon->Destroy();
	}
	Destroy();
	AudioEffect->Play();
	
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

float AMachinePawn::GetPoints()
{
	return ScoreValue;
}

void AMachinePawn::ShowScore(float Value)
{
	Score += Value;
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("Score: %f"), Score));
}

void AMachinePawn::TakeDamage(FDamageData DamageData)
{
	HealthComponent->TakeDamage(DamageData);
	AudioEffectDamaged->Play();
}

void AMachinePawn::DamageTaked(float DamageValue)
{
	UE_LOG(LogTemp, Warning, TEXT("Turr %s taked damage: %f Health:%f"), *GetName(), DamageValue, HealthComponent->GetHealth());
}

