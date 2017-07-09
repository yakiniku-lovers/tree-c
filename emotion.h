//
// Created by Shohei Matsugu on 2017/07/09.
//

#ifndef TREE_C_EMOTION_H
#define TREE_C_EMOTION_H
#include<string>

class emotion{
    std::string name;
    double value;
public:
    emotion();
    emotion(std::string s,int v);

    bool is_larger(emotion em);
};
#endif //TREE_C_EMOTION_H
