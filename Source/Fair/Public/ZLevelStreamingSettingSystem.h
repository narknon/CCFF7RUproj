#pragma once
#include "CoreMinimal.h"
#include "ZLevelStreamingSetting.h"
#include "ZGameInstanceSubsystemBase.h"
#include "ZLevelStreamingSettingSystem.generated.h"

class UZLevelStreamingSettingList;

UCLASS(Blueprintable)
class UZLevelStreamingSettingSystem : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableLevelStreamingSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZLevelStreamingSettingList* LevelStreamingSettingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FZLevelStreamingSetting> ApppliedLevelStreamingSettings;
    
public:
    UZLevelStreamingSettingSystem();
};

