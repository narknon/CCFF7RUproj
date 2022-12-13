#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FairProceduralMeshActor.generated.h"

class UProceduralMeshComponent;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class FAIR_API AFairProceduralMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* m_mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_materialInstanceDynamic;
    
public:
    AFairProceduralMeshActor();
};

