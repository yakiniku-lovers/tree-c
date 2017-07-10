//
// Created by Shohei Matsugu on 2017/07/09.
//

#ifndef TREE_C_USER_DATA_H
#define TREE_C_USER_DATA_H

#include <vector>
#include "emotion.h"

class user_data{
    std::vector<emotion> emotions;

public:
    user_data(){}
    emotion get_emotion_by_id(int index);
};



#endif //TREE_C_USER_DATA_H
