#pragma once
#include "CoreMinimal.h"
#include "FairTipsImageFileName.generated.h"

USTRUCT(BlueprintType)
struct FFairTipsImageFileName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString file_name;
    
    FAIR_API FFairTipsImageFileName();
};

