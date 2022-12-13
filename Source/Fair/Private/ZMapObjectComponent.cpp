#include "ZMapObjectComponent.h"

void UZMapObjectComponent::SetMapObjectTransform(const FTransform& Transform) {
}

void UZMapObjectComponent::SetMapObjectName(const FName& map_object_name) {
}

void UZMapObjectComponent::SetIsLocalTransformMapObject_DEPRECATED(bool is_enable) {
}

FName UZMapObjectComponent::GetMapObjectName() const {
    return NAME_None;
}

bool UZMapObjectComponent::GetIsLocalTransformMapObject_DEPRECATED() const {
    return false;
}

UZMapObjectComponent::UZMapObjectComponent() {
    this->IsLocalTransformMapObject = false;
    this->IsSaveInitialActorPosition = false;
    this->IsSaveInitialActorRotation = false;
    this->IsSaveInitialActorScale = false;
}

