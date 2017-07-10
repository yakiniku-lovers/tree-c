//
// Created by KazukiChigita on 2017/07/09.
//

#ifndef TREE_C_OUTPUT_MANAGER_H
#define TREE_C_OUTPUT_MANAGER_H


#include <utility>
#include <iostream>

class output_manager {
    class color{
        int r,g,b;
    public:
        color();
        color(int r,int g,int b);
        inline int get_r() { return r; }
        inline int get_g() { return g; }
        inline int get_b() { return b; }
    };
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
