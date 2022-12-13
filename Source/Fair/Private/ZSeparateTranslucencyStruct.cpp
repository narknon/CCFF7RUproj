#include "ZSeparateTranslucencyStruct.h"

FZSeparateTranslucencyStruct::FZSeparateTranslucencyStruct() {
    this->Platform = EZSeparateTranslucencyPlatform::ANY_PLATFORM;
    this->ScreenPercentage = EFairDefinitionOfSeparateTranslucencyScreenPercentage::Default;
    this->DisableAutoDownsample = false;
}

