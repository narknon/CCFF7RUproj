#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FairAssetManager.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairAssetManager : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFairAssetManager();
    UFUNCTION(BlueprintCallable)
    static bool IsInitialChunkMounted();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFullInstallPackage();
    
    UFUNCTION(BlueprintCallable)
    static bool IsChunkMounted(const int32 ChunkId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChunkLoaded(const int32 ChunkId, const bool isNotExistError);
    
};

