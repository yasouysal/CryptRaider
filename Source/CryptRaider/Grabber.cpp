// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"

#include "Engine/World.h"
#include "GameFramework/Controller.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"


// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector Start = GetComponentLocation();
	FVector End = GetComponentLocation() + GetForwardVector() * MaxGrabDistance;

	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false);
	/*
	FRotator Rotation = GetComponentRotation();

	FRotator ControlRotation = UGameplayStatics::GetPlayerPawn(GetWorld(), 0)->GetController()->GetControlRotation();

	FVector ForwardVector = ControlRotation.Vector();
	
	UE_LOG(LogTemp, Display, TEXT("Rotation is %s"), *Rotation.ToString());

	UE_LOG(LogTemp, Display, TEXT("Control Rotation is %s"), *ControlRotation.ToString());

	UWorld* World = GetWorld();

	UE_LOG(LogTemp, Display, TEXT("time elapsed = %f"), World->TimeSeconds);
	*/


}

