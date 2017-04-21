//
//  MutouT.hpp
//  enjoyGame_EventFSM
//
//  Created by xiang on 2017/4/21.
//
//

#ifndef MutouT_hpp
#define MutouT_hpp

#include "cocos2d.h"
#include "MutouTFSM.hpp"
USING_NS_CC;

class State;

class MutouT : public Node {
public:
    MutouT();
    ~MutouT();
    CREATE_FUNC(MutouT);
    virtual bool init();
    
    bool isTire();    //判断是否写代码写累了
    bool isWantToWriteArticle(); //是否想写教程
    void writeCode();  //写代码
    void writeArticle();  //写教程
    void rest();  //休息
    
    MutouTFSM *getFSM();  //获取状态机对象
    
private:
    //木头状态机
    MutouTFSM *mFSM;
};


#endif /* MutouT_hpp */
