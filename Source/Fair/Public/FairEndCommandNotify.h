#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FairEndCommandNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FAIR_API UFairEndCommandNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool endCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool moveEnd;
    
    UFairEndCommandNotify();
};

