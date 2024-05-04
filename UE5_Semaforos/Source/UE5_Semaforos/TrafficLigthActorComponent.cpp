// Fill out your copyright notice in the Description page of Project Settings.


#include "TrafficLigthActorComponent.h"

// Sets default values for this component's properties
UTrafficLigthActorComponent::UTrafficLigthActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	light = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));
	light->SetupAttachment(GetOwner()->GetRootComponent());

	light->SetLightColor(FLinearColor::Green);
	light->SourceRadius = 350;
	light->AttenuationRadius = 350;
	light->IntensityUnits = ELightUnits::Lumens;
	light->Intensity = 1000;
	light->CastShadows = false;
	light->SetVisibility(true);

	light->AddLocalOffset(FVector(0, 0, 50));

}


// Called when the game starts
void UTrafficLigthActorComponent::BeginPlay()
{
	
}


// Called every frame
void UTrafficLigthActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
}

void UTrafficLigthActorComponent::SwitchColor(FLinearColor color)
{
	light->SetLightColor(color);
}

