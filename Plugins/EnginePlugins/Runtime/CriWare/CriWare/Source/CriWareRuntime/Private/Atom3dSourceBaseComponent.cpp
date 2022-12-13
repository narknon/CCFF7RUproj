#include "Atom3dSourceBaseComponent.h"

class UAtom3dRegion;

void UAtom3dSourceBaseComponent::SetRegion(UAtom3dRegion* InRegion) {
}

UAtom3dSourceBaseComponent::UAtom3dSourceBaseComponent() {
    this->DefaultOutputVolumeScale = 0.00f;
    this->DefaultRegion = NULL;
    this->bIsAttenuationDistanceDebugSpheresVisible = false;
    this->DefaultMinAttenuationDistance = 0.00f;
    this->DefaultMaxAttenuationDistance = 0.00f;
    this->bIsOutputInteriorPanFieldDebugSpheresVisible = false;
    this->DefaultSourceRadius = 0.00f;
    this->DefaultInteriorDistance = 0.00f;
    this->bIsDebugStringsForDetailsVisible = false;
}

