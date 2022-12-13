#include "FairParticleTypeDataSystemFade.h"

UFairParticleTypeDataSystemFade::UFairParticleTypeDataSystemFade() {
    this->AutoReset = true;
}

FParticleEmitterInstance* UFairParticleTypeDataSystemFade::CreateInstance(UParticleEmitter* InEmitterParent, UParticleSystemComponent* InComponent)
{
    return NULL;
}