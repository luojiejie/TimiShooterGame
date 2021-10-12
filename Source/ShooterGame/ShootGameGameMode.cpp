// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootGameGameMode.h"
#include "ShootGameHUD.h"
#include "ShootGameCharacter.h"
#include "ShootGameGameState.h"
#include "UObject/ConstructorHelpers.h"

AShootGameGameMode::AShootGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShootGameHUD::StaticClass();

	PrimaryActorTick.bCanEverTick = true;
}

void AShootGameGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (GetGameState<AShootGameGameState>()->Score >= 1)
	{
		//win
		GEngine->AddOnScreenDebugMessage(0, 5, FColor::Yellow, TEXT("victory"));
	}
}
