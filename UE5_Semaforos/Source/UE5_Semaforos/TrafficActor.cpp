// Fill out your copyright notice in the Description page of Project Settings.


#include "TrafficActor.h"

// Sets default values
ATrafficActor::ATrafficActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Car = NULL;

	TrafficLight = CreateDefaultSubobject<UTrafficLigthActorComponent>(TEXT("TrafficLight"));
	RootComponent = Cast<USceneComponent>(TrafficLight);

	sphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	sphereCollider->InitSphereRadius(radius);
	sphereCollider->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ATrafficActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATrafficActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CarArray.Num() == 0) TrafficLight->SwitchColor(FLinearColor::Green);
	else TrafficLight->SwitchColor(FLinearColor::Red);

}

void ATrafficActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Car = Cast<ACar>(OtherActor);

	if (Car) {

		ManageCars(Car, true);

		if (CarArray.Num() > 1) Car->currentSpeed = 0;
	}

}

void ATrafficActor::NotifyActorEndOverlap(AActor* OtherActor)
{
	Car = Cast<ACar>(OtherActor);

	if (Car) ManageCars(Car, false);

}

void ATrafficActor::ManageCars(ACar* newCar, bool add)
{
	if (add)
		CarArray.Emplace(newCar);
	else 
	{
		CarArray.Remove(newCar);
		if (CarArray.Num() != 0) 
		{
			if (waitTime > 0) 
				GetWorld()->GetTimerManager().SetTimer(TimerHandle_DelayedSpeedUpdate, this, &ATrafficActor::DelayedSpeedUpdate, waitTime, false);
			else 
				CarArray[0]->currentSpeed = CarArray[0]->speed;
		}
	}
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, FString::Printf(TEXT("Cars in array: %d"), CarArray.Num()));

}

void ATrafficActor::DelayedSpeedUpdate()
{
	CarArray[0]->currentSpeed = CarArray[0]->speed;
}

