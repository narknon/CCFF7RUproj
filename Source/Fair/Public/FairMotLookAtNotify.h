#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FairMotLookAtNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FAIR_API UFairMotLookAtNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnable;
    
    UFairMotLookAtNotify();
};

