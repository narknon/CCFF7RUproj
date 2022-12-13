#include "ParticleModuleDecalComponent.h"

UParticleModuleDecalComponent::UParticleModuleDecalComponent() {
    this->ScaleWithParticleSize = false;
    this->RotateToParticleVelocity = false;
    this->SortOrder = 0;
    this->OptimizeDecalComponentUsage = true;
}

