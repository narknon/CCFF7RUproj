#include "ParticleModuleColorTexture.h"

UParticleModuleColorTexture::UParticleModuleColorTexture() {
    this->ColorIndexTexture = NULL;
    this->UpdateWithTick = false;
    this->ParticleAxisToTextureX = ESpaceAxis::X;
    this->ParticleAxisToTextureY = ESpaceAxis::Y;
    this->Intensity = 1.00f;
    this->UseTextureAlpha = false;
}

