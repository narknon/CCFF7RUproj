#include "ParticleModuleForcePoints.h"

UParticleModuleForcePoints::UParticleModuleForcePoints() {
    this->Intensity = 1.00f;
    this->SeparationDistanceWeight = EDistanceWeight::QUADRATIC;
    this->DistanceScale = 1.00f;
}

