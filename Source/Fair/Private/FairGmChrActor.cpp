#include "FairGmChrActor.h"
#include "Components/SkeletalMeshComponent.h"

void AFairGmChrActor::OnPlatformHardwareChanged(EZPlatformHardware prevHardware, EZPlatformHardware nextHardware) {
}

void AFairGmChrActor::OnChangedParamForXbox1() {
}

void AFairGmChrActor::OnChangedParamForSwitch() {
}

void AFairGmChrActor::OnChangedParam() {
}

AFairGmChrActor::AFairGmChrActor() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->m_animInstance = NULL;
    this->m_currentAnimSequence = NULL;
    this->IsTransformControlledByLevelSequencer = false;
    this->IsBodyAnimControlledByLevelSequencer = false;
}

