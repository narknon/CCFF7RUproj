#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FairLookAtBone.generated.h"

USTRUCT(BlueprintType)
struct FFairLookAtBone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator rotBetweenFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rotUsageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isInterpolationSkip;
    
    FAIR_API FFairLookAtBone();
};

