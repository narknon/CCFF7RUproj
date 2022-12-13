#pragma once
#include "CoreMinimal.h"
#include "ZDynamicResolutionElement.generated.h"

USTRUCT(BlueprintType)
struct FZDynamicResolutionElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FixedScreenPercentage;
    
    FAIR_API FZDynamicResolutionElement();
};

