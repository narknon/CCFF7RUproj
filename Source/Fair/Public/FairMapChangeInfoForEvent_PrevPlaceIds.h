#pragma once
#include "CoreMinimal.h"
#include "FairMapChangeInfo_CameraParams.h"
#include "FairMapChangeInfoForEvent_PrevPlaceIds.generated.h"

USTRUCT(BlueprintType)
struct FFairMapChangeInfoForEvent_PrevPlaceIds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFairMapChangeInfo_CameraParams> entries;
    
    FAIR_API FFairMapChangeInfoForEvent_PrevPlaceIds();
};

