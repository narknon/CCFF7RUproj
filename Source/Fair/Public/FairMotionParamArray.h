#pragma once
#include "CoreMinimal.h"
#include "FairMotionParam.h"
#include "FairMotionParamArray.generated.h"

USTRUCT(BlueprintType)
struct FFairMotionParamArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChrID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairMotionParam> MotParam;
    
    FAIR_API FFairMotionParamArray();
};

