#pragma once
#include "CoreMinimal.h"
#include "FairCullingStructOfCineCamera.generated.h"

USTRUCT(BlueprintType)
struct FFairCullingStructOfCineCamera {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsCullingDisabled;
    
    FAIR_API FFairCullingStructOfCineCamera();
};

