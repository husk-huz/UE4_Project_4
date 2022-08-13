// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyProject_1HUD.generated.h"

UCLASS()
class AMyProject_1HUD : public AHUD
{
	GENERATED_BODY()

public:
	AMyProject_1HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

