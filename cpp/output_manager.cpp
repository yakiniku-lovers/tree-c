//
// Created by KazukiChigita on 2017/07/09.
//

#include "./../h/output_manager.h"
output_manager::output_manager(){
}

output_manager::~output_manager() {
}

output_manager::color::color(){
    this->r = 0;
    this->g = 0;
    this->b = 0;
}

output_manager::color::color(int r, int g, int b){
    this->r = r;
    this->g = g;
    this->b = b;
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
std::tuple<int, output_manager::color, int> output_manager::get_form() {
    return std::make_tuple(this->petal, this->col, this->shape);
}
