//
// Created by KazukiChigita on 2017/07/09.
//

#ifndef TREE_C_INPUT_MANAGER_H
#define TREE_C_INPUT_MANAGER_H

#include "./../h/evaluator.h"
#include "./../h/user_data.h
#include <string>
#include <vector>
#include <iostream>

class input_manager {
    int tweet_size,emotion_size;
    std::vector < std::string > tags;
    std::vector < std::vector < double > > parameters;
    evaluator *evltr;
    void init_variables();
    std::vector<user_data> convert_to_user_data();
public:
    input_manager();
    ~input_manager();
    void scan();
};


#endif //TREE_C_INPUT_MANAGER_H
