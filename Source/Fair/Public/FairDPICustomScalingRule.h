#pragma once
#include "CoreMinimal.h"
#include "Engine/DPICustomScalingRule.h"
#include "FairDPICustomScalingRule.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairDPICustomScalingRule : public UDPICustomScalingRule {
    GENERATED_BODY()
public:
    UFairDPICustomScalingRule();
};

