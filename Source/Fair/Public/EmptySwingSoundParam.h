#pragma once
#include "CoreMinimal.h"
#include "EmptySwingSoundParam.generated.h"

USTRUCT(BlueprintType)
struct FEmptySwingSoundParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 commandID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 missSoundNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 missProbNumber;
    
    FAIR_API FEmptySwingSoundParam();
};

