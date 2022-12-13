#pragma once
#include "CoreMinimal.h"
#include "EZDynamicResolutionPlatform.h"
#include "ZDynamicResolutionElement.h"
#include "ZDynamicResolutionStruct.generated.h"

USTRUCT(BlueprintType)
struct FZDynamicResolutionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZDynamicResolutionPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZDynamicResolutionElement Element;
    
    FAIR_API FZDynamicResolutionStruct();
};

