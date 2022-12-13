#pragma once
#include "CoreMinimal.h"
#include "EVoiceLanguage.h"
#include "FairMusicTrack.h"
#include "FairVoiceTrack.h"
#include "FairSeTrack.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairSoundManager.generated.h"

class UFairAtomComponent;
class UFairCueSheetManager;
class UFairFootStepSoundDetector;
class UFairSoundEmitterList;
class UFairSoundComponentPool;
class UFairSoundVolumeController;
class UFairSoundEnvController;

UCLASS(Blueprintable)
class FAIR_API UFairSoundManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairMusicTrack> m_musicTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFairAtomComponent*> m_fadingMusicComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFairAtomComponent* m_battleMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairVoiceTrack> m_ringBufferedVoiceTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairVoiceTrack> m_bufferedVoiceTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairSeTrack> m_seTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairSoundComponentPool* m_seComponentPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairCueSheetManager* m_cueSheetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairSoundVolumeController* m_volumeController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairSoundEmitterList* m_soundEmitterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairSoundEnvController* m_soundEnvController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairFootStepSoundDetector* m_footStepSoundDetector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_battleMusicCueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_soundAssetBasePath;
    
public:
    UFairSoundManager();
    UFUNCTION(BlueprintCallable)
    void SetVoiceLanguage(EVoiceLanguage lang);
    
};

