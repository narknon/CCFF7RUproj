#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FairCueSheetManager.generated.h"

class USoundAtomCueSheet;

UCLASS(Blueprintable)
class FAIR_API UFairCueSheetManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> m_residentCueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> m_dynamicCueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> m_voiceCueSheet;
    
public:
    UFairCueSheetManager();
};

