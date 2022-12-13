#include "ParticleModuleSwarmMovement.h"

UParticleModuleSwarmMovement::UParticleModuleSwarmMovement() {
    this->PerceptionRadius = 50.00f;
    this->MaxAcceleration = 30.00f;
    this->MaxVelocity = 50.00f;
    this->SeparationWeight = 1.00f;
    this->AlignmentWeight = 1.00f;
    this->CohesionWeight = 0.05f;
    this->BlindspotAngleDeg = 45.00f;
    this->SeparationDistanceWeight = EDistanceWeight::INVERSE_QUAD;
    this->SteeringWeight = 0.10f;
    this->SteeringTargetDistanceWeight = EDistanceWeight::LINEAR;
}

