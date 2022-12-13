#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbstractParticleModule.h"
#include "ParticleModuleLocationDonut.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleLocationDonut : public UAbstractParticleModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SurfaceOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFlat;
    
public:
    UParticleModuleLocationDonut();
};

