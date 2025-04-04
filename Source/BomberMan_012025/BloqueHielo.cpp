// Fill out your copyright notice in the Description page of Project Settings.

#include "BloqueHielo.h"
#include "GameFramework/Actor.h" // Agregar esta línea para incluir la definición de GetActorHiddenInGame

ABloqueHielo::ABloqueHielo()
{
    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Panel.M_Tech_Panel'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
}

void ABloqueHielo::BeginPlay()
{
    Super::BeginPlay();
    GetWorld()->GetTimerManager().SetTimer(TimerVisibilidad, this, &ABloqueHielo::AlternarVisibilidad, 5.0f, true);
}

void ABloqueHielo::AlternarVisibilidad()  
{  
  bool EstadoActual = IsHidden(); // Cambiar GetActorHiddenInGame() por IsHidden()
  SetActorHiddenInGame(!EstadoActual);  
}