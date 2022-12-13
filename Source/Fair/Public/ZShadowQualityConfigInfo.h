#pragma once
#include "CoreMinimal.h"
#include "EZShadowQualityConfigRShadowQuality.h"
#include "ZShadowQualityConfigInfo.generated.h"

USTRUCT(BlueprintType)
struct FZShadowQualityConfigInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 csm_max_cascades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool cached_shadows_cast_from_movable_primitives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float csm_shadow_distance_fadeout_multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool preshadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZShadowQualityConfigRShadowQuality r_shadow_quality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 shadow_max_csm_resolution;
    
    FAIR_API FZShadowQualityConfigInfo();
};

