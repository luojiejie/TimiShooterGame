// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootGameGameState.h"

void AShootGameGameState::AddScore(int Value)
{
	Score = Score + Value;

	FString Content = FString::Printf(TEXT("score:%d"), Score);
	GEngine->AddOnScreenDebugMessage(0, 3, FColor::Yellow,  Content);
}
