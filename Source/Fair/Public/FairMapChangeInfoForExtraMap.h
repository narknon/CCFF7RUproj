#pragma once
#include "CoreMinimal.h"
#include "FairMapChangeInfoForExtraMap_BattleCommandNames.h"
#include "FairMapChangeInfoForExtraMap.generated.h"

USTRUCT(BlueprintType)
struct FFairMapChangeInfoForExtraMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFairMapChangeInfoForExtraMap_BattleCommandNames> entries;
    
    FAIR_API FFairMapChangeInfoForExtraMap();
};

