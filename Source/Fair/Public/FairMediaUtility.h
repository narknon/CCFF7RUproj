#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairMediaUtility.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class FAIR_API UFairMediaUtility : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_SoundFileList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_SE_DataList;
    
    UFairMediaUtility();
    UFUNCTION(BlueprintCallable)
    FString GetSoundFileNameFromID(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    FString GetSePackageNameFromID(int32 ID);
    
};

