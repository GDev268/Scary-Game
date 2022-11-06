// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Mesh"));
	RootComponent = MyMesh;

	isClosed = true;

	Opening = false;
	Closing = false;

	PosV = 0.0f;
	MaxDegree = 0.0f;
	AddRotation = 0.0f;
	PosNeg = 0.0f;
	DoorNextRotation = 0.0f;
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Opening)
	{
		OpenDoor(DeltaTime);
	}

	if (Closing)
	{
		CloseDoor(DeltaTime);
	}
}

void ADoor::OpenDoor(float dt)
{
	DoorNextRotation = MyMesh->GetRelativeRotation().Yaw;

	AddRotation = PosNeg * dt * 80;

	if (FMath::IsNearlyEqual(DoorNextRotation, MaxDegree, 1.5f))
	{
		Closing = false;
		Opening = false;
	}
	else if (Opening)
	{
		FRotator NewRotation = FRotator(0.0f, AddRotation, 0.0f);
		MyMesh->AddRelativeRotation(FQuat(NewRotation), false, 0, ETeleportType::None);
	}
}

void ADoor::CloseDoor(float dt)
{
	DoorNextRotation = MyMesh->GetRelativeRotation().Yaw;

	if (DoorNextRotation > 0)
	{
		AddRotation = -dt * 80;
	}
	else
	{
		AddRotation = dt * 80;
	}

	if (FMath::IsNearlyEqual(DoorNextRotation, 0.0f, 1.5f))
	{
		Closing = false;
		Opening = false;
	}
	else if (Closing)
	{
		FRotator NewRotation = FRotator(0.0f, AddRotation, 0.0f);
		MyMesh->AddRelativeRotation(FQuat(NewRotation), false, 0, ETeleportType::None);
	}
}

void ADoor::ToggleDoor(FVector ForwardVector)
{
	PosV = FVector::DotProduct(MyMesh->GetForwardVector(), ForwardVector);

	PosNeg = FMath::Sign(PosV);

	MaxDegree = PosNeg * 90.0f;

	if (isClosed) {
		isClosed = false;
		Closing = false;
		Opening = true;

	}
	else {
		Opening = false;
		isClosed = true;
		Closing = true;
	}
}

