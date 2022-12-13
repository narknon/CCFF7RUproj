#pragma once
#include "CoreMinimal.h"
#include "FairMapChangeInfoForEvent_PrevScriptNames.h"
#include "FairMapChangeInfoForEvent_PrevMapNames.generated.h"

USTRUCT(BlueprintType)
struct FFairMapChangeInfoForEvent_PrevMapNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFairMapChangeInfoForEvent_PrevScriptNames> entries;
    
    FAIR_API FFairMapChangeInfoForEvent_PrevMapNames();
};

