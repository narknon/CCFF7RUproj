#pragma once
#include "CoreMinimal.h"
#include "EFairCameraShakeType.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FairAttackCameraShakeNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FAIR_API UFairAttackCameraShakeNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairCameraShakeType HitShakeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairCameraShakeType MissShakeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissScale;
    
    UFairAttackCameraShakeNotify();
};

