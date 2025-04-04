// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAcuatico.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API AEnemigoAcuatico : public AEnemigo
{
	GENERATED_BODY()
	
public:
    AEnemigoAcuatico();

protected:
    // Llamado al inicio del juego
    virtual void BeginPlay() override;

public:
    // Llamado cada frame
    virtual void Tick(float DeltaTime) override;

private:
    // Componente de malla para representar al enemigo visualmente
    UStaticMeshComponent* MallaAcuatica;

    // Atributos de movimiento
    float VelocidadMovimiento;     // Velocidad horizontal
    float AmplitudOscilacion;      // Amplitud del movimiento vertical (altura máxima de oscilación)
    float FrecuenciaOscilacion;    // Velocidad de la oscilación vertical

    // Dirección de movimiento
    FVector DireccionMovimiento;

    // Altura base del agua
    float AlturaBaseAgua;

    // Límites del movimiento en X e Y
    FVector LimiteMinimo;
    FVector LimiteMaximo;
};