#pragma once
#include "CoreMinimal.h"
#include "ESoundCategory.h"
#include "EVoiceLanguage.h"
#include "EOutPutPin.h"
#include "FairMusicTrack.h"
#include "FairVoiceTrack.h"
#include "FairSeTrack.h"

#include "UObject/Object.h"
#include "MediaDebugWrapper.generated.h"


class USoundAtomCueSheet;
class UFairAtomComponent;
class UFairCueSheetManager;
class UImage;
class UFairMovieManager;
class UFairSoundComponentPool;
class UFairSoundPoolObject;
class UFairSoundManager;
class UWorld;

UCLASS(Blueprintable)
class FAIR_API UMediaDebugWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairSoundManager* m_pSoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairMovieManager* m_pMovieManager;
    
    UMediaDebugWrapper();
    UFUNCTION(BlueprintCallable)
    void SubTitleCallbackBindTest();
    
    UFUNCTION(BlueprintCallable)
    int32 SoundManager_VoiceTrack_GetId(const FFairVoiceTrack& voiceTrack);
    
    UFUNCTION(BlueprintCallable)
    FString SoundManager_VoiceTrack_GetCueName(const FFairVoiceTrack& voiceTrack);
    
    UFUNCTION(BlueprintCallable)
    UFairAtomComponent* SoundManager_VoiceTrack_GetAtomComponent(const FFairVoiceTrack& voiceTrack);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_StopVoice2(const int32 iID, const float fTime);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_StopVoice(const float Time);
    
    UFUNCTION(BlueprintCallable)
    int32 SoundManager_StopSE(const int32 voiceNumber);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_StopMusic(const int32 iID, const float fTime);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_StopBattleMusic(const bool win);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_StopBankSE(const int32 bank);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_StopAllSE();
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_StartBattleEvent();
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_SetVolumeVoice2(const int32 iID, const int32 iVolume, const float fTime);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_SetVolumeVoice(const int32 Volume, const float Time);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_SetVolumeSE(const int32 voiceNumber, int32 Volume, const float Time, bool FadeOut);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_SetVolumeMusic(const int32 iID, const int32 iVolume, const float fTime);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_SetVolumeBattleMusic(const int32 Volume, const float fTime);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_SetVoiceLanguage(EVoiceLanguage lang);
    
    UFUNCTION(BlueprintCallable)
    bool SoundManager_SeTrack_NoSlotPause(const FFairSeTrack& seTrack);
    
    UFUNCTION(BlueprintCallable)
    int32 SoundManager_SeTrack_GetId(const FFairSeTrack& seTrack);
    
    UFUNCTION(BlueprintCallable)
    bool SoundManager_SeTrack_GetBFree(const FFairSeTrack& seTrack);
    
    UFUNCTION(BlueprintCallable)
    FString SoundManager_SeTrack_CueSheetName(const FFairSeTrack& seTrack);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_SetPositionSE(const int32 voiceNum, const float X, const int32 Z);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_SetMusicTime(const int32 iID, const float fTime);
    
    UFUNCTION(BlueprintCallable)
    TArray<UFairSoundPoolObject*> SoundManager_SeComponentPool_GetComponentPool(UFairSoundComponentPool* componentPool);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_RestartMusic(const int32 iID, const float fTime);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_ReleaseSE(const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_ReleaseBattleMusic();
    
    UFUNCTION(BlueprintCallable)
    int32 SoundManager_RB_GetWriteVoiceID();
    
    UFUNCTION(BlueprintCallable)
    int32 SoundManager_RB_GetReadVoiceID();
    
    UFUNCTION(BlueprintCallable)
    int32 SoundManager_RB_GetLastVoiceID();
    
    UFUNCTION(BlueprintCallable)
    bool SoundManager_PoolObject_IsInUse(UFairSoundPoolObject* poolObject);
    
    UFUNCTION(BlueprintCallable)
    float SoundManager_PoolObject_GetVolume(UFairSoundPoolObject* poolObject);
    
    UFUNCTION(BlueprintCallable)
    int32 SoundManager_PoolObject_GetVoiceNumber(UFairSoundPoolObject* poolObject);
    
    UFUNCTION(BlueprintCallable)
    FString SoundManager_PoolObject_GetFadeStat(UFairSoundPoolObject* poolObject);
    
    UFUNCTION(BlueprintCallable)
    UFairAtomComponent* SoundManager_PoolObject_GetComponent(UFairSoundPoolObject* poolObject);
    
    UFUNCTION(BlueprintCallable)
    int32 SoundManager_PoolObject_GetBankId(UFairSoundPoolObject* poolObject);
    
    UFUNCTION(BlueprintCallable)
    bool SoundManager_PlayVoice2(const int32 iID, const float fTime);
    
    UFUNCTION(BlueprintCallable)
    bool SoundManager_PlayVoice(const float Time);
    
    UFUNCTION(BlueprintCallable)
    int32 SoundManager_PlaySE(const int32 seId, const float X, const int32 Z);
    
    UFUNCTION(BlueprintCallable)
    bool SoundManager_PlayMusic(const int32 iID, const float fTime);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_PlayBattleMusic();
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_PauseSlotSE(const bool Pause);
    
    UFUNCTION(BlueprintCallable)
    int32 SoundManager_PauseSE(const int32 voiceNumber);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_PauseMusic(const int32 iID, const float fTime);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_PauseBankSE(const int32 bank, const bool Pause);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_PauseAllSE(const bool Pause);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_onTermSubsystem();
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_onInitSubsystem();
    
    UFUNCTION(BlueprintCallable)
    int32 SoundManager_MusicTrack_GetId(const FFairMusicTrack& musicTrack);
    
    UFUNCTION(BlueprintCallable)
    FString SoundManager_MusicTrack_GetCueName(const FFairMusicTrack& musicTrack);
    
    UFUNCTION(BlueprintCallable)
    float SoundManager_MusicTrack_GetAtomComponentVolume(UFairAtomComponent* AtomComponent);
    
    UFUNCTION(BlueprintCallable)
    UFairAtomComponent* SoundManager_MusicTrack_GetAtomComponent(const FFairMusicTrack& musicTrack);
    
    UFUNCTION(BlueprintCallable)
    bool SoundManager_LoadVoice2(const int32 iID, const bool bFree);
    
    UFUNCTION(BlueprintCallable)
    bool SoundManager_LoadVoice(const int32 iID, const bool autoFree);
    
    UFUNCTION(BlueprintCallable)
    int32 SoundManager_LoadSE(const int32 ID, const bool autoFree, const bool bSlotSE);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_LoadResident();
    
    UFUNCTION(BlueprintCallable)
    bool SoundManager_LoadMusic(const int32 iID, const bool bFree);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_LoadBattleMusic(const int32 iIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SoundManager_IsStoppedVoice2(const int32 iID);
    
    UFUNCTION(BlueprintCallable)
    bool SoundManager_IsStoppedVoice();
    
    UFUNCTION(BlueprintCallable)
    int32 SoundManager_IsLoadedSE(const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    int32 SoundManager_GetVolumeMusic(const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    int32 SoundManager_GetVolumeBattleMusic();
    
    UFUNCTION(BlueprintCallable)
    TArray<FFairSeTrack> SoundManager_GetSeTracks();
    
    UFUNCTION(BlueprintCallable)
    UFairSoundComponentPool* SoundManager_GetSeComponentPool();
    
    UFUNCTION(BlueprintCallable)
    TArray<FFairVoiceTrack> SoundManager_GetRingBufferedVoiceTracks();
    
    UFUNCTION(BlueprintCallable)
    TArray<USoundAtomCueSheet*> SoundManager_GetResidentCueSheets(UFairCueSheetManager* cueSheetManager);
    
    UFUNCTION(BlueprintCallable)
    TArray<FFairMusicTrack> SoundManager_GetMusicTracks();
    
    UFUNCTION(BlueprintCallable)
    TArray<USoundAtomCueSheet*> SoundManager_GetDynamicCueSheets(UFairCueSheetManager* cueSheetManager);
    
    UFUNCTION(BlueprintCallable)
    int32 SoundManager_GetCurrentMusicId();
    
    UFUNCTION(BlueprintCallable)
    UFairCueSheetManager* SoundManager_GetCueSheetManager();
    
    UFUNCTION(BlueprintCallable)
    TArray<FFairVoiceTrack> SoundManager_GetBufferedVoiceTracks();
    
    UFUNCTION(BlueprintCallable)
    UFairAtomComponent* SoundManager_GetBattleMusic();
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_EndBattleEvent();
    
    UFUNCTION(BlueprintCallable)
    bool SoundManager_CrossPlayMusic(const int32 iID, const float fTime);
    
    UFUNCTION(BlueprintCallable)
    void SoundManager_CancelStopMusic(const int32 iID);
    
    UFUNCTION(BlueprintCallable)
    void SetInGameVolumeByCategoryName(ESoundCategory Category, float destVol);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeByCategoryName(ESoundCategory Category, float FadeTime, float destVol);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeAllCategory(float FadeTime, float destVol);
    
    UFUNCTION(BlueprintCallable)
    void SetConfigVolumeByCategoryName(ESoundCategory Category, float destVol);
    
    UFUNCTION(BlueprintCallable)
    void MuteAll(bool IsMute);
    
    UFUNCTION(BlueprintCallable)
    void MovieManager_Stop();
    
    UFUNCTION(BlueprintCallable)
    void MovieManager_SetVolume(const int32 Count, const float NewVolume);
    
    UFUNCTION(BlueprintCallable)
    void MovieManager_PrepareOnly(const int32 iFileIndex, UImage* Image);
    
    UFUNCTION(BlueprintCallable)
    void MovieManager_PlayFromPrepareOnly(const int32 iFileIndex, UImage* Image);
    
    UFUNCTION(BlueprintCallable)
    void MovieManager_Play(const int32 iFileIndex, UImage* Image);
    
    UFUNCTION(BlueprintCallable)
    bool MovieManager_Pause();
    
    UFUNCTION(BlueprintCallable)
    void MovieManager_Open(const int32 calcFlag, const int32 drawFlag, const bool cancel);
    
    UFUNCTION(BlueprintCallable)
    void MovieManager_onTermSubsystem();
    
    UFUNCTION(BlueprintCallable)
    void MovieManager_onInitSubsystem();
    
    UFUNCTION(BlueprintCallable)
    bool MovieManager_IsStoped();
    
    UFUNCTION(BlueprintCallable)
    int32 MovieManager_GetPictureFrame();
    
    UFUNCTION(BlueprintCallable)
    UManaComponent* MovieManager_GetManaComponent();
    
    UFUNCTION(BlueprintCallable)
    void MovieManager_Fade(const int32 Count, const int32 R, const int32 G, const int32 B, const int32 A);
    
    UFUNCTION(BlueprintCallable)
    void MovieManager_Close();
    
    UFUNCTION(BlueprintCallable)
    void IsInit(EOutPutPin& OutputPin);
    
    UFUNCTION(BlueprintCallable)
    void InPause(bool isIn);
    
    UFUNCTION(BlueprintCallable)
    void InMenu(bool isIn);
    
    UFUNCTION(BlueprintCallable)
    void InitFromWorld(UWorld* pWorld);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    float GetInGameVolumeByCategoryName(ESoundCategory Category);
    
    UFUNCTION(BlueprintCallable)
    float GetConfigVolumeByCategoryName(ESoundCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void Deinitialize();
    
    UFUNCTION(BlueprintCallable)
    void CheckMovieSubTitle(FText Subtitle);
    
};

