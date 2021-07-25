// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TimiShooterGameHUD.generated.h"

UCLASS()
class ATimiShooterGameHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATimiShooterGameHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

