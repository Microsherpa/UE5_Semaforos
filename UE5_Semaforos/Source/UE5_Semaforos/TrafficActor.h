// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "TrafficLigthActorComponent.h"
#include "Car.h"
#include "TrafficActor.generated.h"

UCLASS()
class UE5_SEMAFOROS_API ATrafficActor : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere, Category = "TrafficLight")
	UTrafficLigthActorComponent* TrafficLight;

	UPROPERTY(EditAnywhere, Category = "Collider")
	class USphereComponent* sphereCollider;

	UPROPERTY(EditAnywhere, Category = "Collider")
	float radius = 350;

	UPROPERTY(VisibleAnywhere, Category = "Array")
	TArray<ACar*> CarArray;

	UPROPERTY(EditAnywhere, Category = "Config")
	float waitTime = 0;

	ACar* Car;

	FTimerHandle TimerHandle_DelayedSpeedUpdate;
	// Sets default values for this actor's properties
	ATrafficActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual void NotifyActorBeginOverlap(AActor* OtherActor);

	UFUNCTION()
	virtual void NotifyActorEndOverlap(AActor* OtherActor);

	UFUNCTION()
	void ManageCars(ACar* Car, bool add);

	void DelayedSpeedUpdate();


};
