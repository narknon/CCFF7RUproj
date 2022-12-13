#pragma once
#include "CoreMinimal.h"
#include "FairMapChangeInfoForEvent_PrevPlaceIds.h"
#include "FairMapChangeInfoForEvent_PrevStoryCounts.generated.h"

USTRUCT(BlueprintType)
struct FFairMapChangeInfoForEvent_PrevStoryCounts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFairMapChangeInfoForEvent_PrevPlaceIds> entries;
    
    FAIR_API FFairMapChangeInfoForEvent_PrevStoryCounts();
};

