#pragma once
#include "CoreMinimal.h"
#include "FairDiscimgEntry.h"
#include "ZDataTableDataAssetBase.h"
#include "FairDiscimgEntryList.generated.h"

UCLASS(Blueprintable)
class UFairDiscimgEntryList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFairDiscimgEntry> m_discimgEntryList;
    
public:
    UFairDiscimgEntryList();
};

