//
// Created by KazukiChigita on 2017/07/09.
//

#include "./../h/input_manager.h"

void input_manager::scan() {
    std::cin >> tweets >> emotions;
    init_variables();
    for(int i = 0; i < emotions; ++i){
        std::string tag;
        std::cin >> tag;
        tags.emplace_back(tag);
    }
    for(int i= 0; i < tweets; ++i){
        for(int j = 0; j < emotions; ++j) {
            std::cin >> parameters[i][j];
        }
    }

}

void input_manager::init_variables() {
    parameters.resize(tweets);

    for(int i = 0; i < tweets; ++i){
        parameters[i].resize(emotions);
    }
    return ;
}