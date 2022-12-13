#include "FairScrollBox.h"

UFairScrollBox::UFairScrollBox() {
    this->ElementWidgetClass = NULL;
    this->ScrollTimeSeconds = 1.00f;
    this->PageScrollTimeSeconds = 0.00f;
    this->EasingBlendExp = 3.00f;
    this->m_elementWidgetClass = NULL;
    this->m_pElementClass = NULL;
}

