#include "FairCameraRootOffsetAdjustData.h"

FFairCameraRootOffsetAdjustData::FFairCameraRootOffsetAdjustData() {
    this->LerpTime = 0.00f;
    this->EaseFuncType = EEasingFunc::Linear;
    this->EaseBlendExp = 0.00f;
}

