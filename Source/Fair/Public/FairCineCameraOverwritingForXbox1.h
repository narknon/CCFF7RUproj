#pragma once
#include "CoreMinimal.h"
#include "FairCineCameraOverwritingForXbox1.generated.h"

USTRUCT(BlueprintType)
struct FFairCineCameraOverwritingForXbox1 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableForceDisableDOF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool ForceDisableDOF;
    
    FAIR_API FFairCineCameraOverwritingForXbox1();
};

