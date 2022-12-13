#include "FairAttackCheckNotify.h"

UFairAttackCheckNotify::UFairAttackCheckNotify() {
    this->effectMode = EEffectMode::EFFECT_MODE_CENTER;
    this->effectNumber = -1;
    this->soundNumber = -1;
    this->criticalEffectNumber = -1;
    this->criticalSoundNumber = -1;
    this->rangeDegree = 0.00f;
    this->rangeDistance = 0.00f;
    this->rangeHeight = 0.00f;
    this->atkPowerScale = 1.00f;
    this->atkDmgLvScale = 1.00f;
    this->atkKnockBackScale = 1.00f;
    this->damageNumberPos = EEffectMode::EFFECT_MODE_INVALID;
}

