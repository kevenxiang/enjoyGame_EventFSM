//
//  StateRest.hpp
//  enjoyGame_EventFSM
//
//  Created by xiang on 2017/4/21.
//
//

#ifndef StateRest_hpp
#define StateRest_hpp

#include "State.hpp"

class MutouT;
class StateRest : public State {
public:
    virtual void execute(MutouT *mutou, EnumMsgType enMsgType);
};

#endif /* StateRest_hpp */
