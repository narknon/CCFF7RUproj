#pragma once
#include "CoreMinimal.h"
#include "FairFaceAssetPathData.h"
#include "FairFaceAssetDataList.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FFairFaceAssetDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairFaceAssetPathData> datas;
    
    FFairFaceAssetDataList();
};

