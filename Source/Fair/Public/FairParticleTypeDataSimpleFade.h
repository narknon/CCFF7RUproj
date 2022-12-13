#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionVector.h"
#include "Distributions/DistributionFloat.h"
#include "FairParticleTypeDataPostProcessBase.h"
#include "FairParticleTypeDataSimpleFade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UFairParticleTypeDataSimpleFade : public UFairParticleTypeDataPostProcessBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat GlobalRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat BlendRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector Color;
    
    UFairParticleTypeDataSimpleFade();
};

