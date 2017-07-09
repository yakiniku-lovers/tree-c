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
    std::pair <int, output_manager::color> final_result = get_form();
    std::cout << final_result.first << " "
              << final_result.second.get_r() << " "
              << final_result.second.get_g() << " "
              << final_result.second.get_b() << std::endl;
    return ;
}
std::pair<int, output_manager::color> output_manager::get_form() {
    return std::make_pair(this->petal, this->col);
}
