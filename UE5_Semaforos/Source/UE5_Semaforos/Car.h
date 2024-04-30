// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"

#include "Car.generated.h"

UCLASS()
class UE5_SEMAFOROS_API ACar : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACar();

	UPROPERTY(EditAnywhere, Category = "Movement")
	FVector direction;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float speed;

	UPROPERTY()
	UBoxComponent* BoxCollider;
	UPROPERTY()
	UStaticMeshComponent* CubeMesh;
	UPROPERTY()
	USceneComponent* DefaultSceneRoot;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION()
	void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


};
