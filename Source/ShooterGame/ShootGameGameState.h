// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "ShootGameGameState.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTGAME_API AShootGameGameState : public AGameStateBase
{
	GENERATED_BODY()


	public:

	UFUNCTION(BlueprintCallable)
	void AddScore(int Value);
	
	int Score;
	
};
