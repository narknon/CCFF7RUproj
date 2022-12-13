#include "ZDynamicResolutionParameters.h"

FZDynamicResolutionParameters::FZDynamicResolutionParameters() {
    this->MaxDynamicResolution = 0;
    this->MinDynamicResolution = 0;
    this->FrameTimeBudget = 0.00f;
    this->TargetedGPUHeadRoom = 0.00f;
    this->ChangePercentageThreshold = 0.00f;
    this->MinResolutionChangePeriod = 0;
    this->HistorySize = 0;
    this->FrameWeightExponent = 0.00f;
    this->CPUBoundScreenPercentage = 0.00f;
    this->MaxConsecutiveOverbudgetGPUFrameCount = 0;
}

