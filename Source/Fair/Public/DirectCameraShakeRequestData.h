#pragma once
#include "CoreMinimal.h"
#include "DirectCameraShakeRequestData.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FDirectCameraShakeRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* shakeData;
    
    FAIR_API FDirectCameraShakeRequestData();
};

