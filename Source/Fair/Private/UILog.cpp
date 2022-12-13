#include "UILog.h"

UUILog::UUILog() {
    this->LogDefaultHeight = 72.00f;
    this->MoveTime = 0.50f;
    this->LogDistance = 2.00f;
    this->ViewTimeNormal = 3.00f;
    this->ViewTimeEmphasis = 5.00f;
    this->ViewTimeWaitSuspend = 2.00f;
    this->LogMaxCount = 6;
    this->m_logParamTable = NULL;
    this->m_recommendDataList = NULL;
}

