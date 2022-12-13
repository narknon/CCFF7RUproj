#pragma once
#include "CoreMinimal.h"
#include "FairCameraNoData.generated.h"

USTRUCT(BlueprintType)
struct FFairCameraNoData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    uint32 No;
    
    FAIR_API FFairCameraNoData();
};

