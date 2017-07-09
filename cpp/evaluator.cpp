//
// Created by Shohei Matsugu on 2017/07/09.
//
#include"./../h/evaluator.h"
#include"./../h/emotion.h"
#include<iostream>
#include<vector>
#include<map>

//とりあえず。空ならカラコン、否なら先頭を返す。
user_data evaluator::eval(std::vector<user_data> input){
    try{
        if(input.size() == 0)throw "Exception: input size is 0.";
    }
    catch(char *str){
        std::cerr << str << std::endl;
        return user_data();
    }
    return input[0];
}
