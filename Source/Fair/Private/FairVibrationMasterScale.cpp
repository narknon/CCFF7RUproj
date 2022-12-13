#include "FairVibrationMasterScale.h"

FFairVibrationMasterScale::FFairVibrationMasterScale() {
    this->PlatformType = EVibrationPlatformType::PS;
    this->MasterScale = 0.00f;
    this->LeftLargeScale = 0.00f;
    this->RightLargeScale = 0.00f;
    this->LeftSmallScale = 0.00f;
    this->RightSmallScale = 0.00f;
}

