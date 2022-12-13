#include "ParticleModuleLocationHeightmap.h"

UParticleModuleLocationHeightmap::UParticleModuleLocationHeightmap() {
    this->HeightmapTexture = NULL;
    this->UpdateWithTick = false;
    this->SmoothUpdate = true;
    this->Intensity = 200.00f;
}

