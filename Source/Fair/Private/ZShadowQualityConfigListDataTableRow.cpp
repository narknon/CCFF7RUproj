#include "ZShadowQualityConfigListDataTableRow.h"

FZShadowQualityConfigListDataTableRow::FZShadowQualityConfigListDataTableRow() {
    this->is_default_row = false;
    this->is_override_for_SWITCH = false;
    this->is_override_for_SWITCH_CONSOLE = false;
    this->is_override_for_SWITCH_HANDHELD = false;
    this->is_override_for_PS4 = false;
    this->is_override_for_PS5 = false;
    this->is_override_for_XB1 = false;
    this->is_override_for_XSX = false;
    this->is_override_for_STEAM = false;
    this->is_override_for_WINDOWS = false;
}

