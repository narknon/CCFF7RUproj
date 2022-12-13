#pragma once
#include "CoreMinimal.h"
#include "EZAntiAliasingConfigSampleCount.h"
#include "EZAntiAliasingConfigPostProcessQuality.h"
#include "Engine/Scene.h"
#include "ZAntiAliasingConfigInfo.generated.h"

USTRUCT(BlueprintType)
struct FZAntiAliasingConfigInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAntiAliasingMethod> anti_aliasing_method;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZAntiAliasingConfigSampleCount taa_sample_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float taa_filter_size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool taa_catmull_rom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float taa_current_frame_weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool taa_upsample_filtered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float taa_history_screen_percentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZAntiAliasingConfigPostProcessQuality post_process_aa_quality;
    
    FAIR_API FZAntiAliasingConfigInfo();
};

