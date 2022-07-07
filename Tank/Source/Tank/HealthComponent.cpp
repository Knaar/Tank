#include "HealthComponent.h"


	


void UHealthComponent::TakeDamage(FDamageData DamageData)
{
	float takedDamageValue = DamageData.DamageValue;
	CurrentHealth -= takedDamageValue;
	if (CurrentHealth<=0)
	{
		if (OnDie.IsBound()) {
			OnDie.Broadcast();
		}
	}
	else {
		if (OnDamaged.IsBound()) {
			OnDamaged.Broadcast(takedDamageValue);
		}
	}
	
}

float UHealthComponent::GetHealth() const
{
	return CurrentHealth;
}

float UHealthComponent::GetHealthState() const
{
	return CurrentHealth / MaxHealth;
}

void UHealthComponent::AddHealth(float AdditionalHealthValue)
{
	CurrentHealth += AdditionalHealthValue;
	if (CurrentHealth>MaxHealth)
	{
		CurrentHealth = MaxHealth;
	}
}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	CurrentHealth = MaxHealth;
}

