#include "FairAutoPlayParamDataTableRow.h"

FFairAutoPlayParamDataTableRow::FFairAutoPlayParamDataTableRow() {
    this->StoryCount = 0;
    this->MapId = 0;
    this->CommandType = EAutoPlayCommandType::Invalid;
    this->IntParam00 = 0;
    this->FloatParam00 = 0.00f;
}

