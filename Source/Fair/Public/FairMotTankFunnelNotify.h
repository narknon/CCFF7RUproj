#pragma once
#include "CoreMinimal.h"
#include "FairMotEventNotify.h"
#include "FairMotTankFunnelNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FAIR_API UFairMotTankFunnelNotify : public UFairMotEventNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 limitStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 effectId;
    
    UFairMotTankFunnelNotify();
};

