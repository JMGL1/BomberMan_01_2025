// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueOro.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueOro : public ABloque
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	ABloqueOro();
	virtual void BeginPlay();

};
