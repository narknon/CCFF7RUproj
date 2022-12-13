#pragma once
#include "CoreMinimal.h"
#include "ZDebugMotionNameInfo.generated.h"

USTRUCT(BlueprintType)
struct FZDebugMotionNameInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString motion_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_just_started;
    
    FAIR_API FZDebugMotionNameInfo();
};

