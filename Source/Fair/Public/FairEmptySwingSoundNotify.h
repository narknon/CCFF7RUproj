#pragma once
#include "CoreMinimal.h"
#include "EmptySwingSoundParam.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FairEmptySwingSoundNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FAIR_API UFairEmptySwingSoundNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 missSoundNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 missProbNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEmptySwingSoundParam> emptySwingSoundList;
    
    UFairEmptySwingSoundNotify();
};

