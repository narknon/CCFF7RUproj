#pragma once
#include "CoreMinimal.h"
#include "FairCineCameraOverwritingForSwitchHandheld.generated.h"

USTRUCT(BlueprintType)
struct FFairCineCameraOverwritingForSwitchHandheld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableForceDisableDOF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool ForceDisableDOF;
    
    FAIR_API FFairCineCameraOverwritingForSwitchHandheld();
};

