#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "FairModelAnimInstanceProxy.generated.h"

class UFairAnimNodeDataObject;

USTRUCT(BlueprintType)
struct FAIR_API FFairModelAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairAnimNodeDataObject* m_DataList;
    
public:
    FFairModelAnimInstanceProxy();
};

