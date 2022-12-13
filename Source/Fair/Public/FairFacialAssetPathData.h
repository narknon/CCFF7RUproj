#pragma once
#include "CoreMinimal.h"
#include "FairFacialAssetPathData.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FFairFacialAssetPathData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName asset_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 expression;
    
    FFairFacialAssetPathData();
};

