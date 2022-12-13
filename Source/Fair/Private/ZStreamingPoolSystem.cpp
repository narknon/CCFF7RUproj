#include "ZStreamingPoolSystem.h"

void UZStreamingPoolSystem::SetStreamingPoolLevel(EZStreamingPoolLevel StreamingPoolLevel) {
}

void UZStreamingPoolSystem::PushStreaminPoolLevel() {
}

void UZStreamingPoolSystem::PopStreamingPoolLevel() {
}

EZStreamingPoolLevel UZStreamingPoolSystem::GetStreamingPoolLevel() const {
    return EZStreamingPoolLevel::Lowest;
}

UZStreamingPoolSystem::UZStreamingPoolSystem() {
    this->StreamingPoolConfigList = NULL;
}

