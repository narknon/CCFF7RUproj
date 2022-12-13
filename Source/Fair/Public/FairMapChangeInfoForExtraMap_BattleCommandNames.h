#pragma once
#include "CoreMinimal.h"
#include "FairMapChangeInfo_CameraParams.h"
#include "FairMapChangeInfoForExtraMap_BattleCommandNames.generated.h"

USTRUCT(BlueprintType)
struct FFairMapChangeInfoForExtraMap_BattleCommandNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFairMapChangeInfo_CameraParams> entries;
    
    FAIR_API FFairMapChangeInfoForExtraMap_BattleCommandNames();
};

