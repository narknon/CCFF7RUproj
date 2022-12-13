#include "FairAccountManager.h"

void UFairAccountManager::Shutdown() {
}

void UFairAccountManager::SetPause(EFairAccountManagerPauseType pauseType, bool bPause) {
}

void UFairAccountManager::SetGamePause(EFairAccountManagerGamePauseType pauseType, bool bPause) {
}

void UFairAccountManager::SaveGameCheckUniqueNetId(int32 UserIndex, int32& success) {
}

bool UFairAccountManager::IsValidGamerTag() {
    return false;
}

bool UFairAccountManager::IsSignInFlow() {
    return false;
}

bool UFairAccountManager::IsPause() const {
    return false;
}

bool UFairAccountManager::IsGamePause() const {
    return false;
}

bool UFairAccountManager::IsConnectController() {
    return false;
}

bool UFairAccountManager::IsChangeProfileFlow() {
    return false;
}

void UFairAccountManager::InitManager() {
}

FString UFairAccountManager::GetLocalPlayerUserID() {
    return TEXT("");
}

int32 UFairAccountManager::GetLocalPlayerControllerID() {
    return 0;
}

FString UFairAccountManager::GetGamerTag() {
    return TEXT("");
}

FString UFairAccountManager::GetFirstLocalPlayerUserID() {
    return TEXT("");
}

void UFairAccountManager::BeginSignInFlow() {
}

void UFairAccountManager::BeginChangeProfileFlow() {
}

void UFairAccountManager::AboutFlow(FName FlowType) {
}

UFairAccountManager::UFairAccountManager() {
    this->FirstUserAccountID = TEXT("ID_INVALID");
}

