// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAcuatico.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "TimerManager.h"

AEnemigoAcuatico::AEnemigoAcuatico()
{
    MallaAcuatica = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaAcuatica"));
    RootComponent = MallaAcuatica;

    // Cargar una malla predeterminada
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMalla(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
    if (ObjetoMalla.Succeeded())
    {
        MallaAcuatica->SetStaticMesh(ObjetoMalla.Object);
        MallaAcuatica->SetSimulatePhysics(false);
    }

    // Inicializar atributos
    VelocidadMovimiento = 100.0f;    // Velocidad horizontal
    AmplitudOscilacion = 50.0f;      // Altura máxima de oscilación
    FrecuenciaOscilacion = 2.0f;     // Velocidad del movimiento vertical
    DireccionMovimiento = FVector(1.0f, 0.0f, 0.0f); // Movimiento inicial hacia adelante
    AlturaBaseAgua = 0.0f;           // Altura base del agua

    // Configurar límites del movimiento
    LimiteMinimo = FVector(-500.0f, -500.0f, 0.0f); // Ajusta según el nivel
    LimiteMaximo = FVector(500.0f, 500.0f, 0.0f);
}

void AEnemigoAcuatico::BeginPlay()
{
    Super::BeginPlay();

    // Ajustar la posición inicial cerca de la superficie del agua
    FVector PosicionInicial = GetActorLocation();
    PosicionInicial.Z = AlturaBaseAgua; // Cerca de la base del agua
    SetActorLocation(PosicionInicial);
}

void AEnemigoAcuatico::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Movimiento horizontal
    FVector PosicionActual = GetActorLocation();
    FVector MovimientoHorizontal = DireccionMovimiento * VelocidadMovimiento * DeltaTime;

    // Oscilación vertical (simula emerger y sumergirse)
    float OffsetVertical = AmplitudOscilacion * FMath::Sin(FrecuenciaOscilacion * GetWorld()->TimeSeconds);
    FVector NuevaPosicion = PosicionActual + MovimientoHorizontal;
    NuevaPosicion.Z = AlturaBaseAgua + OffsetVertical;

    // Verificar si el enemigo está cerca de los límites y cambiar dirección
    if (NuevaPosicion.X <= LimiteMinimo.X || NuevaPosicion.X >= LimiteMaximo.X)
    {
        DireccionMovimiento.X *= -1; // Cambiar dirección en X
    }

    if (NuevaPosicion.Y <= LimiteMinimo.Y || NuevaPosicion.Y >= LimiteMaximo.Y)
    {
        DireccionMovimiento.Y *= -1; // Cambiar dirección en Y
    }

    // Actualizar posición del enemigo
    SetActorLocation(NuevaPosicion);
}