//
//  MutouTFSM.hpp
//  enjoyGame_EventFSM
//
//  Created by xiang on 2017/4/21.
//
//

#ifndef MutouTFSM_hpp
#define MutouTFSM_hpp

#include "cocos2d.h"
USING_NS_CC;

class State;
class MutouT;

class MutouTFSM : public Node {
public:
    ~MutouTFSM();
    
    static MutouTFSM *createWithMutouT(MutouT *mutou);
    bool initWithMutouT(MutouT *mutou);
    
    void changeState(State *state);  //切换状态
    
private:
    void onRecvWantToRest(Ref *obj);
    void onRecvWantToWriteCode(Ref *obj);
    void onRecvWantToWriteArticle(Ref *obj);
    
    //存放当前状态类
    State *mCurState;
    
    //木头对象
    MutouT *mMutou;
};


#endif /* MutouTFSM_hpp */
