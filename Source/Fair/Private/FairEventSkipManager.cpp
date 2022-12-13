#include "FairEventSkipManager.h"

UFairEventSkipManager::UFairEventSkipManager() {
    this->m_isEventSkip = false;
    this->m_nowEventIndex = 0;
    this->m_terminateIndex = 0;
    this->m_debugNowEventIndex = 0;
    this->m_debugTerminateIndex = 0;
    this->m_isDebugCheckMode = false;
    this->m_isRepeatCheckMode = false;
    this->m_repeatCount = 0;
}

