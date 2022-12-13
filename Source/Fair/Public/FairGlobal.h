#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairGlobal.generated.h"

class UFairAutoSaveIgnoreListData;
class UFairCharaThinkDataList;
class UFairCharaStandMotionInfo;
class UFairCharaStackTranslucentListData;
class UFairCharaNameListToShareAnimData;
class UFairCharaLookAtListData;
class UFairCharaInfoDataList;
class UFairCharacterParameterDataList;
class UFairCharaCapsuleShadowListData;
class UFairBattleShaderAnimeParamData;
class UFairBattleLimitSkillMapListData;
class UFairBattleGlobalParamData;
class UFairEndCreditsDataList;
class UFairEncountParamData;
class UFairEffectDataList;
class UFairDefinitionForEachPlatformListData;
class UFairHitSlowParamData;
class UFairGeneralPurposeMotionInterpolationData;
class UFairFootStepSoundDetector;
class UFairCharaFacialCurveListData;
class UFairFacialAssetPathListData;
class UFairMotionParamData;
class UFairModelElementMaterialSetList;
class UFairMissionBonusDataList;
class UFairMapEnvSoundList;
class UFairMapConfigList;
class UFairMapChangeInfoList;
class UFairMovieInfoList;
class UFairMovieAudioVolumeList;
class UFairShaderAnimListData;
class UFairStatusColorParamData;
class UZAntiAliasingConfigList;
class UZAssetReplaceList;
class UZShadowQualityConfigList;
class UMaterialParameterCollectionInstance;

UCLASS(Blueprintable)
class UFairGlobal : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZAssetReplaceList* m_assetReplaceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairEffectDataList* m_effectDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairMapConfigList* m_mapConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairMapChangeInfoList* m_mapChangeInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairModelElementMaterialSetList* m_modelElementMaterialSetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairEncountParamData* m_encountParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairStatusColorParamData* m_statusColorParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairCharaNameListToShareAnimData* m_CharaNameListToShareAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairCharaInfoDataList* m_charaInfoDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairCharaFacialCurveListData* m_charaFacialCurveListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairMotionParamData* m_motionParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairCharaThinkDataList* m_charaThinkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairCharaLookAtListData* m_charaLookAtListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairFacialAssetPathListData* m_facialAssetPathListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairGeneralPurposeMotionInterpolationData* m_generalPurposeMotionInterpolationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairCharacterParameterDataList* m_characterParameterDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairMissionBonusDataList* m_missionBonusDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairBattleGlobalParamData* m_battleGlobalParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairHitSlowParamData* m_hitSlowParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZAntiAliasingConfigList* m_antiAliasingConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZShadowQualityConfigList* m_shadowQualityConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairMovieInfoList* m_movieInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairShaderAnimListData* m_shaderAnimListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairAutoSaveIgnoreListData* m_autoSaveIgnoreListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairMapEnvSoundList* m_mapEnvSoundList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairCharaCapsuleShadowListData* m_charaCapsuleShadowListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairCharaStackTranslucentListData* m_charaStackTranslucentListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairBattleShaderAnimeParamData* m_battleShaderAnimeParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairFootStepSoundDetector* m_footStepSoundDetector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairDefinitionForEachPlatformListData* m_definitionForEachPlatformListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairMovieAudioVolumeList* m_movieAudioVolumeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairCharaStandMotionInfo* m_charaStandMotionInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairEndCreditsDataList* m_endCreditsDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairBattleLimitSkillMapListData* m_battleLimitSkillMapListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bgCharacterLightEnabledFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* m_gameStateMpcInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* m_skyMappingMpcInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_sceneStateTargets;
    
public:
    UFairGlobal();
};

