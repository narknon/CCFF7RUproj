#include "FairParticleTypeDataVibration.h"

UFairParticleTypeDataVibration::UFairParticleTypeDataVibration() {
    this->vibrationData = NULL;
    this->Time = 1.00f;
}

FParticleEmitterInstance* UFairParticleTypeDataVibration::CreateInstance(UParticleEmitter* InEmitterParent, UParticleSystemComponent* InComponent)
{
    return NULL;
}