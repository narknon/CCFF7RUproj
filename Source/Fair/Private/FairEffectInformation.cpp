#include "FairEffectInformation.h"

FFairEffectInformation::FFairEffectInformation() {
    this->boneIndex = 0;
    this->StartTime = 0.00f;
    this->releaseBindTime = 0.00f;
    this->is3DCamera = false;
    this->notWaitForComplete = false;
    this->fadeoutFrame = 0;
    this->fadeoutDeactivateTiming = 0.00f;
    this->effectFlag = 0;
    this->castShadowFlag = false;
    this->originalID = 0;
    this->usingAbsoluteLocation = false;
    this->isWaterNotify = false;
    this->waterLevel = 0.00f;
    this->ignoreParentalScaleFlag = false;
}

