#pragma once
#include "CoreMinimal.h"
#include "FairChrOverwritingForSwitchHandheld.h"
#include "FairChrOverwritingForSwitch.generated.h"

USTRUCT(BlueprintType)
struct FFairChrOverwritingForSwitch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableForcedLodModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 ForcedLodModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnablePerBoneMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool PerBoneMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableStackTranslucent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool EnableStackTranslucent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFairChrOverwritingForSwitchHandheld OverwriteOnlyHandheld;
    
    FAIR_API FFairChrOverwritingForSwitch();
};

