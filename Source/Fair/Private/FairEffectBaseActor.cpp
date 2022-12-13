#include "FairEffectBaseActor.h"
#include "FairParticleSystemComponent.h"

AFairEffectBaseActor::AFairEffectBaseActor() {
    this->m_fairParticleSystemComponent = CreateDefaultSubobject<UFairParticleSystemComponent>(TEXT("RootComponent"));
    this->m_particle = NULL;
}

