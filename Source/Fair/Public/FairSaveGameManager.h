#pragma once
#include "CoreMinimal.h"
#include "EFairSaveResult.h"
#include "FairSaveDataSlotInfo.h"
#include "FairSaveGameSlotBuffer.h"
#include "UObject/Object.h"
#include "FairSaveGameManager.generated.h"

class USaveGame;
class UFairSaveGame;
class UTexture2D;

UCLASS(Blueprintable)
class FAIR_API UFairSaveGameManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairSaveGame* pSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairSaveResult m_saveResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairSaveGameSlotBuffer> m_processSlotBufferList;
    
    UPROPERTY(EditAnywhere)
    uint32 m_processSlotVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairSaveGameSlotBuffer m_saveProcessSlotBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairSaveDataSlotInfo> m_processSlotInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairSaveDataSlotInfo m_saveProcessSlotInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFinishAsyncSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFinishAsyncLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_saveSloatNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_thumbnailTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairSaveGame* m_loadedSaveGame;
    
    UPROPERTY(EditAnywhere)
    UFairSaveGame* m_loadedSaveGamePS4[2];
    
public:
    UFairSaveGameManager();
private:
    UFUNCTION(BlueprintCallable)
    void AsyncSaveCompleted(const FString& savedSlotName, const int32 savedUserIndex, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadSystemCompleted(const FString& savedSlotName, const int32 loadedUserIndex, USaveGame* pLoad);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadProgressCompleted(const FString& savedSlotName, const int32 loadedUserIndex, USaveGame* pLoad);
    
};

