#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "StickInfo.h"
#include "GameFramework/PlayerController.h"
#include "FairController.generated.h"

UCLASS(Blueprintable)
class AFairController : public APlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, bool> m_triggerKeyDownList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> m_triggerKeyInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> m_triggerDelayReleaseList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, bool> m_repeatKeyDownList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, float> m_repeatKeyInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> m_repeatDelayReleaseList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, bool> m_releaseKeyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> m_releaseKeyInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> m_releaseDelayReleaseList;
    
    UPROPERTY(EditAnywhere)
    FStickInfo m_stickInfo[2];
    
    UPROPERTY(EditAnywhere)
    FStickInfo m_stickOnlyInfo[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> m_delayReleaseKeyTable;
    
public:
    AFairController();
};

