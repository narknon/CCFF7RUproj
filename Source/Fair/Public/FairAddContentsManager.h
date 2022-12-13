#pragma once
#include "CoreMinimal.h"
#include "AddContentsPresentInfo.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairAddContentsManager.generated.h"

class UFairAddContentsData;
class UFairAddContentsPresentData;

UCLASS(Blueprintable)
class FAIR_API UFairAddContentsManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> _EntitledData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairAddContentsData* m_AddContentsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairAddContentsPresentData* m_AddContentsPresentData;
    
public:
    UFairAddContentsManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitledAddContents(const FString& AddContentName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAddContentsPresentInfo(TArray<FAddContentsPresentInfo>& infoList, const FString& AddContentName);
    
};

