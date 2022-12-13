#include "FairCameraAssistParameter.h"

FFairCameraAssistParameter::FFairCameraAssistParameter() {
    this->RootDelayEnable = 0.00f;
    this->RootDelayRate = 0.00f;
    this->RootDelayDistanceMax = 0.00f;
    this->RootDelayAngleCurve = NULL;
    this->MoveAngleAdjustEnable = false;
    this->MoveAngleAdjustRateVt = 0.00f;
    this->MoveAngleAdjustCurveVt = NULL;
    this->MoveAngleAdjustRateHz = 0.00f;
    this->MoveAngleAdjustCurveHz = NULL;
    this->MoveAngleAdjustSkipTime = 0.00f;
    this->ReturnFocusBattleEnable = false;
    this->ReturnFocusAttackEnable = false;
    this->BattleAdjustEnable = false;
    this->BattleAdjustTime = 0.00f;
    this->BattleAdjustEaseFuncType = EEasingFunc::Linear;
    this->BattleAdjustEaseBlendExp = 0.00f;
    this->AttentionFovRateVt = 0.00f;
    this->AttentionFovRateHz = 0.00f;
    this->AttentionLerpTime = 0.00f;
    this->AttentionEaseFuncType = EEasingFunc::Linear;
    this->AttentionEaseBlendExp = 0.00f;
    this->SlopeAdjustEnable = false;
    this->SlopeAdjustInterval = 0.00f;
    this->SlopeAdjustFixRange = 0.00f;
    this->SlopeAdjustCheckPointMax = 0;
    this->SlopeAdjustCheckPointLen = 0.00f;
    this->SlopeAdjustCheckPointOfs = 0.00f;
    this->SlopeAdjustLerpTime = 0.00f;
    this->SlopeAdjustEaseFuncType = EEasingFunc::Linear;
    this->SlopeAdjustEaseBlendExp = 0.00f;
}

