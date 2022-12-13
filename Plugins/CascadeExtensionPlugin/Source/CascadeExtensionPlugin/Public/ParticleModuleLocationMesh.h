#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Distributions/DistributionFloat.h"
#include "AbstractParticleModule.h"
#include "ParticleModuleLocationMesh.generated.h"

class AActor;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleLocationMesh : public UAbstractParticleModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SurfaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DynamicMeshParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MeshTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EqualTriangeWeight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat VelocityScale;
    
public:
    UParticleModuleLocationMesh();
private:
    UFUNCTION(BlueprintCallable)
    void OnCachedActorDestroyed(AActor* DestroyedActor);
    
};

