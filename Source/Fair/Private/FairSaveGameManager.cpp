#include "FairSaveGameManager.h"

class USaveGame;

void UFairSaveGameManager::AsyncSaveCompleted(const FString& savedSlotName, const int32 savedUserIndex, bool bSuccess) {
}

void UFairSaveGameManager::AsyncLoadSystemCompleted(const FString& savedSlotName, const int32 loadedUserIndex, USaveGame* pLoad) {
}

void UFairSaveGameManager::AsyncLoadProgressCompleted(const FString& savedSlotName, const int32 loadedUserIndex, USaveGame* pLoad) {
}

UFairSaveGameManager::UFairSaveGameManager() {
    this->pSave = NULL;
    this->m_saveResult = EFairSaveResult::None;
    this->m_processSlotVersion = 0;
    this->isFinishAsyncSave = false;
    this->isFinishAsyncLoad = false;
    this->m_saveSloatNo = -1;
    this->m_thumbnailTexture = NULL;
    this->m_loadedSaveGame = NULL;
    this->m_loadedSaveGamePS4[0] = NULL;
    this->m_loadedSaveGamePS4[1] = NULL;
}

