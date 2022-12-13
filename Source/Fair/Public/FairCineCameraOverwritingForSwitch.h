#pragma once
#include "CoreMinimal.h"
#include "FairCineCameraOverwritingForSwitchHandheld.h"
#include "FairCineCameraOverwritingForSwitch.generated.h"

USTRUCT(BlueprintType)
struct FFairCineCameraOverwritingForSwitch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableForceDisableDOF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool ForceDisableDOF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFairCineCameraOverwritingForSwitchHandheld OverwriteOnlyHandheld;
    
    FAIR_API FFairCineCameraOverwritingForSwitch();
};

