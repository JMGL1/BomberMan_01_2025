// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueOro.h"

ABloqueOro::ABloqueOro()
{
    PrimaryActorTick.bCanEverTick = true; // Habilita la actualización en cada frame
    PosicionInicial = GetActorLocation();
    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
}



void ABloqueOro::BeginPlay()
{
}

void ABloqueOro::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    float NuevaPosicionX = PosicionInicial.X + FMath::Sin(GetWorld()->GetTimeSeconds() * 1.0f) * 10.0f;
    SetActorLocation(FVector(NuevaPosicionX, GetActorLocation().Y, GetActorLocation().Z));
}