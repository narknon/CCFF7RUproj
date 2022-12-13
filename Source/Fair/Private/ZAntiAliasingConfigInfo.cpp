#include "ZAntiAliasingConfigInfo.h"

FZAntiAliasingConfigInfo::FZAntiAliasingConfigInfo() {
    this->anti_aliasing_method = AAM_None;
    this->taa_sample_count = EZAntiAliasingConfigSampleCount::Zero;
    this->taa_filter_size = 0.00f;
    this->taa_catmull_rom = false;
    this->taa_current_frame_weight = 0.00f;
    this->taa_upsample_filtered = false;
    this->taa_history_screen_percentage = 0.00f;
    this->post_process_aa_quality = EZAntiAliasingConfigPostProcessQuality::Off;
}

