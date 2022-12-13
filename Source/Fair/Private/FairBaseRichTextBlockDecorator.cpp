#include "FairBaseRichTextBlockDecorator.h"

UFairBaseRichTextBlockDecorator::UFairBaseRichTextBlockDecorator() : URichTextBlockDecorator(FObjectInitializer::Get()) {
    this->ImageSet = NULL;
    this->ImageSetPS4 = NULL;
    this->ImageSetPS5 = NULL;
    this->ImageSetSwitch = NULL;
    this->ImageSetXbox = NULL;
    this->ImageSetSteam = NULL;
}

