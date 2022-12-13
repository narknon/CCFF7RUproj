#include "ZMapPlatformParameterComponent.h"

UZMapPlatformParameterComponent::UZMapPlatformParameterComponent() {
    this->PlatformType = PlatformType::PC;
    this->exposureBias = 0.00f;
    this->exposureBiasForSwitch = 0.00f;
    this->FogDensity = 0.00f;
    this->fogDensityForSwitch = 0.00f;
    this->fogMaxOpacity = 0.00f;
    this->fogMaxOpacityForSwitch = 0.00f;
    this->StartDistance = 0.00f;
    this->startDistanceForSwitch = 0.00f;
}

