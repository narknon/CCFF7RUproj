#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDistanceWeight.h"
#include "AbstractParticleModule.h"
#include "ParticleModuleForcePoints.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleForcePoints : public UAbstractParticleModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDistanceWeight::Type> SeparationDistanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DynamicForcePointProviderName;
    
public:
    UParticleModuleForcePoints();
};

