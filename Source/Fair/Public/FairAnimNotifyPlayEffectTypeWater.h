#pragma once
#include "CoreMinimal.h"
#include "ENotifyGroundTypeOfWater.h"
#include "GroundTypeOfWaterParticles.h"
#include "FairAnimNotifyPlayParticleEffect.h"
#include "FairAnimNotifyPlayEffectTypeWater.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FAIR_API UFairAnimNotifyPlayEffectTypeWater : public UFairAnimNotifyPlayParticleEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ENotifyGroundTypeOfWater GrountType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroundTypeOfWaterParticles WaterParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSuppress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsingAbsolute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SwitchDepth;
    
    UFairAnimNotifyPlayEffectTypeWater();
};

