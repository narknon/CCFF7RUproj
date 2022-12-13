#pragma once
#include "CoreMinimal.h"
#include "FairMapChangeInfo_CameraParams.h"
#include "FairMapChangeInfoForNormal_PrevPlaceIds.generated.h"

USTRUCT(BlueprintType)
struct FFairMapChangeInfoForNormal_PrevPlaceIds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFairMapChangeInfo_CameraParams> entries;
    
    FAIR_API FFairMapChangeInfoForNormal_PrevPlaceIds();
};

