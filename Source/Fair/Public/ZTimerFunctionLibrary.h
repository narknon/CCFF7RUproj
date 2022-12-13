#pragma once
#include "CoreMinimal.h"
#include "ZTimer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ZTimerFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UZTimerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UZTimerFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdateTimerByFpsInfo(UPARAM(Ref) FZTimer& gameTimer);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateTimer(UPARAM(Ref) FZTimer& gameTimer, float Delta);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimer(UPARAM(Ref) FZTimer& gameTimer, float Time);
    
    UFUNCTION(BlueprintCallable)
    static void SetPause(UPARAM(Ref) FZTimer& gameTimer, bool bPause);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPause(const FZTimer& gameTimer);
    
    UFUNCTION(BlueprintCallable)
    static bool IsOver(const FZTimer& gameTimer);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnable(const FZTimer& gameTimer);
    
    UFUNCTION(BlueprintCallable)
    static float GetRemainingTime(const FZTimer& gameTimer);
    
    UFUNCTION(BlueprintCallable)
    static float GetProcessRate(const FZTimer& gameTimer);
    
    UFUNCTION(BlueprintCallable)
    static float GetEndTime(const FZTimer& gameTimer);
    
    UFUNCTION(BlueprintCallable)
    static float GetElapsedTime(const FZTimer& gameTimer);
    
    UFUNCTION(BlueprintCallable)
    static float GetConvFps30FrameToSecondsValue();
    
    UFUNCTION(BlueprintCallable)
    static void EndTimer(UPARAM(Ref) FZTimer& gameTimer);
    
    UFUNCTION(BlueprintCallable)
    static float ConvFps30FrameToSecondsF(float frameCount);
    
    UFUNCTION(BlueprintCallable)
    static float ConvFps30FrameToSeconds(int32 frameCount);
    
    UFUNCTION(BlueprintCallable)
    static float AddElapsedTime(UPARAM(Ref) FZTimer& gameTimer, float addTime);
    
};

