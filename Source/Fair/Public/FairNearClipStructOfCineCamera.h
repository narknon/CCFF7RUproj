#pragma once
#include "CoreMinimal.h"
#include "FairNearClipStructOfCineCamera.generated.h"

USTRUCT(BlueprintType)
struct FFairNearClipStructOfCineCamera {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float NearClipPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableNearClipPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRestoreNearClipPlane;
    
    FAIR_API FFairNearClipStructOfCineCamera();
};

