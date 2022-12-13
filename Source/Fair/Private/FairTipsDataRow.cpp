#include "FairTipsDataRow.h"

FFairTipsDataRow::FFairTipsDataRow() {
    this->ID = 0;
    this->ImageType = EUITipsImageType::None;
    this->imageID = 0;
    this->mailIndex = 0;
    this->mailFolder = EUITipsMailFolder::Basic;
    this->mailSequence = 0;
    this->StoryCount = 0;
    this->forceView = false;
    this->mailTakeOver = false;
    this->noFlagTakeOver = false;
}

