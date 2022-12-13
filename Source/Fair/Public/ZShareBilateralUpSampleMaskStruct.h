#pragma once
#include "CoreMinimal.h"
#include "EZShareBilateralUpSampleMaskPlatform.h"
#include "ZShareBilateralUpSampleMaskStruct.generated.h"

USTRUCT(BlueprintType)
struct FZShareBilateralUpSampleMaskStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZShareBilateralUpSampleMaskPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShareBilateralUpSampleMaskEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShadowHalfRes;
    
    FAIR_API FZShareBilateralUpSampleMaskStruct();
};

