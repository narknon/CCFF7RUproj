#pragma once
#include "CoreMinimal.h"
#include "EZCutSceneOptimizeCategory.h"
#include "ZCutSceneOptimizeStruct.h"
#include "ZCutSceneOptimizeConfig.generated.h"

USTRUCT(BlueprintType)
struct FZCutSceneOptimizeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZCutSceneOptimizeCategory VDCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZCutSceneOptimizeStruct> PlatformConfigList;
    
    FAIR_API FZCutSceneOptimizeConfig();
};

