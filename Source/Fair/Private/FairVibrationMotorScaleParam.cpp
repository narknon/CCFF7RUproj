#include "FairVibrationMotorScaleParam.h"

FFairVibrationMotorScaleParam::FFairVibrationMotorScaleParam() {
    this->PlatformType = EVibrationPlatformType::PS;
    this->LeftLargeScale = 0.00f;
    this->RightLargeScale = 0.00f;
    this->LeftSmallScale = 0.00f;
    this->RightSmallScale = 0.00f;
    this->IsIgnoreMasterScale = false;
    this->IsIgnoreMotorMasterScale = false;
}

