#include "ZMapConfigLevelInfo.h"

FZMapConfigLevelInfo::FZMapConfigLevelInfo() {
    this->load_type = EZMapConfigLevelLoadType::Default;
    this->load_priority = 0;
    this->load_priority_offset = 0;
    this->is_visible = false;
}

