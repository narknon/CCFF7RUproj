#pragma once
#include "CoreMinimal.h"
#include "FairCharacterLightConfig.generated.h"

USTRUCT(BlueprintType)
struct FFairCharacterLightConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUse;
    
    FAIR_API FFairCharacterLightConfig();
};

