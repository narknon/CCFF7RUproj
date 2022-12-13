#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairDiscimg.generated.h"

class UFairDiscimgEntryList;

UCLASS(Blueprintable)
class UFairDiscimg : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairDiscimgEntryList* m_discimgEntryList;
    
public:
    UFairDiscimg();
};

