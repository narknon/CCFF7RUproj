#include "FairGlobalFunctions.h"

class UObject;
class ACameraActor;

void UFairGlobalFunctions::SetScreenBrightness(UObject* world_context_object, int32 Value, int32 Min, int32 Max) {
}

void UFairGlobalFunctions::SetEventHeadLightEnabledFlag(bool is_enabled) {
}

void UFairGlobalFunctions::SetBgCharacterLightEnabledFlag(bool is_enabled) {
}

void UFairGlobalFunctions::LogOutputOfHeadLightScriptFunction(bool is_enable, float Intensity, FLinearColor Color, FRotator offset_rot) {
}

bool UFairGlobalFunctions::IsSimulatingInEditor() {
    return false;
}

bool UFairGlobalFunctions::GetEventHeadLightEnabledFlag() {
    return false;
}

FString UFairGlobalFunctions::GetBuildRevision() {
    return TEXT("");
}

FString UFairGlobalFunctions::GetBuildDate() {
    return TEXT("");
}

FString UFairGlobalFunctions::GetBuildConfig() {
    return TEXT("");
}

bool UFairGlobalFunctions::GetBgCharacterLightEnabledFlag() {
    return false;
}

float UFairGlobalFunctions::ConvertToUE_FbxFilmOffsetY(float fbx_film_offset_y) {
    return 0.0f;
}

float UFairGlobalFunctions::ConvertToUE_FbxFilmOffsetX(float fbx_film_offset_x) {
    return 0.0f;
}

float UFairGlobalFunctions::ConvertToFbx_UnrealFilmOffsetY(float unreal_film_offset_y) {
    return 0.0f;
}

float UFairGlobalFunctions::ConvertToFbx_UnrealFilmOffsetX(float unreal_film_offset_x) {
    return 0.0f;
}

bool UFairGlobalFunctions::ApplyScriptFunctionOnClipboard(ACameraActor* target_camera_actor) {
    return false;
}

UFairGlobalFunctions::UFairGlobalFunctions() {
}

