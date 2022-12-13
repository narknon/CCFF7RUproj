#pragma once
#include "CoreMinimal.h"
#include "ZAssetReplaceInfoArray.h"
#include "ZDataTableDataAssetBase.h"
#include "ZAssetReplaceList.generated.h"

UCLASS(Blueprintable)
class UZAssetReplaceList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FZAssetReplaceInfoArray> mAssetReplaceList;
    
public:
    UZAssetReplaceList();
};

