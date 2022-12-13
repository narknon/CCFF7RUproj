#include "ZDebugInfoWrapper.h"

void UZDebugInfoWrapper::ShowLog() {
}

void UZDebugInfoWrapper::SetCameraNearClip(float nearClip) {
}

void UZDebugInfoWrapper::SelectLookAtPointActor() {
}

void UZDebugInfoWrapper::SelectCineCameraAndLookAtPointActor() {
}

void UZDebugInfoWrapper::SelectCineCameraActor() {
}

bool UZDebugInfoWrapper::isValidDebugInfoSystem() {
    return false;
}

bool UZDebugInfoWrapper::Init() {
    return false;
}

TArray<FZDebugMotionNameInfo> UZDebugInfoWrapper::GetMotionNameList() {
    return TArray<FZDebugMotionNameInfo>();
}

int32 UZDebugInfoWrapper::GetFrameCount() {
    return 0;
}

TArray<FZDebugCharacterInfo> UZDebugInfoWrapper::GetCharacterInfoList() {
    return TArray<FZDebugCharacterInfo>();
}

FRotator UZDebugInfoWrapper::GetCameraRotation() {
    return FRotator{};
}

float UZDebugInfoWrapper::GetCameraNearClip() {
    return 0.0f;
}

FVector UZDebugInfoWrapper::GetCameraLocation() {
    return FVector{};
}

float UZDebugInfoWrapper::GetCameraFOVAngle() {
    return 0.0f;
}

void UZDebugInfoWrapper::CopyCameraPositionToClipBoard() {
}

void UZDebugInfoWrapper::CopyCameraNearClipToClipBoard() {
}

void UZDebugInfoWrapper::CopyCameraFOVToClipBoard() {
}

UZDebugInfoWrapper::UZDebugInfoWrapper() {
    this->m_pDebugInfoSystem = NULL;
}

