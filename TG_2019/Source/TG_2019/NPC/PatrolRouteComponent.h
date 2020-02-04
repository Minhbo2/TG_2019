// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PatrolRouteComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TG_2019_API UPatrolRouteComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	TArray<AActor*> GetPatrolPoints() const { return PatrolPoints; };

private:

	UPROPERTY(EditInstanceOnly, Category = PatrolPoints)
	TArray<AActor*> PatrolPoints;
};
