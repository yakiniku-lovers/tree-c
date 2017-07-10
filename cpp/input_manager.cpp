//
// Created by KazukiChigita on 2017/07/09.
//

#include "./../h/input_manager.h"

void input_manager::scan() {
    std::cin >> tweet_size >> emotion_size;
    init_variables();
    for(int i = 0; i < emotion_size; ++i){
        std::string tag;
        std::cin >> tag;
        tags.emplace_back(tag);
    }
    for(int i= 0; i < tweet_size; ++i){
        for(int j = 0; j < emotion_size; ++j) {
            std::cin >> parameters[i][j];
        }
    }

}

void input_manager::init_variables() {
    parameters.resize(tweet_size);

    for(int i = 0; i < tweet_size; ++i){
        parameters[i].resize(emotion_size);
    }
    return ;
}