// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberMan_01_2025GameMode.generated.h"

UCLASS(minimalapi)
class ABomberMan_01_2025GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan_01_2025GameMode();
	virtual void BeginPlay() override;

	template<typename T>
	void SpawnBloque(FVector Location);
};



