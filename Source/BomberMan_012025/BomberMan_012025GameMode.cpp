// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025GameMode.h"
#include "BomberMan_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"

ABomberMan_012025GameMode::ABomberMan_012025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberMan_012025GameMode::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Bloque Spawning"));

	// Create a new Enemigo
	//ABloque* bloque01 = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(934.0f, 1370.0f, 100.0f), FRotator(0.0f, 0.0f, 0.0f));
	//ABloque* bloque02 = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(734.0f, 1370.0f, 50.0f), FRotator(0.0f, 0.0f, 0.0f));

	int numeroBloqueConMovimiento = 0;

	for (int i = 0; i < 20; i++)
	{

		ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(500.0f + i * 100 , 2500.0f - i * 100, 20.0f), FRotator(0.0f, 0.0f, 0.0f));
		
	
		if (bloque->bPuedeMoverse)
		{
			numeroBloqueConMovimiento++;
		}

		if (numeroBloqueConMovimiento >= 6
		{
			bloque->bPuedeMoverse = false;
		}

	}

}
