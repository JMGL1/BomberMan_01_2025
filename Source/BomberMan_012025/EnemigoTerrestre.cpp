// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoTerrestre.h"

// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemigoAereo.h"
#include "Components/StaticMeshComponent.h"

AEnemigoTerrestre::AEnemigoTerrestre()
{
    MallaTerrestre = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaTerrestre"));
    RootComponent = MallaTerrestre;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMalla(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
    if (ObjetoMalla.Succeeded())
    {
        MallaTerrestre->SetStaticMesh(ObjetoMalla.Object);
    }

    CentroMovimiento = FVector(800.0f, 3500.0f, 120.0f);
    DireccionMovimiento = FVector(1.0f, 0.0f, 0.0f); // Movimiento en línea recta en el eje X
    VelocidadVuelo = 600.0f; // Velocidad en unidades por segundo
    Tiempo = 0.0f;
}

void AEnemigoTerrestre::BeginPlay()
{
    Super::BeginPlay();
    SetActorLocation(CentroMovimiento);
}

void AEnemigoTerrestre::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Mover en línea recta multiplicando la dirección por la velocidad y el tiempo transcurrido
    FVector NuevaPosicion = GetActorLocation() + (DireccionMovimiento * VelocidadVuelo * DeltaTime);
    SetActorLocation(NuevaPosicion);

    UE_LOG(LogTemp, Warning, TEXT("Enemigo aéreo moviéndose en línea recta: X=%f, Y=%f, Z=%f"), NuevaPosicion.X, NuevaPosicion.Y, NuevaPosicion.Z);
}
