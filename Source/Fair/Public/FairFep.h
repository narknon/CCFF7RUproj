#pragma once
#include "CoreMinimal.h"
#include "FairEffectLeaf.h"
#include "FairFep.generated.h"

USTRUCT(BlueprintType)
struct FFairFep {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 originalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairEffectLeaf> leaf;
    
    FAIR_API FFairFep();
};

