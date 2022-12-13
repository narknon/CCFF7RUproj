#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ZDebugMotionNameInfo.h"
#include "ZDebugCharacterInfo.h"
#include "UObject/Object.h"
#include "ZDebugInfoWrapper.generated.h"

class UZDebugInfoSystem;

UCLASS(Blueprintable)
class FAIR_API UZDebugInfoWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZDebugInfoSystem* m_pDebugInfoSystem;
    
    UZDebugInfoWrapper();
    UFUNCTION(BlueprintCallable)
    void ShowLog();
    
    UFUNCTION(BlueprintCallable)
    void SetCameraNearClip(float nearClip);
    
    UFUNCTION(BlueprintCallable)
    void SelectLookAtPointActor();
    
    UFUNCTION(BlueprintCallable)
    void SelectCineCameraAndLookAtPointActor();
    
    UFUNCTION(BlueprintCallable)
    void SelectCineCameraActor();
    
    UFUNCTION(BlueprintCallable)
    bool isValidDebugInfoSystem();
    
    UFUNCTION(BlueprintCallable)
    bool Init();
    
    UFUNCTION(BlueprintCallable)
    TArray<FZDebugMotionNameInfo> GetMotionNameList();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFrameCount();
    
    UFUNCTION(BlueprintCallable)
    TArray<FZDebugCharacterInfo> GetCharacterInfoList();
    
    UFUNCTION(BlueprintCallable)
    FRotator GetCameraRotation();
    
    UFUNCTION(BlueprintCallable)
    float GetCameraNearClip();
    
    UFUNCTION(BlueprintCallable)
    FVector GetCameraLocation();
    
    UFUNCTION(BlueprintCallable)
    float GetCameraFOVAngle();
    
    UFUNCTION(BlueprintCallable)
    void CopyCameraPositionToClipBoard();
    
    UFUNCTION(BlueprintCallable)
    void CopyCameraNearClipToClipBoard();
    
    UFUNCTION(BlueprintCallable)
    void CopyCameraFOVToClipBoard();
    
};

