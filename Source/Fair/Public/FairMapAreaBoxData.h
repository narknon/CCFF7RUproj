#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FairMapAreaBoxData.generated.h"

USTRUCT(BlueprintType)
struct FFairMapAreaBoxData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString noteText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Size;
    
    FAIR_API FFairMapAreaBoxData();
};

