// Fill out your copyright notice in the Description page of Project Settings.


#include "ChooseNextWaypoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "PatrollingGuard.h"


EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	// Get Patrol Points
	auto ControlledPawn = OwnerComp.GetAIOwner()->GetPawn();
	auto PatrolPoints = Cast<APatrollingGuard>(ControlledPawn)->PatrolPoints;

	// Set Next Way Point
	auto BlackboardComp = OwnerComp.GetBlackboardComponent();
	auto IndexValue = BlackboardComp->GetValueAsInt(IndexKey.SelectedKeyName);
	BlackboardComp->SetValueAsObject(NextWayPoint.SelectedKeyName, PatrolPoints[IndexValue]);

	// Cycle Index
	auto NextIndex = (++IndexValue) % PatrolPoints.Num();
	BlackboardComp->SetValueAsInt(IndexKey.SelectedKeyName, NextIndex);

	return EBTNodeResult::Succeeded;
}