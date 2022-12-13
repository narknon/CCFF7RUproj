#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FairCheckCutInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairCheckCutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraEyePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraEyeRef;
    
    FAIR_API FFairCheckCutInfo();
};

