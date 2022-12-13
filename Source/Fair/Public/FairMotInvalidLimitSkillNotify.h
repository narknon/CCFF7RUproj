#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FairMotInvalidLimitSkillNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FAIR_API UFairMotInvalidLimitSkillNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool setInvalid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool setPlayer;
    
    UFairMotInvalidLimitSkillNotify();
};

