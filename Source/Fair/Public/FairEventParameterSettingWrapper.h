#pragma once
#include "CoreMinimal.h"
#include "EEventParameterTypes.h"
#include "EFairScriptControlLightType.h"
#include "UObject/Object.h"
#include "FairEventParameterSettingWrapper.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairEventParameterSettingWrapper : public UObject {
    GENERATED_BODY()
public:
    UFairEventParameterSettingWrapper();
    UFUNCTION(BlueprintCallable)
    void WriteEventParameter();
    
    UFUNCTION(BlueprintCallable)
    void Terminate();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectdLightObjectAnnotation(int32 light_handle);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSaveMode(bool is_enable);
    
    UFUNCTION(BlueprintCallable)
    void SaveEventParameter();
    
    UFUNCTION(BlueprintCallable)
    void OpenJsonFileFolder();
    
    UFUNCTION(BlueprintCallable)
    void isResetEventParameter(bool is_reset);
    
    UFUNCTION(BlueprintCallable)
    bool Initialize();
    
    UFUNCTION(BlueprintCallable)
    void InitEventParameter(EEventParameterTypes param_type);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetLightActorLabelList();
    
    UFUNCTION(BlueprintCallable)
    FString GetLightActorLabel(int32 light_handle);
    
    UFUNCTION(BlueprintCallable)
    FString GetJsonFilePath();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsResetEventParameter();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentCutNumber();
    
    UFUNCTION(BlueprintCallable)
    void DeleteScriptLight(int32 light_handle);
    
    UFUNCTION(BlueprintCallable)
    int32 CreateScriptLight(EFairScriptControlLightType light_type);
    
};

