//
// Created by KazukiChigita on 2017/07/09.
//

#ifndef TREE_C_OUTPUT_MANAGER_H
#define TREE_C_OUTPUT_MANAGER_H


#include <utility>
#include <iostream>
#include "color.h"

class output_manager {
    int petal;
    color col;
    int shape;
    std::tuple<int, color, int> get_form();
public:
    output_manager();
    ~output_manager();
    void output_result();
};


#endif //TREE_C_OUTPUT_MANAGER_H
