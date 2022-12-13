#include "ParticleModuleCustomData.h"

UParticleModuleCustomData::UParticleModuleCustomData() {
    this->UpdatedSpawnedParticles = true;
    this->UpdatedTickedParticles = false;
    this->UseLocationFromProvider = true;
    this->UseVelocityFromProvider = true;
    this->UseSizeFromProvider = true;
    this->UseColorFromProvider = true;
    this->UseRotationFromProvider = true;
    this->UseRotationRateFromProvider = true;
}

