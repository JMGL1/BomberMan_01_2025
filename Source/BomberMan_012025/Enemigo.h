// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemigo.generated.h"

UCLASS()
class BOMBERMAN_012025_API AEnemigo : public ACharacter
{
   GENERATED_BODY()

public:
// Sets default values for this character's properties
AEnemigo();
protected:
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
float VelocidadMovimiento;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Patrullaje")
float RadioPatrullaje;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Comportamiento")
bool bPatrullajeHabilitado;
virtual void BeginPlay() override;
virtual void Mover(float DeltaTime);
virtual void Patrullar();

public:
virtual void Tick(float DeltaTime) override;

};
