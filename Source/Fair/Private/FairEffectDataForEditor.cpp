#include "FairEffectDataForEditor.h"

FFairEffectDataForEditor::FFairEffectDataForEditor() {
    this->boneIndex = 0;
    this->StartTime = 0.00f;
    this->releaseBindTime = 0.00f;
    this->notWaitForComplete = false;
    this->fadeoutFrame = 0;
    this->fadeoutDeactivateTiming = 0.00f;
    this->effectFlag = 0;
    this->castShadowFlag = false;
    this->ignoreParentalScaleFlag = false;
}

