#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FairBattleMoveBlendSpace.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleMoveBlendSpace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Points;
    
    FAIR_API FFairBattleMoveBlendSpace();
};

