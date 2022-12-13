#include "ZTimer.h"

FZTimer::FZTimer() {
    this->CurrentTime = 0.00f;
    this->EndTime = 0.00f;
    this->bEnable = false;
    this->bOver = false;
    this->bPause = false;
}

