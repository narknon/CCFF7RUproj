#pragma once
#include "CoreMinimal.h"
#include "FairInputKey.h"
#include "FairInputAction.h"
#include "FairInputKeyMappingParam.generated.h"

USTRUCT(BlueprintType)
struct FFairInputKeyMappingParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FairInputAction Action;
    
    UPROPERTY(EditAnywhere)
    FairInputKey Key;
    
    FAIR_API FFairInputKeyMappingParam();
};

