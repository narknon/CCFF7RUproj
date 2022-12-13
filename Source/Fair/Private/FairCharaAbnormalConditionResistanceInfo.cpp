#include "FairCharaAbnormalConditionResistanceInfo.h"

FFairCharaAbnormalConditionResistanceInfo::FFairCharaAbnormalConditionResistanceInfo() {
    this->AbnormalConditionType = EFairAbnormalConditionType::POISON;
    this->AdditiveResistanceValue = 0;
    this->MaxResistanceValue = 0;
    this->DecreaseEffectTime = 0;
    this->MinGuaranteedTime = 0;
    this->TotalResistanceValue = 0;
}

