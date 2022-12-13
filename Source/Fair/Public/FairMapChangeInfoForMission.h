#pragma once
#include "CoreMinimal.h"
#include "FairMapChangeInfoForMission_PrevScriptNames.h"
#include "FairMapChangeInfoForMission.generated.h"

USTRUCT(BlueprintType)
struct FFairMapChangeInfoForMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFairMapChangeInfoForMission_PrevScriptNames> entries;
    
    FAIR_API FFairMapChangeInfoForMission();
};

