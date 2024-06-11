// Fill out your copyright notice in the Description page of Project Settings.


#include "TrafficActor.h"

// Sets default values
ATrafficActor::ATrafficActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Car = NULL;

	sphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	sphereCollider->InitSphereRadius(radius);
	sphereCollider->SetupAttachment(RootComponent);

	light = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));
	light->SetupAttachment(sphereCollider);
	light->SetLightColor(FLinearColor::Green);
	light->SourceRadius = 350;
	light->AttenuationRadius = 350;
	light->IntensityUnits = ELightUnits::Lumens;
	light->Intensity = 1000;
	light->CastShadows = false;
	light->SetVisibility(true);

	light->AddLocalOffset(FVector(0, 0, 50));
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

	if (CarArray.Num() == 0) 
		SwitchColor(FLinearColor::Green);
	else 
		SwitchColor(FLinearColor::Red);

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

void ATrafficActor::SwitchColor(FLinearColor color)
{
	light->SetLightColor(color);
}

void ATrafficActor::DelayedSpeedUpdate()
{
	CarArray[0]->currentSpeed = CarArray[0]->speed;
}

