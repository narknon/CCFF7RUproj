#pragma once
#include "CoreMinimal.h"
#include "ZScreenSpaceReflectionsConfig.h"
#include "FairScreenSpaceReflectionsSystemConfig.generated.h"

USTRUCT(BlueprintType)
struct FFairScreenSpaceReflectionsSystemConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZScreenSpaceReflectionsConfig Config;
    
    FAIR_API FFairScreenSpaceReflectionsSystemConfig();
};

