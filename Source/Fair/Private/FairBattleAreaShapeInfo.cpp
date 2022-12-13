#include "FairBattleAreaShapeInfo.h"

FFairBattleAreaShapeInfo::FFairBattleAreaShapeInfo() {
    this->AreaShape = EFairEncountAreaShape::None;
    this->SquareXScale = 0.00f;
    this->SquareYScale = 0.00f;
    this->SquareZScale = 0.00f;
    this->SquareRot = 0.00f;
    this->NoDispArea = false;
    this->AreaMaterial = EFairEncountAreaMaterial::Default;
}

