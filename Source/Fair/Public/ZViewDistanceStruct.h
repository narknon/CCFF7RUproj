#pragma once
#include "CoreMinimal.h"
#include "EZViewDistancePlatform.h"
#include "ZViewDistanceStruct.generated.h"

USTRUCT(BlueprintType)
struct FZViewDistanceStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZViewDistancePlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    FAIR_API FZViewDistanceStruct();
};

