//
// Created by Shohei Matsugu on 2017/07/09.
//

#include <vector>
#include <iostream>
#include "user_data.h"
#include "emotion.h"

emotion user_data::get_emotions_by_id(int index) {
    try{
        if(index < 0 || emotions.size() <= index){
            throw "Exception : Index is out of range.";
        }
    }
    catch(char *str){
        std::cout << str << std::endl;
    }
    return emotions[index];
}
