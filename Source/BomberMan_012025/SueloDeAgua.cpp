// SueloDeAgua.cpp
#include "SueloDeAgua.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

ASueloDeAgua::ASueloDeAgua()
{
    PrimaryActorTick.bCanEverTick = false;

    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    RootComponent = Mesh;

    // Usa una malla básica (plano o cubo)
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'")); // o "/Engine/BasicShapes/Cube.Cube"
    if (MaterialBase.Succeeded())
    {
        Mesh->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
    }
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube")); // o "/Engine/BasicShapes/Plane.Plane"
    if (MeshAsset.Succeeded())
    {
        Mesh->SetStaticMesh(MeshAsset.Object);
        Mesh->SetRelativeScale3D(FVector(50.0f, 100.0f, 1.0f)); // Escala para que sea piso
    }

    // Configura la colisión correctamente
    Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    Mesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
    Mesh->SetCollisionObjectType(ECC_WorldStatic);
}

void ASueloDeAgua::BeginPlay()
{
	Super::BeginPlay();
}