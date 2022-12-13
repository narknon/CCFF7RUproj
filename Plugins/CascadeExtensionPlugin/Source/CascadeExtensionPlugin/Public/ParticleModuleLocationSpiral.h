#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionVector.h"
#include "Distributions/DistributionFloat.h"
#include "AbstractParticleModule.h"
#include "ParticleModuleLocationSpiral.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleLocationSpiral : public UAbstractParticleModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector StartLocation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EllipseA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EllipseB;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat DiscHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FalloffFactor;
    
public:
    UParticleModuleLocationSpiral();
};

