//
// Created by KazukiChigita on 2017/07/09.
//

#ifndef TREE_C_INPUT_MANAGER_H
#define TREE_C_INPUT_MANAGER_H


#include <string>
#include <vector>
#include <iostream>

class input_manager {
    int tweet_size,emotion_size;
    std::vector < std::string > tags;
    std::vector < std::vector < double > > parameters;
    void init_variables();
public:
    void scan();
};


#endif //TREE_C_INPUT_MANAGER_H
