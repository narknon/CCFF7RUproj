#include "FairMotWepAttachNotifyState.h"

UFairMotWepAttachNotifyState::UFairMotWepAttachNotifyState() {
    this->fairAnimInstance = NULL;
    this->Index = 0;
    this->attachBoneName = TEXT("wpn_body");
    this->isOverridePos = false;
    this->isOverrideRot = false;
}

