#include "FairModelAnimInstance.h"

void UFairModelAnimInstance::StopSlotAllAnimation(float InBlendOutTime, FName SlotNodeName) {
}

void UFairModelAnimInstance::SetEnableFacialAndFacialOverride(bool IsEnable) {
}

bool UFairModelAnimInstance::GetIsWholeChrEnableFacialAndFacialOverride() {
    return false;
}

UFairModelAnimInstance::UFairModelAnimInstance() {
    this->CurrentBodyAnimMontage = NULL;
    this->CurrentFacialDefaultAnimMontage = NULL;
    this->CurrentFacialLipsyncAnimMontage = NULL;
    this->CurrentLipAnimMontage = NULL;
    this->CurrentLipNoneMontage = NULL;
    this->CurrentShaderAnimMontage = NULL;
    this->CurrentBodyAnimSequence = NULL;
    this->PrevBodyAnimSequence = NULL;
    this->ApplyAdditiveAnimSequence = NULL;
    this->LipNoneAnim = NULL;
}

