#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionVector.h"
#include "Distributions/DistributionFloat.h"
#include "FairParticleTypeDataPostProcessBase.h"
#include "FairParticleTypeDataRadialBlur.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UFairParticleTypeDataRadialBlur : public UFairParticleTypeDataPostProcessBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool centerModeSwitch;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat BlurSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat BlurRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector BlurCenter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector BlurColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat BlurAlpha;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat BlurMask_Size;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat BlurMask_Alpha;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat BlurMask_Invert;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat For_Inv0_Inner_Radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat For_Inv0_Inner_int;
    
    UFairParticleTypeDataRadialBlur();
};

