#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FairGlobalFunctions.generated.h"

class UObject;
class ACameraActor;

UCLASS(Blueprintable)
class UFairGlobalFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFairGlobalFunctions();
    UFUNCTION(BlueprintCallable)
    static void SetScreenBrightness(UObject* world_context_object, int32 Value, int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    static void SetEventHeadLightEnabledFlag(bool is_enabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetBgCharacterLightEnabledFlag(bool is_enabled);
    
    UFUNCTION(BlueprintCallable)
    static void LogOutputOfHeadLightScriptFunction(bool is_enable, float Intensity, FLinearColor Color, FRotator offset_rot);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSimulatingInEditor();
    
    UFUNCTION(BlueprintCallable)
    static bool GetEventHeadLightEnabledFlag();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBuildRevision();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBuildDate();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBuildConfig();
    
    UFUNCTION(BlueprintCallable)
    static bool GetBgCharacterLightEnabledFlag();
    
    UFUNCTION(BlueprintCallable)
    static float ConvertToUE_FbxFilmOffsetY(float fbx_film_offset_y);
    
    UFUNCTION(BlueprintCallable)
    static float ConvertToUE_FbxFilmOffsetX(float fbx_film_offset_x);
    
    UFUNCTION(BlueprintCallable)
    static float ConvertToFbx_UnrealFilmOffsetY(float unreal_film_offset_y);
    
    UFUNCTION(BlueprintCallable)
    static float ConvertToFbx_UnrealFilmOffsetX(float unreal_film_offset_x);
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyScriptFunctionOnClipboard(ACameraActor* target_camera_actor);
    
};

