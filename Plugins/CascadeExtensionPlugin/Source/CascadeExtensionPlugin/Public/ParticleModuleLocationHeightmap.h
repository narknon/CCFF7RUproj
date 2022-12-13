#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbstractParticleModule.h"
#include "ParticleModuleLocationHeightmap.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleLocationHeightmap : public UAbstractParticleModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* HeightmapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateWithTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SmoothUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox MapBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
public:
    UParticleModuleLocationHeightmap();
};

