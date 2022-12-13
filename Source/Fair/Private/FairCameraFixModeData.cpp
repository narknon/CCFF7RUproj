#include "FairCameraFixModeData.h"

FFairCameraFixModeData::FFairCameraFixModeData() {
    this->LerpTime = 0.00f;
    this->FieldOfView = 0.00f;
    this->HeightOffset = 0.00f;
    this->EaseFuncType = EEasingFunc::Linear;
    this->EaseBlendExp = 0.00f;
}

