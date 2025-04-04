// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoSubterraneo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API AEnemigoSubterraneo : public AEnemigo
{
	GENERATED_BODY()
	
public:
	AEnemigoSubterraneo();
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	UStaticMeshComponent* MallaSubterranea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento Subterráneo")

	FVector DireccionActual;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergencia")
	float TiempoEntreEmergencias;

	float TiempoAcumulado;
	float VelocidadMovimiento;
	bool Emergido;

	void CambiarDireccionAleatoria();
	void AlternarEmergencia();

};
