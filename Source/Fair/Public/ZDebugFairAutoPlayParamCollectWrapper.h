#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ZDebugFairAutoPlayParamCollectWrapper.generated.h"

UCLASS(Blueprintable)
class FAIR_API UZDebugFairAutoPlayParamCollectWrapper : public UObject {
    GENERATED_BODY()
public:
    UZDebugFairAutoPlayParamCollectWrapper();
    UFUNCTION(BlueprintCallable)
    void SetOutPutFileName(const FString& file_name);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionDataCollectFlag(const bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayParamCollectFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void ResetCollectSystem();
    
    UFUNCTION(BlueprintCallable)
    bool IsMoveCommandAddShortCutKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoPlayParamCollectSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoPlayParamCollect() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetTargetLocation();
    
    UFUNCTION(BlueprintCallable)
    FString GetOutPutFileName();
    
    UFUNCTION(BlueprintCallable)
    FVector GetMoveLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMissionDataCollectFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFocusInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void DrawTargetLocationCylinder();
    
    UFUNCTION(BlueprintCallable)
    void DrawMoveLocationCylinder();
    
    UFUNCTION(BlueprintCallable)
    bool AddMoveCommandParam();
    
    UFUNCTION(BlueprintCallable)
    bool AddActionCommandParam();
    
};

