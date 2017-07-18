//
// Created by KazukiChigita on 2017/07/09.
//

#include "./../h/output_manager.h"
output_manager::output_manager(){
}

output_manager::output_manager(int p, color c, int s) {
    petal = p;
    col = c;
    shape = s;
}

output_manager::~output_manager() {
}



void output_manager::output_result() {
    auto result = get_form();
    int petal_result    = std::get<0>(result);
    color col_result    = std::get<1>(result);
    int shape           = std::get<2>(result);
    std::cout << petal_result << " "
              << col_result.get_r() << " "
              << col_result.get_g() << " "
              << col_result.get_b() << " "
              << shape << std::endl;
    return ;
}
std::tuple<int, color, int> output_manager::get_form() {
    return std::make_tuple(this->petal, this->col, this->shape);
}

