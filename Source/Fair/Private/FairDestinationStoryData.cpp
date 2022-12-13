#include "FairDestinationStoryData.h"

FFairDestinationStoryData::FFairDestinationStoryData() {
    this->MapIndex = EFairMapIndex::MSB_UNKNOWN;
    this->dataType = EFairDestinationDataType::Unknown;
    this->messageIndex = 0;
    this->areaDestination = false;
    this->areaBoxIndex = 0;
    this->DrawLine = false;
    this->visibleRadius = 0.00f;
    this->destinationIsInArea = false;
    this->useAreaBox = false;
    this->useMapPos = false;
}

