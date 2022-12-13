#pragma once
#include "CoreMinimal.h"
#include "EZViewDistanceCategory.h"
#include "ZViewDistanceStruct.h"
#include "ZViewDistanceConfig.generated.h"

USTRUCT(BlueprintType)
struct FZViewDistanceConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZViewDistanceCategory VDCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZViewDistanceStruct> PlatformConfigList;
    
    FAIR_API FZViewDistanceConfig();
};

