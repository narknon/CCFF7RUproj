#include "FairAssetManager.h"

bool UFairAssetManager::IsInitialChunkMounted() {
    return false;
}

bool UFairAssetManager::IsFullInstallPackage() {
    return false;
}

bool UFairAssetManager::IsChunkMounted(const int32 ChunkId) {
    return false;
}

bool UFairAssetManager::IsChunkLoaded(const int32 ChunkId, const bool isNotExistError) {
    return false;
}

UFairAssetManager::UFairAssetManager() {
}

