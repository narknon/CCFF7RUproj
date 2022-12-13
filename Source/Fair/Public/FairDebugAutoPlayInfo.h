#pragma once
#include "CoreMinimal.h"
#include "EFairDebugAutoPlayAction.h"
#include "FairDebugAutoPlayInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairDebugAutoPlayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairDebugAutoPlayAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    FAIR_API FFairDebugAutoPlayInfo();
};

