#pragma once
#include "CoreMinimal.h"
#include "EZGraphicQualityType.h"
#include "ZGraphicQualityConfigParam.generated.h"

USTRUCT(BlueprintType)
struct FZGraphicQualityConfigParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZGraphicQualityType texture_quality_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZGraphicQualityType shadow_quality_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZGraphicQualityType anti_aliasing_quality_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ambient_occlusion_flag;
    
    FAIR_API FZGraphicQualityConfigParam();
};

