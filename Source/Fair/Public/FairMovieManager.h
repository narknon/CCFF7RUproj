#pragma once
#include "CoreMinimal.h"
#include "FairMovieBuff.h"
#include "MediaDebugWrapper.h"
#include "ZGameInstanceSubsystemBase.h"
#include "ManaSource.h"
#include "FairMovieManager.generated.h"

class UManaTexture;
class UUserWidget;
class UImage;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class FAIR_API UFairMovieManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* m_movieBaseWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_movieBaseImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_movieExtImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_movieBackImage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaMovie* m_manaMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaSource* m_movieSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaMovie* m_addManaMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaSource* m_addMovieSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UManaComponent* m_manaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaTexture* m_manaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_materialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaTexture* addMovieTexture;
    
    UPROPERTY(EditAnywhere)
    FFairMovieBuff m_MovieBuffData[2];
    
public:
    UFairMovieManager();
    UFUNCTION(BlueprintCallable)
    void SubtitleCall(FText MessageLabel);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioVolume(float masterVolume, float bgmVolume, float seVolume, float voiceVolume);
    
    UFUNCTION(BlueprintCallable)
    void LoopMovieCallback(UManaComponent* ManaComponent);
    
    UFUNCTION(BlueprintCallable)
    void EventCall(FManaEventPointInfo EventPointInfo);
    
};

