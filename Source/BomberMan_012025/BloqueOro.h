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

protected:
    // Se ejecuta al inicio del juego
    virtual void BeginPlay() override;

public:
    // Se ejecuta cada frame para actualizar la lógica de movimiento
    virtual void Tick(float DeltaTime) override;

private:
    // Almacena la posición inicial del bloque
    FVector PosicionInicial;

};