#include "ZStreamingPoolConfigListDataTableRow.h"

FZStreamingPoolConfigListDataTableRow::FZStreamingPoolConfigListDataTableRow() {
    this->IsEnabled = false;
    this->PlatformHardware = EZPlatformHardware::Any;
    this->PoolSize_Default = 0;
    this->PoolSize_Lowest = 0;
    this->PoolSize_Low = 0;
    this->PoolSize_High = 0;
    this->PoolSize_Highest = 0;
}

