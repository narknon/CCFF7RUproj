#pragma once
#include "CoreMinimal.h"
#include "FairMapChangeInfoForEvent_PrevStoryCounts.h"
#include "FairMapChangeInfoForEvent_PrevScriptNames.generated.h"

USTRUCT(BlueprintType)
struct FFairMapChangeInfoForEvent_PrevScriptNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFairMapChangeInfoForEvent_PrevStoryCounts> entries;
    
    FAIR_API FFairMapChangeInfoForEvent_PrevScriptNames();
};

