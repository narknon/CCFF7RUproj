#include "FairAutoSaveIgnoreListDataTableRow.h"

FFairAutoSaveIgnoreListDataTableRow::FFairAutoSaveIgnoreListDataTableRow() {
    this->PrevMapID = 0;
    this->NextMapID = 0;
    this->Direction = EFairAutoSaveIgnoreDirection::Both;
    this->StoryCount = 0;
}

