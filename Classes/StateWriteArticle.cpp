//
//  StateWriteArticle.cpp
//  enjoyGame_EventFSM
//
//  Created by xiang on 2017/4/21.
//
//

#include "StateWriteArticle.hpp"
#include "StateRest.hpp"
#include "MutouT.hpp"

void StateWriteArticle::execute(MutouT *mutou, EnumMsgType enMsgType) {
    switch (enMsgType) {
        case en_Msg_WantToRest:
            mutou->rest();
            mutou->getFSM()->changeState(new StateRest());
            break;
    }
}
