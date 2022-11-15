// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_StandbyPhone.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UBTTask_StandbyPhone : public UBTTaskNode
{
	GENERATED_BODY()
		public:
	    UBTTask_StandbyPhone();

	    protected:
	    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
