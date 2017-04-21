//
//  MutouT.cpp
//  enjoyGame_EventFSM
//
//  Created by xiang on 2017/4/21.
//
//

#include "MutouT.hpp"
#include "State.hpp"
#include "MutouTFSM.hpp"

MutouT::MutouT() {
    mFSM = NULL;
}

MutouT::~MutouT() {
    CC_SAFE_RELEASE(mFSM);
}

bool MutouT::init() {
    mFSM = MutouTFSM::createWithMutouT(this);
    mFSM->retain();
    this->scheduleUpdate();
    return true;
}

bool MutouT::isTire() {
     /* 每次问木头累不累,他都会说:累~ */
    return true;
}

bool MutouT::isWantToWriteArticle() {
     /* 有10%的概率想写教程(好懒~!) */
    float ran = CCRANDOM_0_1();
    if (ran < 0.1f) {
        return true;
    }
    
    return false;
}

void MutouT::writeCode() {
    log("mutou is writing Code.");
}

void MutouT::writeArticle() {
    log("mutou is writing article.");
}

void MutouT::rest() {
    log("mutou is resting.");
}

MutouTFSM *MutouT::getFSM() {
    return this->mFSM;
}















































