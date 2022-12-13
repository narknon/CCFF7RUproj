#pragma once
#include "CoreMinimal.h"
#include "FairMapChangeInfo_CameraParams.h"
#include "FairMapChangeInfoForMission_PrevScriptNames.generated.h"

USTRUCT(BlueprintType)
struct FFairMapChangeInfoForMission_PrevScriptNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFairMapChangeInfo_CameraParams> entries;
    
    FAIR_API FFairMapChangeInfoForMission_PrevScriptNames();
};

