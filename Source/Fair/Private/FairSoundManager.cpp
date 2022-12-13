#include "FairSoundManager.h"

void UFairSoundManager::SetVoiceLanguage(EVoiceLanguage lang) {
}

UFairSoundManager::UFairSoundManager() {
    this->m_battleMusic = NULL;
    this->m_seComponentPool = NULL;
    this->m_cueSheetManager = NULL;
    this->m_volumeController = NULL;
    this->m_soundEmitterList = NULL;
    this->m_soundEnvController = NULL;
    this->m_footStepSoundDetector = NULL;
}

