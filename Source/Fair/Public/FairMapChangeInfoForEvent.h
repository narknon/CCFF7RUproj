#pragma once
#include "CoreMinimal.h"
#include "FairMapChangeInfoForEvent_PrevMapNames.h"
#include "FairMapChangeInfoForEvent.generated.h"

USTRUCT(BlueprintType)
struct FFairMapChangeInfoForEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFairMapChangeInfoForEvent_PrevMapNames> entries;
    
    FAIR_API FFairMapChangeInfoForEvent();
};

