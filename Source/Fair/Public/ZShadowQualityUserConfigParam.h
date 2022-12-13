#pragma once
#include "CoreMinimal.h"
#include "ZShadowQualityUserConfigParam.generated.h"

USTRUCT(BlueprintType)
struct FZShadowQualityUserConfigParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 shadow_quality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 csm_max_cascades;
    
    FAIR_API FZShadowQualityUserConfigParam();
};

