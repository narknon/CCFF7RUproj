#pragma once
#include "CoreMinimal.h"
#include "FairLipsyncAssetPathData.h"
#include "FairLipsyncAssetDataList.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FFairLipsyncAssetDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairLipsyncAssetPathData> datas;
    
    FFairLipsyncAssetDataList();
};

