// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque_Acero.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABloque_Acero::ABloque_Acero()
{
    PrimaryActorTick.bCanEverTick = false;

    Malla_Bloque_Acero = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla_Bloque_Acero"));
    Malla_Bloque_Acero->SetupAttachment(RootComponent);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloque(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

    if (ObjetoMallaBloque.Succeeded())
    {
        Malla_Bloque_Acero->SetStaticMesh(ObjetoMallaBloque.Object);
        Malla_Bloque_Acero->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
    }

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialBloque(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));
    if (MaterialBloque.Succeeded())
    {
        Malla_Bloque_Acero->SetMaterial(0, MaterialBloque.Object);
    }
}

// Called when the game starts or when spawned
void ABloque_Acero::BeginPlay()
{
    Super::BeginPlay();
}

void ABloque_Acero::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

