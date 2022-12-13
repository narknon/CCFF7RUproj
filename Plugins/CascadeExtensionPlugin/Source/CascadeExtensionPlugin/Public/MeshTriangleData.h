#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TriangleIndices.h"
#include "MeshTriangleData.generated.h"

USTRUCT(BlueprintType)
struct CASCADEEXTENSIONPLUGIN_API FMeshTriangleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Vertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTriangleIndices> Indices;
    
    FMeshTriangleData();
};

