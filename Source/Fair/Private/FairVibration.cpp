#include "FairVibration.h"

class UForceFeedbackEffect;

void UFairVibration::StopVibration(FName Tag) {
}

void UFairVibration::PlayVibrationSetTime(UForceFeedbackEffect* padEfeect, float Time, FName Tag, bool bIgnoreTimeDilation, bool bPlayWhilePaused) {
}

void UFairVibration::PlayVibration(UForceFeedbackEffect* padEfeect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused) {
}

UFairVibration::UFairVibration() {
    this->m_PresetEffect[0] = NULL;
    this->m_PresetEffect[1] = NULL;
    this->m_PresetEffect[2] = NULL;
    this->m_PresetEffect[3] = NULL;
    this->m_PresetEffect[4] = NULL;
    this->m_PresetEffect[5] = NULL;
    this->m_PresetEffect[6] = NULL;
    this->m_PresetEffect[7] = NULL;
    this->m_PresetEffect[8] = NULL;
    this->m_PresetEffect[9] = NULL;
    this->m_PresetEffect[10] = NULL;
    this->m_PresetEffect[11] = NULL;
    this->m_masterScaleData = NULL;
    this->m_motorScaleData = NULL;
}

