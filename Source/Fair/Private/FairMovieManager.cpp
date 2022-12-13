#include "FairMovieManager.h"

class UManaComponent;

void UFairMovieManager::SubtitleCall(FText MessageLabel) {
}

void UFairMovieManager::SetAudioVolume(float masterVolume, float bgmVolume, float seVolume, float voiceVolume) {
}

void UFairMovieManager::LoopMovieCallback(UManaComponent* ManaComponent) {
}

void UFairMovieManager::EventCall(FManaEventPointInfo EventPointInfo) {
}

UFairMovieManager::UFairMovieManager() {
    this->m_movieBaseWidget = NULL;
    this->m_movieBaseImage = NULL;
    this->m_movieExtImage = NULL;
    this->m_movieBackImage = NULL;
    this->m_manaMovie = NULL;
    this->m_movieSource = NULL;
    this->m_addManaMovie = NULL;
    this->m_addMovieSource = NULL;
    this->m_manaComponent = NULL;
    this->m_manaTexture = NULL;
    this->m_materialInstance = NULL;
    this->addMovieTexture = NULL;
}

