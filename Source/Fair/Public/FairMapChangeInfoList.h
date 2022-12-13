#pragma once
#include "CoreMinimal.h"
#include "FairMapChangeInfoForNormal.h"
#include "FairMapChangeInfoForEvent.h"
#include "FairMapChangeInfoForExtraMap.h"
#include "FairMapChangeInfoForMission.h"
#include "Engine/DataAsset.h"
#include "FairMapChangeInfoList.generated.h"

UCLASS(Blueprintable)
class UFairMapChangeInfoList : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairMapChangeInfoForNormal MapChangeInfoForNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairMapChangeInfoForEvent MapChangeInfoForEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairMapChangeInfoForExtraMap MapChangeInfoForExtraMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairMapChangeInfoForMission MapChangeInfoForMission;
    
public:
    UFairMapChangeInfoList();
private:
    UFUNCTION(BlueprintCallable)
    void buildDataAsset();
    
};

