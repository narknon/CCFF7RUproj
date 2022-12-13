#include "FairCameraAreaPresetData.h"

FFairCameraAreaPresetData::FFairCameraAreaPresetData() {
    this->CameraPreset = EFairGameCameraPreset::Near;
    this->Priority = 0;
    this->LerpTimeIn = 0.00f;
    this->EaseFuncTypeIn = EEasingFunc::Linear;
    this->EaseBlendExpIn = 0.00f;
    this->LerpTimeOut = 0.00f;
    this->EaseFuncTypeOut = EEasingFunc::Linear;
    this->EaseBlendExpOut = 0.00f;
}

