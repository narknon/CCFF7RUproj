#include "ZLevelStreamingSetting.h"

FZLevelStreamingSetting::FZLevelStreamingSetting() {
    this->prioirty = 0;
    this->disable_world_rendering = false;
    this->use_unlimited_fps = false;
    this->use_background_level_streaming = false;
    this->async_loading_time_limit = 0.00f;
    this->async_loading_use_full_time_limit = false;
    this->priority_async_loading_extra_time = 0.00f;
    this->level_streaming_actors_update_time_limit = 0.00f;
    this->level_streaming_components_registration_granularity = 0;
    this->level_streaming_components_unregistration_granularity = 0;
    this->level_streaming_unregister_components_time_limit = 0.00f;
}

