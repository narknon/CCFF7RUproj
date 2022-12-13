#pragma once
#include "CoreMinimal.h"
#include "EZStreamingPoolLevel.h"
#include "ZGameInstanceSubsystemBase.h"
#include "ZStreamingPoolSystem.generated.h"

class UZStreamingPoolConfigList;

UCLASS(Blueprintable)
class UZStreamingPoolSystem : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZStreamingPoolConfigList* StreamingPoolConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EZStreamingPoolLevel> StreamingPoolLevelStack;
    
public:
    UZStreamingPoolSystem();
    UFUNCTION(BlueprintCallable)
    void SetStreamingPoolLevel(EZStreamingPoolLevel StreamingPoolLevel);
    
    UFUNCTION(BlueprintCallable)
    void PushStreaminPoolLevel();
    
    UFUNCTION(BlueprintCallable)
    void PopStreamingPoolLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EZStreamingPoolLevel GetStreamingPoolLevel() const;
    
};

