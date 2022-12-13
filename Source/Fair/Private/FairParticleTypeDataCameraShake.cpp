#include "FairParticleTypeDataCameraShake.h"

UFairParticleTypeDataCameraShake::UFairParticleTypeDataCameraShake() {
    this->shakeData = NULL;
    this->Scale = 1.00f;
}

FParticleEmitterInstance* UFairParticleTypeDataCameraShake::CreateInstance(UParticleEmitter* InEmitterParent, UParticleSystemComponent* InComponent)
{
    return NULL;
}