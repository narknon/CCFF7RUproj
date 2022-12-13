#include "FairBattleReadyGrowthStatusRateInfo.h"

FFairBattleReadyGrowthStatusRateInfo::FFairBattleReadyGrowthStatusRateInfo() {
    this->GrowthType = FairBattlReadyGrowthStatusRateType::MitigationRate;
    this->Defualt = 0.00f;
    this->Max = 0.00f;
    this->GrowthValue = 0.00f;
    this->GrowthLimitCount = 0;
}

