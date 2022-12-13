#pragma once
#include "CoreMinimal.h"
#include "ZAmbientOcclusionElement.generated.h"

USTRUCT(BlueprintType)
struct FZAmbientOcclusionElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDistanceScale;
    
    FAIR_API FZAmbientOcclusionElement();
};

