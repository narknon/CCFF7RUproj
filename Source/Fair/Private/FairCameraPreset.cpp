#include "FairCameraPreset.h"

FFairCameraPreset::FFairCameraPreset() {
    this->PresetIndex = EFairGameCameraPreset::Near;
    this->FieldOfView = 0.00f;
    this->RootHeight = 0.00f;
    this->Distance1 = 0.00f;
    this->Distance2 = 0.00f;
    this->Distance3 = 0.00f;
    this->AngleDefaultVt = 0.00f;
    this->AngleMinVt = 0.00f;
    this->AngleMaxVt = 0.00f;
    this->BattleFieldOfView = 0.00f;
    this->BattleRootHeightOffset = 0.00f;
    this->BattleDistanceOffset = 0.00f;
    this->BattleAngleMinVtOffset = 0.00f;
    this->BattleAngleMaxVtOffset = 0.00f;
    this->TargetAdjustPosRateNrl = 0.00f;
    this->TargetAdjustPosRateLck = 0.00f;
    this->TargetAdjustDistanceNrl = 0.00f;
    this->TargetAdjustDistanceLck = 0.00f;
}

