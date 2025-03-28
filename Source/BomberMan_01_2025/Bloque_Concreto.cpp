// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque_Concreto.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABloque_Concreto::ABloque_Concreto()
{
    PrimaryActorTick.bCanEverTick = false;

    MallaBloque_Concreto = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
    MallaBloque_Concreto->SetupAttachment(RootComponent);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloque(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

    if (ObjetoMallaBloque.Succeeded())
    {
        MallaBloque_Concreto->SetStaticMesh(ObjetoMallaBloque.Object);
        MallaBloque_Concreto->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
    }

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialBloque(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Concrete_Grime.M_Concrete_Grime'"));
    if (MaterialBloque.Succeeded())
    {
        MallaBloque_Concreto->SetMaterial(0, MaterialBloque.Object);
    }
}

// Called when the game starts or when spawned
void ABloque_Concreto::BeginPlay()
{
    Super::BeginPlay();
}

void ABloque_Concreto::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}