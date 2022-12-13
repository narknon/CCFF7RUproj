#include "ZGraphicQualityConfigDataTableRow.h"

FZGraphicQualityConfigDataTableRow::FZGraphicQualityConfigDataTableRow() {
    this->graphic_quality_type = EZGraphicQualityType::None;
    this->texture_quality_type = EZGraphicQualityType::None;
    this->shadow_quality_type = EZGraphicQualityType::None;
    this->anti_aliasing_quality_type = EZGraphicQualityType::None;
    this->ambient_occlusion_flag = false;
}

