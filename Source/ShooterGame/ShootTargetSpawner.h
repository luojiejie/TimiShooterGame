#pragma once

#include "CoreMinimal.h"
#include "ShootTarget.h"
#include "ShootTargetSpawner.generated.h"

UCLASS()
class SHOOTGAME_API AShootTargetSpawner : public AActor
{
	GENERATED_BODY()
	
public:
	AShootTargetSpawner();

	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> TemplateClass;

	UPROPERTY(EditAnywhere)
	float SpawnTime = 5;
	
	float LastTime;
};
