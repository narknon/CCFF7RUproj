#include "FairDebugSummonEnemy.h"

void AFairDebugSummonEnemy::SearchEnemyToString() {
}

void AFairDebugSummonEnemy::ForceBattleEnd() {
}

void AFairDebugSummonEnemy::CallBattle() {
}

AFairDebugSummonEnemy::AFairDebugSummonEnemy() {
    this->EnemyId = 4437;
    this->dispBattleFieldRadius = false;
    this->battleFieldRadiusScale = 1.00f;
    this->NoDeadPlayer = false;
    this->NoDeadEnemy = false;
    this->slotEndurance = false;
    this->slotInvPhysics = false;
    this->slotInvMagic = false;
    this->slotInvincible = false;
    this->slotAbsCritical = false;
    this->slotMP0 = false;
    this->slotAP0 = false;
    this->hardMode = false;
}

