#include "FairCharaThinkParameterInfo.h"

FFairCharaThinkParameterInfo::FFairCharaThinkParameterInfo() {
    this->thinkMode = FAIR_ENEMYTHINK_MODE::FAIR_ENEMYTHINK_BASIC;
    this->standMode = FAIR_ENEMYSTAND_MODE::FAIR_ENEMYSTAND_BASIC;
    this->idleTimeout = 0;
    this->moveTimeout = 0;
    this->midMoveTime = 0;
    this->standTimeout = 0;
    this->shortDist = 0.00f;
    this->longDist = 0.00f;
    this->rangeAsobi = 0.00f;
    this->shortAngle = 0.00f;
    this->midAngle = 0.00f;
    this->longAngle = 0.00f;
    this->FrontAngle = 0.00f;
    this->GenuineAngle = 0.00f;
    this->turnMotion = FAIR_ENEMYTURN_MOTION::FAIR_ENEMYTURN_IDLE1;
    this->FirstWait = 0;
    this->MoveSpeed = 0.00f;
    this->MoveAdd = 0.00f;
    this->RotSpeed = 0.00f;
    this->RotAdd = 0.00f;
    this->DirSpeed = 0.00f;
    this->DirAdd = 0.00f;
    this->AreaFar = 0.00f;
    this->AreaNear = 0.00f;
    this->AreaAngle = 0.00f;
    this->AreaTimeout = 0.00f;
    this->IgnoreAttackRights = false;
}

