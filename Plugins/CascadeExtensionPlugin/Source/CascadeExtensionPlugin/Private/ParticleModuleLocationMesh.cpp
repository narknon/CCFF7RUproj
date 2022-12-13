#include "ParticleModuleLocationMesh.h"

class AActor;

void UParticleModuleLocationMesh::OnCachedActorDestroyed(AActor* DestroyedActor) {
}

UParticleModuleLocationMesh::UParticleModuleLocationMesh() {
    this->SurfaceMesh = NULL;
    this->EqualTriangeWeight = false;
}

