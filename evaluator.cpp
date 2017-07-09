//
// Created by Shohei Matsugu on 2017/07/09.
//
#include"evaluator.h"
#include"emotion.h"
#include<iostream>
#include<vector>
#include<map>

class evaluate{
private:

public:
    emotion eval(std::vector<emotion> input){
        emotion max_value;
        for(auto item : input){
            if(max_value.is_larger(item)){
                max_value = item;
            }
        }
        return max_value;
    }
};
