//
//  StateRest.cpp
//  enjoyGame_EventFSM
//
//  Created by xiang on 2017/4/21.
//
//

#include "StateRest.hpp"
#include "StateWriteArticle.hpp"
#include "MutouT.hpp"
#include "StateWriteCode.hpp"

void StateRest::execute(MutouT *mutou, EnumMsgType enMsgType) {
    switch (enMsgType) {
        case en_Msg_WantToWriteCode:
            mutou->writeCode();
            mutou->getFSM()->changeState(new StateWriteCode());
            break;
            
        case en_Msg_WantToWriteArticle:
            mutou->writeArticle();
            mutou->getFSM()->changeState(new StateWriteArticle());
            break;
            
        default:
            break;
    }
}









