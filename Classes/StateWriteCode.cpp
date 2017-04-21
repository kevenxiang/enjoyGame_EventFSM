//
//  StateWriteCode.cpp
//  enjoyGame_EventFSM
//
//  Created by xiang on 2017/4/21.
//
//

#include "StateWriteCode.hpp"
#include "StateRest.hpp"
#include "MutouT.hpp"

void StateWriteCode::execute(MutouT *mutou, EnumMsgType enMsgType) {
    switch (enMsgType) {
        case en_Msg_WantToRest:
            mutou->rest();
            mutou->getFSM()->changeState(new StateRest());
            break;
            
        default:
            break;
    }
}
