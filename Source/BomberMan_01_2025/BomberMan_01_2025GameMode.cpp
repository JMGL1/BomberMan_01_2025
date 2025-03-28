// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_01_2025GameMode.h"
#include "BomberMan_01_2025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque_Acero.h"
#include "Bloque_Madera.h"
#include "Bloque_Ladrillo.h"
#include "Bloque_Concreto.h"

ABomberMan_01_2025GameMode::ABomberMan_01_2025GameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
//aplicar todo esto en Tarray en gamemode.h, esto esta mal
//Buscar como saber la ubicacion de los bloques para ver como destruirlos y 
//saber en que coordenada esta el actor y su ubicacion
void ABomberMan_01_2025GameMode::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Generando Muros y Bloques"));

	// Matriz de bloques (0: Vacio, 1: Madera, 2: Ladrillo, 3: Concreto, 4: Acero)
	int Matriz[13][15] = {
		{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
		{4, 0, 1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 0, 0, 0, 0, 0, 2, 0, 1, 0, 2, 0, 1, 0, 4},
		{4, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 0, 0, 0, 0, 0, 3, 0, 1, 0, 3, 0, 3, 0, 4},
		{4, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 1, 2, 1, 2, 3, 3, 0, 4, 0, 1, 0, 2, 0, 4},
		{4, 0, 3, 0, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 0, 0, 0, 0, 0, 2, 0, 3, 0, 2, 0, 1, 0, 4},
		{4, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 0, 0, 0, 0, 0, 1, 0, 2, 0, 2, 0, 1, 0, 4},
		{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}
	};

	float BloqueStartX = 250.0f;
	float BloqueStartY = 250.0f;
	float BloqueStartZ = 0.0f;
	float BloqueOffset = 200.0f;

	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			FVector BloqueLocation = FVector(BloqueStartX + i * BloqueOffset, BloqueStartY + j * BloqueOffset, BloqueStartZ);

			// Verificamos el tipo de bloque a generar
			switch (Matriz[i][j])
			{
			case 1:
				SpawnBloque<ABloque_Madera>(BloqueLocation);
				break;
			case 2:
				SpawnBloque<ABloque_Ladrillo>(BloqueLocation);
				break;
			case 3:
				SpawnBloque<ABloque_Concreto>(BloqueLocation);
				break;
			case 4:
				SpawnBloque<ABloque_Acero>(BloqueLocation);
				break;
			default:
				break;
			}
		}
	}
}

template<typename T>
void ABomberMan_01_2025GameMode::SpawnBloque(FVector Location)
{
	T* Bloque = GetWorld()->SpawnActor<T>(T::StaticClass(), Location, FRotator(0.0f, 0.0f, 0.0f));
	if (Bloque)
	{
		Bloque->SetActorScale3D(FVector(2.0f, 2.0f, 3.0f));
	}
}