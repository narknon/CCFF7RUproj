#pragma once
#include "CoreMinimal.h"
#include "ZPostProcessUserInfo.generated.h"

USTRUCT(BlueprintType)
struct FZPostProcessUserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 handle_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 priority_level;
    
    FAIR_API FZPostProcessUserInfo();
};

