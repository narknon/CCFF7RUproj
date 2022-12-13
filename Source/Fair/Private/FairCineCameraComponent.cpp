#include "FairCineCameraComponent.h"

void UFairCineCameraComponent::SetUnrealFilmOffsetY(float offset_y) {
}

void UFairCineCameraComponent::SetUnrealFilmOffsetX(float offset_x) {
}

void UFairCineCameraComponent::SetFilmOffsetY(float offset_y) {
}

void UFairCineCameraComponent::SetFilmOffsetX(float offset_x) {
}

float UFairCineCameraComponent::GetUnrealFilmOffsetY() {
    return 0.0f;
}

float UFairCineCameraComponent::GetUnrealFilmOffsetX() {
    return 0.0f;
}

float UFairCineCameraComponent::GetFilmOffsetY() {
    return 0.0f;
}

float UFairCineCameraComponent::GetFilmOffsetX() {
    return 0.0f;
}

UFairCineCameraComponent::UFairCineCameraComponent() {
    this->FilmOffsetX = 0.00f;
    this->FilmOffsetY = 0.00f;
}

