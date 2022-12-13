#include "FairAddContentsManager.h"

bool UFairAddContentsManager::IsEntitledAddContents(const FString& AddContentName) {
    return false;
}

bool UFairAddContentsManager::GetAddContentsPresentInfo(TArray<FAddContentsPresentInfo>& infoList, const FString& AddContentName) {
    return false;
}

UFairAddContentsManager::UFairAddContentsManager() {
    this->m_AddContentsData = NULL;
    this->m_AddContentsPresentData = NULL;
}

