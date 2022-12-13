#pragma once
#include "CoreMinimal.h"
#include "FairInputKey.h"
#include "FairInputAction.h"
#include "FairInputKeyMappingPCParam.generated.h"

USTRUCT(BlueprintType)
struct FFairInputKeyMappingPCParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FairInputAction Action;
    
    UPROPERTY(EditAnywhere)
    FairInputKey MainKey;
    
    UPROPERTY(EditAnywhere)
    FairInputKey SubKey;
    
    UPROPERTY(EditAnywhere)
    FairInputKey MouseKey;
    
    FAIR_API FFairInputKeyMappingPCParam();
};

