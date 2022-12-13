#include "FairParticleTypeDataDecal.h"

UFairParticleTypeDataDecal::UFairParticleTypeDataDecal() {
    this->DecalMaterial = NULL;
}

FParticleEmitterInstance* UFairParticleTypeDataDecal::CreateInstance(UParticleEmitter* InEmitterParent, UParticleSystemComponent* InComponent)
{
    return NULL;
}