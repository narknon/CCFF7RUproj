#include "FairCameraRootOffsetAdjustDataEd.h"

FFairCameraRootOffsetAdjustDataEd::FFairCameraRootOffsetAdjustDataEd() {
    this->LerpTime = 0.00f;
    this->EaseFuncType = EEasingFunc::Linear;
    this->EaseBlendExp = 0.00f;
}

