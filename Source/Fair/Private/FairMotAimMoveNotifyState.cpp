#include "FairMotAimMoveNotifyState.h"

UFairMotAimMoveNotifyState::UFairMotAimMoveNotifyState() {
    this->Mode = EFairMotAimMoveMode::None;
    this->moveVMax = 0.00f;
    this->move = 0.00f;
    this->rotVMax = 0.00f;
    this->rota = 0.00f;
    this->aimTime = 0.00f;
    this->animActDec = 0.00f;
}

