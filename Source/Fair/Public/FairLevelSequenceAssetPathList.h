#pragma once
#include "CoreMinimal.h"
#include "FairLevelSequenceAssetPath.h"
#include "ZDataTableDataAssetBase.h"
#include "FairLevelSequenceAssetPathList.generated.h"

UCLASS(Blueprintable)
class UFairLevelSequenceAssetPathList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairLevelSequenceAssetPath> m_LevelSequenceAssetPathList;
    
public:
    UFairLevelSequenceAssetPathList();
};

