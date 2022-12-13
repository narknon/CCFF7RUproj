#include "FairParticleTypeDataPostProcessBase.h"

UFairParticleTypeDataPostProcessBase::UFairParticleTypeDataPostProcessBase() {
    this->m_priority = 0;
    this->m_customMaterial = NULL;
}

FParticleEmitterInstance* UFairParticleTypeDataPostProcessBase::CreateInstance(UParticleEmitter* InEmitterParent, UParticleSystemComponent* InComponent)
{
    return NULL;
}