#pragma once
#include "CoreMinimal.h"
#include "FairDebugLevelInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairDebugLevelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> level_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName level_asset_path;
    
    FAIR_API FFairDebugLevelInfo();
};

