#include "FairParticleTypeDataDirectCameraShake.h"

UFairParticleTypeDataDirectCameraShake::UFairParticleTypeDataDirectCameraShake() {
    this->shakeData = NULL;
}

FParticleEmitterInstance* UFairParticleTypeDataDirectCameraShake::CreateInstance(UParticleEmitter* InEmitterParent, UParticleSystemComponent* InComponent)
{
    return NULL;
}