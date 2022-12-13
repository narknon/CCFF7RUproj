#include "ZShadowQualityConfigInfo.h"

FZShadowQualityConfigInfo::FZShadowQualityConfigInfo() {
    this->csm_max_cascades = 0;
    this->cached_shadows_cast_from_movable_primitives = false;
    this->csm_shadow_distance_fadeout_multiplier = 0.00f;
    this->preshadows = false;
    this->r_shadow_quality = EZShadowQualityConfigRShadowQuality::Off;
    this->shadow_max_csm_resolution = 0;
}

