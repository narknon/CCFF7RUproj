#pragma once
#include "CoreMinimal.h"
#include "EFairAccountManagerPauseType.h"
#include "EFairAccountManagerGamePauseType.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairAccountManager.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairAccountManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FirstUserAccountID;
    
public:
    UFairAccountManager();
    UFUNCTION(BlueprintCallable)
    void Shutdown();
    
    UFUNCTION(BlueprintCallable)
    void SetPause(EFairAccountManagerPauseType pauseType, bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void SetGamePause(EFairAccountManagerGamePauseType pauseType, bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void SaveGameCheckUniqueNetId(int32 UserIndex, int32& success);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidGamerTag();
    
    UFUNCTION(BlueprintCallable)
    bool IsSignInFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPause() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamePause() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsConnectController();
    
    UFUNCTION(BlueprintCallable)
    bool IsChangeProfileFlow();
    
    UFUNCTION(BlueprintCallable)
    void InitManager();
    
private:
    UFUNCTION(BlueprintCallable)
    FString GetLocalPlayerUserID();
    
    UFUNCTION(BlueprintCallable)
    int32 GetLocalPlayerControllerID();
    
public:
    UFUNCTION(BlueprintCallable)
    FString GetGamerTag();
    
private:
    UFUNCTION(BlueprintCallable)
    FString GetFirstLocalPlayerUserID();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginSignInFlow();
    
    UFUNCTION(BlueprintCallable)
    void BeginChangeProfileFlow();
    
    UFUNCTION(BlueprintCallable)
    void AboutFlow(FName FlowType);
    
};

