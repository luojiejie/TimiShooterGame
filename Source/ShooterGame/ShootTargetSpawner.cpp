#include "ShootTargetSpawner.h"

AShootTargetSpawner::AShootTargetSpawner()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AShootTargetSpawner::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	LastTime -= DeltaSeconds;
	if (LastTime < 0)
	{
		LastTime = SpawnTime;
		FActorSpawnParameters Params;
		const FVector Location = GetActorLocation();
		const FRotator Rotator = GetActorRotation();
		AActor* SpawnedActor = GetWorld()->SpawnActor(TemplateClass.Get(), &Location, &Rotator, Params);
	}
}
