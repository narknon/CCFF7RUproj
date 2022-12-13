#include "FairDamageMoveComponent.h"

void UFairDamageMoveComponent::Update_Native(float DeltaSec) {
}

void UFairDamageMoveComponent::StartDamageMove(FVector DamageDir, float power) {
}

void UFairDamageMoveComponent::SetDamageMoveScale(float Scale) {
}

float UFairDamageMoveComponent::GetLength() {
    return 0.0f;
}

UFairDamageMoveComponent::UFairDamageMoveComponent() {
    this->mOwnerActor = NULL;
}

