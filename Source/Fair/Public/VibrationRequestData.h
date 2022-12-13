#pragma once
#include "CoreMinimal.h"
#include "VibrationRequestData.generated.h"

class UForceFeedbackEffect;

USTRUCT(BlueprintType)
struct FVibrationRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* vibrationData;
    
    FAIR_API FVibrationRequestData();
};

