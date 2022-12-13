#pragma once
#include "CoreMinimal.h"
#include "ZLayeredGameSpeed.generated.h"

USTRUCT(BlueprintType)
struct FZLayeredGameSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameSpeed;
    
    FAIR_API FZLayeredGameSpeed();
};

