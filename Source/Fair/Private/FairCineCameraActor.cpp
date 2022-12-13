#include "FairCineCameraActor.h"

#include "Components/DirectionalLightComponent.h"

void AFairCineCameraActor::TriggerSetTranslucencyReflectionCurrentSceneCopy() {
}

void AFairCineCameraActor::SetMultiLevelSequenceEnd() {
}

void AFairCineCameraActor::SetLevelSequenceEnd() {
}

void AFairCineCameraActor::OnPlatformHardwareChanged(EZPlatformHardware prevHardware, EZPlatformHardware nextHardware) {
}

void AFairCineCameraActor::OnChangedParamForXbox1() {
}

void AFairCineCameraActor::OnChangedParamForSwitch() {
}

void AFairCineCameraActor::OnChangedNearClip() {
}

void AFairCineCameraActor::OnChangedCulling() {
}

void AFairCineCameraActor::EnableOneShotCullingDisabledUpdate() {
}

void AFairCineCameraActor::CopyNearClipToClipboard() {
}

void AFairCineCameraActor::CopyFOVToClipboard() {
}

void AFairCineCameraActor::CopyCameraPositionsToClipboard() {
}

AFairCineCameraActor::AFairCineCameraActor(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
    this->HeadLightComponent = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("HeadLight"));
    this->m_isPrioritizeOwnTransform = false;
    this->m_isForciblyEnableBgChrLight = false;
}

