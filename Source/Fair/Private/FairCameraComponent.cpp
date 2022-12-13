#include "FairCameraComponent.h"

void UFairCameraComponent::SetUnrealFilmOffsetY(float offset_y) {
}

void UFairCameraComponent::SetUnrealFilmOffsetX(float offset_x) {
}

void UFairCameraComponent::SetFilmOffsetY(float offset_y) {
}

void UFairCameraComponent::SetFilmOffsetX(float offset_x) {
}

float UFairCameraComponent::GetUnrealFilmOffsetY() {
    return 0.0f;
}

float UFairCameraComponent::GetUnrealFilmOffsetX() {
    return 0.0f;
}

float UFairCameraComponent::GetFilmOffsetY() {
    return 0.0f;
}

float UFairCameraComponent::GetFilmOffsetX() {
    return 0.0f;
}

UFairCameraComponent::UFairCameraComponent() {
    this->FilmOffsetX = 0.00f;
    this->FilmOffsetY = 0.00f;
}

