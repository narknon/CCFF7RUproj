#pragma once
#include "CoreMinimal.h"
#include "Particles/Location/ParticleModuleLocationBase.h"
#include "FairParticleModuleCameraEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UFairParticleModuleCameraEffect : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UFairParticleModuleCameraEffect();
};

