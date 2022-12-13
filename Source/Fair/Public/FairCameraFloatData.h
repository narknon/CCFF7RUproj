#pragma once
#include "CoreMinimal.h"
#include "FairCameraFloatData.generated.h"

USTRUCT(BlueprintType)
struct FFairCameraFloatData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fValue;
    
    FAIR_API FFairCameraFloatData();
};

