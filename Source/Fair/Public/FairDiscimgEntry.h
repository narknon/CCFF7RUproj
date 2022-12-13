#pragma once
#include "CoreMinimal.h"
#include "EFairDiscimgDataType.h"
#include "FairDiscimgEntry.generated.h"

USTRUCT(BlueprintType)
struct FFairDiscimgEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 discimg_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString asset_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairDiscimgDataType data_type;
    
    FAIR_API FFairDiscimgEntry();
};

