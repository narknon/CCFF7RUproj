#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionFloat.h"
#include "FairParticleTypeDataPostProcessBase.h"
#include "FairParticleTypeDataNegaPosiInvert.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UFairParticleTypeDataNegaPosiInvert : public UFairParticleTypeDataPostProcessBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat GlobalRate;
    
    UFairParticleTypeDataNegaPosiInvert();
};

