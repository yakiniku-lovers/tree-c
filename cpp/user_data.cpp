//
// Created by Shohei Matsugu on 2017/07/09.
//

#include <vector>
#include <iostream>
#include "./../h/user_data.h"
#include "./../h/emotion.h"

emotion user_data::user_data(std::vector<emotion> &emotions) const{
    this->emotions = emotions;
}

emotion user_data::get_emotion_by_id(int index) {
    try{
        if(index < 0 || emotions.size() <= index){
            throw "Exception : Index is out of range.";
        }
    }
    catch(char *str){
        std::cerr << str << std::endl;
    }
    return emotions[index];
}
