#include "FairSoundEmitter.h"

class UBoxComponent;
class USphereComponent;

void AFairSoundEmitter::SetUpEmitter(EFairEmitterStyle emitterStyle, UBoxComponent* NewBox, USphereComponent* NewSphere) {
}

AFairSoundEmitter::AFairSoundEmitter() {
    this->bAutoPlay = true;
    this->fadeInTime = 1.00f;
    this->pPoolObj = NULL;
    this->Box = NULL;
    this->Sphere = NULL;
}

