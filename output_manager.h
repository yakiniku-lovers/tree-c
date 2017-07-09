//
// Created by KazukiChigita on 2017/07/09.
//

#ifndef TREE_C_OUTPUT_MANAGER_H
#define TREE_C_OUTPUT_MANAGER_H


#include <utility>
#include <iostream>

class output_manager {
    class color{
    public:
        color();
        color(int r,int g,int b);
        inline int get_r() { return r; }
        inline int get_g() { return g; }
        inline int get_b() { return b; }

    private:
        int r,g,b;
    };
    int petal;
    color col;
    std::pair<int, color> get_form();
public:
    output_manager();
    ~output_manager();
    void output_result();
};


#endif //TREE_C_OUTPUT_MANAGER_H
