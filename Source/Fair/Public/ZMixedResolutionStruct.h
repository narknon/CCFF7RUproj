#pragma once
#include "CoreMinimal.h"
#include "EZMixedResolutionPlatform.h"
#include "ZMixedResolutionElement.h"
#include "ZMixedResolutionStruct.generated.h"

USTRUCT(BlueprintType)
struct FZMixedResolutionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZMixedResolutionPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZMixedResolutionElement Element;
    
    FAIR_API FZMixedResolutionStruct();
};

