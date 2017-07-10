//
// Created by KazukiChigita on 2017/07/09.
//

#include "./../h/input_manager.h"

input_manager::input_manager() {
    scan();
    evltr = new evaluator();
    evltr->eval(convert_to_user_data());
}

input_manager::~input_manager() {
    delete evltr;
}

std::vector <user_data> input_manager::convert_to_user_data(){
    std::vector <user_data> changed;
    for(int i = 0; i < tweet_size; ++i) {
        std::vector <emotion> emotions;
        for(int j = 0; j < emotion_size; ++j){
            emotions.emplace_back(emotion(tags[j],parameters[i][j]));
        }
        changed.emplace_back(user_data(emotions));
    }
    return changed;
}

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