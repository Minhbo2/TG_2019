// Fill out your copyright notice in the Description page of Project Settings.


#include "Tile.h"

// Sets default values
ATile::ATile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATile::PlaceActors()
{
	// fbox type, perfect for a tile box, chapter 314 for details
	// calculating for min and max values for box:
	// center of tile BP is (0,0,0)
	// taking in consideration of the side of the floor, current size is 2000 wide and 2000 long
	// Min: left most cornern from the center, FVector(0,-1000,0)
	// Max: top right most corner FVector(2000, 1000, 0)
	FVector Min = FVector(0, -1000, 0);
	FVector Max = FVector(2000, 1000, 0);
	FBox Bounds(Min, Max);
	FVector SpawnPoint = FMath::RandPointInBox(Bounds);

	UE_LOG(LogTemp, Warning, TEXT("SpawnPoint is: %s"), *SpawnPoint.ToCompactString());
}