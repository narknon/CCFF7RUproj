#include "FairAnimNodeDataObject.h"

UFairAnimNodeDataObject::UFairAnimNodeDataObject() {
    this->m_ModifyBoneNodes.AddDefaulted(45);
    this->m_SlotAnimNodes.AddDefaulted(11);
    this->m_BlendSpacePlayerNodes.AddDefaulted(2);
    this->m_SaveCachedPoseNodes.AddDefaulted(3);
    this->m_ApplyAdditiveNodes.AddDefaulted(4);
    this->m_SequencePlayerNodes.AddDefaulted(3);
    this->m_BlendListByBoolNodes.AddDefaulted(3);
    this->m_BlendSpaces.AddDefaulted(2);
}

