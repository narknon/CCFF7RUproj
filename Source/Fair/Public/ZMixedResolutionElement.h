#pragma once
#include "CoreMinimal.h"
#include "EZMixedResolutionRenderingType.h"
#include "ZMixedResolutionElement.generated.h"

USTRUCT(BlueprintType)
struct FZMixedResolutionElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZMixedResolutionRenderingType RenderingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    FAIR_API FZMixedResolutionElement();
};

