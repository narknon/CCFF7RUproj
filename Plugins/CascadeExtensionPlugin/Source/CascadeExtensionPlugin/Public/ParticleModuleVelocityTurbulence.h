#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbstractParticleModule.h"
#include "ParticleModuleVelocityTurbulence.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleVelocityTurbulence : public UAbstractParticleModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVelocity;
    
public:
    UParticleModuleVelocityTurbulence();
};

