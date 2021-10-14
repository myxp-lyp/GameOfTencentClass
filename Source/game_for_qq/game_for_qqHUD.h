// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "game_for_qqHUD.generated.h"

UCLASS()
class Agame_for_qqHUD : public AHUD
{
	GENERATED_BODY()

public:
	Agame_for_qqHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

