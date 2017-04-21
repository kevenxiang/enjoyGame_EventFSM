//
//  State.hpp
//  enjoyGame_EventFSM
//
//  Created by xiang on 2017/4/21.
//
//

#ifndef State_hpp
#define State_hpp

#include "EnumMsgType.hpp"
class MutouT;
class State {
public:
    virtual void execute(MutouT *mutou, EnumMsgType enMsgType) = 0;
};

#endif /* State_hpp */
