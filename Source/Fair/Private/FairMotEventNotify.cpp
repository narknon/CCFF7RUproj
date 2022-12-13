#include "FairMotEventNotify.h"

UFairMotEventNotify::UFairMotEventNotify() {
    this->Type = EMotEventType::NONE;
    this->ID = 0;
    this->se = 0;
    this->seinfo = 65535;
    this->seMotChangeStop = false;
    this->seLoopNotDouble = false;
    this->seAttachFlag = false;
    this->sePlayAtOnceWithThisMesh = false;
}

