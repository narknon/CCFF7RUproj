#include "ZPostProcessMaterialListDataTableRow.h"

FZPostProcessMaterialListDataTableRow::FZPostProcessMaterialListDataTableRow() {
    this->material_type = EZPostProcessType::ScreenLight;
    this->post_process_material = NULL;
    this->material_parameter_collection = NULL;
}

