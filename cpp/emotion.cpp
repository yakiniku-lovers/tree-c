//
// Created by Shohei Matsugu on 2017/07/09.
//

#include <string>
#include "./../h/emotion.h"

emotion::emotion():
    name(""),value(0){

}
emotion::emotion(std::string s,int v):
    name(s),value(v){

}
const bool emotion::is_larger(emotion em) {
    return this->value > em.value;
}
