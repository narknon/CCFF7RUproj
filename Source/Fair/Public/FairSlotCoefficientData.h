#pragma once
#include "CoreMinimal.h"
#include "FairSlotCoefficientData.generated.h"

USTRUCT(BlueprintType)
struct FFairSlotCoefficientData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoefficientSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecifiedSpeed;
    
    FAIR_API FFairSlotCoefficientData();
};

