#pragma once
#include "CoreMinimal.h"
#include "MeshTriangleData.h"
#include "UObject/Interface.h"
#include "MeshDataProvider.generated.h"

UINTERFACE(Blueprintable)
class CASCADEEXTENSIONPLUGIN_API UMeshDataProvider : public UInterface {
    GENERATED_BODY()
};

class CASCADEEXTENSIONPLUGIN_API IMeshDataProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FMeshTriangleData GetMeshTriangleData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetDataRevision() const;
    
};

