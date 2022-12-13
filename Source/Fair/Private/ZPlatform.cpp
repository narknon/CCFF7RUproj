#include "ZPlatform.h"

FString UZPlatform::GetPlatformTypeName(EZPlatformType PlatformType) {
    return TEXT("");
}

EZPlatformType UZPlatform::GetPlatformType() {
    return EZPlatformType::Any;
}

FString UZPlatform::GetPlatformHardwareName(EZPlatformHardware PlatformHardware) {
    return TEXT("");
}

EZPlatformHardware UZPlatform::GetPlatformHardware() {
    return EZPlatformHardware::Any;
}

FString UZPlatform::GetPlatformFamilyName(EZPlatformFamily PlatformFamily) {
    return TEXT("");
}

EZPlatformFamily UZPlatform::GetPlatformFamily() {
    return EZPlatformFamily::Any;
}

UZPlatform::UZPlatform() {
}

