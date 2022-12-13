#pragma once
#include "CoreMinimal.h"
#include "EAddContentsType.h"
#include "AddContentsRowPresentInfo.generated.h"

USTRUCT(BlueprintType)
struct FAddContentsRowPresentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAddContentsType DLCType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    FAIR_API FAddContentsRowPresentInfo();
};

