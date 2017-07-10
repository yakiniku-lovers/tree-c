//
// Created by Shohei Matsugu on 2017/07/10.
//

#ifndef TREE_C_COLOR_H
#define TREE_C_COLOR_H

class color{
    int r,g,b;
public:
    color();
    color(int r,int g,int b);
    inline int get_r() { return r; }
    inline int get_g() { return g; }
    inline int get_b() { return b; }
};

#endif //TREE_C_COLOR_H
