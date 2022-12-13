#include "FairDebugAutoPlayBattleSetInfo.h"

FFairDebugAutoPlayBattleSetInfo::FFairDebugAutoPlayBattleSetInfo() {
    this->IsTimeLimit = false;
    this->TimeLimit = 0.00f;
    this->MissionTimeLimit = 0.00f;
    this->MissionOnlyTimeLimit = 0.00f;
    this->NoDeadPlayer = false;
    this->NoDeadEnemy = false;
    this->OneKillEnemy = false;
}

