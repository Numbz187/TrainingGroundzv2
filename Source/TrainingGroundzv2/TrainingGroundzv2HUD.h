// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "TrainingGroundzv2HUD.generated.h"

UCLASS()
class ATrainingGroundzv2HUD : public AHUD
{
	GENERATED_BODY()

public:
	ATrainingGroundzv2HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

