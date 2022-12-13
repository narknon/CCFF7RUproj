#pragma once
#include "CoreMinimal.h"
#include "FairEffectInformation.h"
#include "FairEffectLeaf.generated.h"

USTRUCT(BlueprintType)
struct FFairEffectLeaf {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 originalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairEffectInformation> effect;
    
    FAIR_API FFairEffectLeaf();
};

