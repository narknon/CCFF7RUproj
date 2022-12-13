#include "MediaDebugWrapper.h"

class UManaComponent;
class USoundAtomCueSheet;
class UFairAtomComponent;
class UFairCueSheetManager;
class UImage;
class UFairSoundComponentPool;
class UFairSoundPoolObject;
class UWorld;

void UMediaDebugWrapper::SubTitleCallbackBindTest() {
}

int32 UMediaDebugWrapper::SoundManager_VoiceTrack_GetId(const FFairVoiceTrack& voiceTrack) {
    return 0;
}

FString UMediaDebugWrapper::SoundManager_VoiceTrack_GetCueName(const FFairVoiceTrack& voiceTrack) {
    return TEXT("");
}

UFairAtomComponent* UMediaDebugWrapper::SoundManager_VoiceTrack_GetAtomComponent(const FFairVoiceTrack& voiceTrack) {
    return NULL;
}

void UMediaDebugWrapper::SoundManager_StopVoice2(const int32 iID, const float fTime) {
}

void UMediaDebugWrapper::SoundManager_StopVoice(const float Time) {
}

int32 UMediaDebugWrapper::SoundManager_StopSE(const int32 voiceNumber) {
    return 0;
}

void UMediaDebugWrapper::SoundManager_StopMusic(const int32 iID, const float fTime) {
}

void UMediaDebugWrapper::SoundManager_StopBattleMusic(const bool win) {
}

void UMediaDebugWrapper::SoundManager_StopBankSE(const int32 bank) {
}

void UMediaDebugWrapper::SoundManager_StopAllSE() {
}

void UMediaDebugWrapper::SoundManager_StartBattleEvent() {
}

void UMediaDebugWrapper::SoundManager_SetVolumeVoice2(const int32 iID, const int32 iVolume, const float fTime) {
}

void UMediaDebugWrapper::SoundManager_SetVolumeVoice(const int32 Volume, const float Time) {
}

void UMediaDebugWrapper::SoundManager_SetVolumeSE(const int32 voiceNumber, int32 Volume, const float Time, bool FadeOut) {
}

void UMediaDebugWrapper::SoundManager_SetVolumeMusic(const int32 iID, const int32 iVolume, const float fTime) {
}

void UMediaDebugWrapper::SoundManager_SetVolumeBattleMusic(const int32 Volume, const float fTime) {
}

void UMediaDebugWrapper::SoundManager_SetVoiceLanguage(EVoiceLanguage lang) {
}

bool UMediaDebugWrapper::SoundManager_SeTrack_NoSlotPause(const FFairSeTrack& seTrack) {
    return false;
}

int32 UMediaDebugWrapper::SoundManager_SeTrack_GetId(const FFairSeTrack& seTrack) {
    return 0;
}

bool UMediaDebugWrapper::SoundManager_SeTrack_GetBFree(const FFairSeTrack& seTrack) {
    return false;
}

FString UMediaDebugWrapper::SoundManager_SeTrack_CueSheetName(const FFairSeTrack& seTrack) {
    return TEXT("");
}

void UMediaDebugWrapper::SoundManager_SetPositionSE(const int32 voiceNum, const float X, const int32 Z) {
}

void UMediaDebugWrapper::SoundManager_SetMusicTime(const int32 iID, const float fTime) {
}

TArray<UFairSoundPoolObject*> UMediaDebugWrapper::SoundManager_SeComponentPool_GetComponentPool(UFairSoundComponentPool* componentPool) {
    return TArray<UFairSoundPoolObject*>();
}

void UMediaDebugWrapper::SoundManager_RestartMusic(const int32 iID, const float fTime) {
}

void UMediaDebugWrapper::SoundManager_ReleaseSE(const int32 ID) {
}

void UMediaDebugWrapper::SoundManager_ReleaseBattleMusic() {
}

int32 UMediaDebugWrapper::SoundManager_RB_GetWriteVoiceID() {
    return 0;
}

int32 UMediaDebugWrapper::SoundManager_RB_GetReadVoiceID() {
    return 0;
}

int32 UMediaDebugWrapper::SoundManager_RB_GetLastVoiceID() {
    return 0;
}

bool UMediaDebugWrapper::SoundManager_PoolObject_IsInUse(UFairSoundPoolObject* poolObject) {
    return false;
}

float UMediaDebugWrapper::SoundManager_PoolObject_GetVolume(UFairSoundPoolObject* poolObject) {
    return 0.0f;
}

int32 UMediaDebugWrapper::SoundManager_PoolObject_GetVoiceNumber(UFairSoundPoolObject* poolObject) {
    return 0;
}

FString UMediaDebugWrapper::SoundManager_PoolObject_GetFadeStat(UFairSoundPoolObject* poolObject) {
    return TEXT("");
}

UFairAtomComponent* UMediaDebugWrapper::SoundManager_PoolObject_GetComponent(UFairSoundPoolObject* poolObject) {
    return NULL;
}

int32 UMediaDebugWrapper::SoundManager_PoolObject_GetBankId(UFairSoundPoolObject* poolObject) {
    return 0;
}

bool UMediaDebugWrapper::SoundManager_PlayVoice2(const int32 iID, const float fTime) {
    return false;
}

bool UMediaDebugWrapper::SoundManager_PlayVoice(const float Time) {
    return false;
}

int32 UMediaDebugWrapper::SoundManager_PlaySE(const int32 seId, const float X, const int32 Z) {
    return 0;
}

bool UMediaDebugWrapper::SoundManager_PlayMusic(const int32 iID, const float fTime) {
    return false;
}

void UMediaDebugWrapper::SoundManager_PlayBattleMusic() {
}

void UMediaDebugWrapper::SoundManager_PauseSlotSE(const bool Pause) {
}

int32 UMediaDebugWrapper::SoundManager_PauseSE(const int32 voiceNumber) {
    return 0;
}

void UMediaDebugWrapper::SoundManager_PauseMusic(const int32 iID, const float fTime) {
}

void UMediaDebugWrapper::SoundManager_PauseBankSE(const int32 bank, const bool Pause) {
}

void UMediaDebugWrapper::SoundManager_PauseAllSE(const bool Pause) {
}

void UMediaDebugWrapper::SoundManager_onTermSubsystem() {
}

void UMediaDebugWrapper::SoundManager_onInitSubsystem() {
}

int32 UMediaDebugWrapper::SoundManager_MusicTrack_GetId(const FFairMusicTrack& musicTrack) {
    return 0;
}

FString UMediaDebugWrapper::SoundManager_MusicTrack_GetCueName(const FFairMusicTrack& musicTrack) {
    return TEXT("");
}

float UMediaDebugWrapper::SoundManager_MusicTrack_GetAtomComponentVolume(UFairAtomComponent* AtomComponent) {
    return 0.0f;
}

UFairAtomComponent* UMediaDebugWrapper::SoundManager_MusicTrack_GetAtomComponent(const FFairMusicTrack& musicTrack) {
    return NULL;
}

bool UMediaDebugWrapper::SoundManager_LoadVoice2(const int32 iID, const bool bFree) {
    return false;
}

bool UMediaDebugWrapper::SoundManager_LoadVoice(const int32 iID, const bool autoFree) {
    return false;
}

int32 UMediaDebugWrapper::SoundManager_LoadSE(const int32 ID, const bool autoFree, const bool bSlotSE) {
    return 0;
}

void UMediaDebugWrapper::SoundManager_LoadResident() {
}

bool UMediaDebugWrapper::SoundManager_LoadMusic(const int32 iID, const bool bFree) {
    return false;
}

void UMediaDebugWrapper::SoundManager_LoadBattleMusic(const int32 iIndex) {
}

bool UMediaDebugWrapper::SoundManager_IsStoppedVoice2(const int32 iID) {
    return false;
}

bool UMediaDebugWrapper::SoundManager_IsStoppedVoice() {
    return false;
}

int32 UMediaDebugWrapper::SoundManager_IsLoadedSE(const int32 ID) {
    return 0;
}

int32 UMediaDebugWrapper::SoundManager_GetVolumeMusic(const int32 ID) {
    return 0;
}

int32 UMediaDebugWrapper::SoundManager_GetVolumeBattleMusic() {
    return 0;
}

TArray<FFairSeTrack> UMediaDebugWrapper::SoundManager_GetSeTracks() {
    return TArray<FFairSeTrack>();
}

UFairSoundComponentPool* UMediaDebugWrapper::SoundManager_GetSeComponentPool() {
    return NULL;
}

TArray<FFairVoiceTrack> UMediaDebugWrapper::SoundManager_GetRingBufferedVoiceTracks() {
    return TArray<FFairVoiceTrack>();
}

TArray<USoundAtomCueSheet*> UMediaDebugWrapper::SoundManager_GetResidentCueSheets(UFairCueSheetManager* cueSheetManager) {
    return TArray<USoundAtomCueSheet*>();
}

TArray<FFairMusicTrack> UMediaDebugWrapper::SoundManager_GetMusicTracks() {
    return TArray<FFairMusicTrack>();
}

TArray<USoundAtomCueSheet*> UMediaDebugWrapper::SoundManager_GetDynamicCueSheets(UFairCueSheetManager* cueSheetManager) {
    return TArray<USoundAtomCueSheet*>();
}

int32 UMediaDebugWrapper::SoundManager_GetCurrentMusicId() {
    return 0;
}

UFairCueSheetManager* UMediaDebugWrapper::SoundManager_GetCueSheetManager() {
    return NULL;
}

TArray<FFairVoiceTrack> UMediaDebugWrapper::SoundManager_GetBufferedVoiceTracks() {
    return TArray<FFairVoiceTrack>();
}

UFairAtomComponent* UMediaDebugWrapper::SoundManager_GetBattleMusic() {
    return NULL;
}

void UMediaDebugWrapper::SoundManager_EndBattleEvent() {
}

bool UMediaDebugWrapper::SoundManager_CrossPlayMusic(const int32 iID, const float fTime) {
    return false;
}

void UMediaDebugWrapper::SoundManager_CancelStopMusic(const int32 iID) {
}

void UMediaDebugWrapper::SetInGameVolumeByCategoryName(ESoundCategory Category, float destVol) {
}

void UMediaDebugWrapper::SetFadeByCategoryName(ESoundCategory Category, float FadeTime, float destVol) {
}

void UMediaDebugWrapper::SetFadeAllCategory(float FadeTime, float destVol) {
}

void UMediaDebugWrapper::SetConfigVolumeByCategoryName(ESoundCategory Category, float destVol) {
}

void UMediaDebugWrapper::MuteAll(bool IsMute) {
}

void UMediaDebugWrapper::MovieManager_Stop() {
}

void UMediaDebugWrapper::MovieManager_SetVolume(const int32 Count, const float NewVolume) {
}

void UMediaDebugWrapper::MovieManager_PrepareOnly(const int32 iFileIndex, UImage* Image) {
}

void UMediaDebugWrapper::MovieManager_PlayFromPrepareOnly(const int32 iFileIndex, UImage* Image) {
}

void UMediaDebugWrapper::MovieManager_Play(const int32 iFileIndex, UImage* Image) {
}

bool UMediaDebugWrapper::MovieManager_Pause() {
    return false;
}

void UMediaDebugWrapper::MovieManager_Open(const int32 calcFlag, const int32 drawFlag, const bool cancel) {
}

void UMediaDebugWrapper::MovieManager_onTermSubsystem() {
}

void UMediaDebugWrapper::MovieManager_onInitSubsystem() {
}

bool UMediaDebugWrapper::MovieManager_IsStoped() {
    return false;
}

int32 UMediaDebugWrapper::MovieManager_GetPictureFrame() {
    return 0;
}

UManaComponent* UMediaDebugWrapper::MovieManager_GetManaComponent() {
    return NULL;
}

void UMediaDebugWrapper::MovieManager_Fade(const int32 Count, const int32 R, const int32 G, const int32 B, const int32 A) {
}

void UMediaDebugWrapper::MovieManager_Close() {
}

void UMediaDebugWrapper::IsInit(EOutPutPin& OutputPin) {
}

void UMediaDebugWrapper::InPause(bool isIn) {
}

void UMediaDebugWrapper::InMenu(bool isIn) {
}

void UMediaDebugWrapper::InitFromWorld(UWorld* pWorld) {
}

void UMediaDebugWrapper::Init() {
}

float UMediaDebugWrapper::GetInGameVolumeByCategoryName(ESoundCategory Category) {
    return 0.0f;
}

float UMediaDebugWrapper::GetConfigVolumeByCategoryName(ESoundCategory Category) {
    return 0.0f;
}

void UMediaDebugWrapper::Deinitialize() {
}

void UMediaDebugWrapper::CheckMovieSubTitle(FText Subtitle) {
}

UMediaDebugWrapper::UMediaDebugWrapper() {
    this->m_pSoundManager = NULL;
    this->m_pMovieManager = NULL;
}

