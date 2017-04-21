//
//  StateWriteArticle.hpp
//  enjoyGame_EventFSM
//
//  Created by xiang on 2017/4/21.
//
//

#ifndef StateWriteArticle_hpp
#define StateWriteArticle_hpp

#include "State.hpp"

class MutouT;
class StateWriteArticle : public State {
public:
    virtual void execute(MutouT *mutou, EnumMsgType enMsgType);
};

#endif /* StateWriteArticle_hpp */
