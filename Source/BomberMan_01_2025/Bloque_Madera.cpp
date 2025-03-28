// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque_Madera.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABloque_Madera::ABloque_Madera()
{
    PrimaryActorTick.bCanEverTick = false;

    MallaBloque_Madera = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
    MallaBloque_Madera->SetupAttachment(RootComponent);

    // Asignar una malla de cubo (puedes cambiarla por otro modelo si lo deseas)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloque(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

    if (ObjetoMallaBloque.Succeeded())
    {
        MallaBloque_Madera->SetStaticMesh(ObjetoMallaBloque.Object);
        MallaBloque_Madera->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
    }

    // Opcional: Puedes asignar un material de madera si tienes uno importado
    static ConstructorHelpers::FObjectFinder<UMaterial> MaterialMadera(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Wood_Walnut.M_Wood_Walnut'"));
    if (MaterialMadera.Succeeded())
    {
        MallaBloque_Madera->SetMaterial(0, MaterialMadera.Object);
    }
}

// Called when the game starts or when spawned
void ABloque_Madera::BeginPlay()
{
    Super::BeginPlay();
}

void ABloque_Madera::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}