#include "FairAttackCameraShakeNotify.h"

UFairAttackCameraShakeNotify::UFairAttackCameraShakeNotify() {
    this->HitShakeType = EFairCameraShakeType::Invalid;
    this->HitScale = 1.00f;
    this->MissShakeType = EFairCameraShakeType::Invalid;
    this->MissScale = 1.00f;
}

