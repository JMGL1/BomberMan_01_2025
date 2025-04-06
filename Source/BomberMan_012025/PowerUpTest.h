// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "PowerUpTest.generated.h"
UCLASS()
class BOMBERMAN_012025_API APowerUpTest : public AActor
{
	GENERATED_BODY()
	
public:
    APowerUpTest();

protected:
    virtual void BeginPlay() override;

    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
        bool bFromSweep, const FHitResult& SweepResult);

private:
    UPROPERTY(VisibleAnywhere)
    UCapsuleComponent* CapsuleComponent;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* MeshComponent;

    UPROPERTY(EditAnywhere)
    float SpeedBoostAmount = 1000.0f;

    UPROPERTY(EditAnywhere)
    float SpeedBoostDuration = 5.0f;
};