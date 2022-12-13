#pragma once
#include "CoreMinimal.h"
#include "FairFacialAssetPathData.h"
#include "FairLipsyncAssetPathData.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FFairLipsyncAssetPathData : public FFairFacialAssetPathData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lipsync_index;
    
    FFairLipsyncAssetPathData();
};

