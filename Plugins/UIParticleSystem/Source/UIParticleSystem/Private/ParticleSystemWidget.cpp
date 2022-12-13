#include "ParticleSystemWidget.h"

class UParticleSystemComponent;

void UParticleSystemWidget::SetReactivate(bool bActivateAndReset) {
}

UParticleSystemComponent* UParticleSystemWidget::GetParticleComponent() const {
    return NULL;
}

void UParticleSystemWidget::ActivateParticles(bool bActive, bool bReset) {
}

UParticleSystemWidget::UParticleSystemWidget() {
    this->ParticleSystemTemplate = NULL;
    this->bAutoActivate = true;
    this->bReactivate = false;
    this->WorldParticleComponent = NULL;
    this->WorldParticleActor = NULL;
}

