#pragma once
#include "CoreMinimal.h"
#include "ManaComponent.h"

#include "FairMovieBuff.generated.h"


class UManaTexture;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FFairMovieBuff {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UManaComponent* m_manaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaTexture* m_manaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_materialInstance;
    
    FAIR_API FFairMovieBuff();
};

