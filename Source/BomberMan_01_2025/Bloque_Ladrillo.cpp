// Fill out your copyright notice in the Description page of Project Settings.

#include "Bloque_Ladrillo.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABloque_Ladrillo::ABloque_Ladrillo()
{
    PrimaryActorTick.bCanEverTick = false;

    MallaBloque_Ladrillo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
    MallaBloque_Ladrillo->SetupAttachment(RootComponent);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloque(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

    if (ObjetoMallaBloque.Succeeded())
    {
        MallaBloque_Ladrillo->SetStaticMesh(ObjetoMallaBloque.Object);
        MallaBloque_Ladrillo->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
    }

    static ConstructorHelpers::FObjectFinder<UMaterial> MaterialLadrillo(TEXT("/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New"));
    if (MaterialLadrillo.Succeeded())
    {
        MallaBloque_Ladrillo->SetMaterial(0, MaterialLadrillo.Object);
    }
}

// Called when the game starts or when spawned
void ABloque_Ladrillo::BeginPlay()
{
    Super::BeginPlay();
}

void ABloque_Ladrillo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}