#pragma once
#include "CoreMinimal.h"
#include "FairObjectDisplayConfig.generated.h"

USTRUCT(BlueprintType)
struct FFairObjectDisplayConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHide;
    
    FAIR_API FFairObjectDisplayConfig();
};

