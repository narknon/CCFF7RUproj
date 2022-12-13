#include "FairGimmickMarkerIconData.h"

FFairGimmickMarkerIconData::FFairGimmickMarkerIconData() {
    this->iconType = EFairGimmickMarkerIconType::Unknown;
    this->Priority = 0;
    this->subEvent = EFairGimmickMarkerSubEventList::None;
    this->showDistance = 0.00f;
    this->nearDistance = 0.00f;
    this->startStoryCount = 0;
    this->endStoryCount = 0;
    this->boxId = 0;
    this->bShow = false;
    this->bNear = false;
}

