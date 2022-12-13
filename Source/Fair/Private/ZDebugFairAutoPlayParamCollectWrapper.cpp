#include "ZDebugFairAutoPlayParamCollectWrapper.h"

void UZDebugFairAutoPlayParamCollectWrapper::SetOutPutFileName(const FString& file_name) {
}

void UZDebugFairAutoPlayParamCollectWrapper::SetMissionDataCollectFlag(const bool flag) {
}

void UZDebugFairAutoPlayParamCollectWrapper::SetAutoPlayParamCollectFlag(bool flag) {
}

void UZDebugFairAutoPlayParamCollectWrapper::ResetCollectSystem() {
}

bool UZDebugFairAutoPlayParamCollectWrapper::IsMoveCommandAddShortCutKey() {
    return false;
}

bool UZDebugFairAutoPlayParamCollectWrapper::IsAutoPlayParamCollectSystem() const {
    return false;
}

bool UZDebugFairAutoPlayParamCollectWrapper::IsAutoPlayParamCollect() const {
    return false;
}

FVector UZDebugFairAutoPlayParamCollectWrapper::GetTargetLocation() {
    return FVector{};
}

FString UZDebugFairAutoPlayParamCollectWrapper::GetOutPutFileName() {
    return TEXT("");
}

FVector UZDebugFairAutoPlayParamCollectWrapper::GetMoveLocation() {
    return FVector{};
}

int32 UZDebugFairAutoPlayParamCollectWrapper::GetMissionId() const {
    return 0;
}

bool UZDebugFairAutoPlayParamCollectWrapper::GetMissionDataCollectFlag() const {
    return false;
}

int32 UZDebugFairAutoPlayParamCollectWrapper::GetFocusInfo() const {
    return 0;
}

void UZDebugFairAutoPlayParamCollectWrapper::DrawTargetLocationCylinder() {
}

void UZDebugFairAutoPlayParamCollectWrapper::DrawMoveLocationCylinder() {
}

bool UZDebugFairAutoPlayParamCollectWrapper::AddMoveCommandParam() {
    return false;
}

bool UZDebugFairAutoPlayParamCollectWrapper::AddActionCommandParam() {
    return false;
}

UZDebugFairAutoPlayParamCollectWrapper::UZDebugFairAutoPlayParamCollectWrapper() {
}

