//
//  StateWriteCode.hpp
//  enjoyGame_EventFSM
//
//  Created by xiang on 2017/4/21.
//
//

#ifndef StateWriteCode_hpp
#define StateWriteCode_hpp

#include "State.hpp"

class MutouT;
class StateWriteCode : public State {
public:
    virtual void execute(MutouT *mutou, EnumMsgType enMsgType);
};

#endif /* StateWriteCode_hpp */
