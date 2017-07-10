//
// Created by Shohei Matsugu on 2017/07/09.
//
#include"./../h/evaluator.h"
#include"./../h/emotion.h"
#include "../h/output_manager.h"
#include"../h/constant.h"
#include<cstdlib>
#include<ctime>
#include<iostream>
#include<vector>
#include<map>

//とりあえず。input.sizeをseedにランダムで返します
output_manager evaluator::eval(std::vector<user_data> input){
    output_manager provisional_output;
    try{
        if(input.size() == 0)throw "Exception: input size is 0.";
    }
    catch(char *str){
        std::cerr << str << std::endl;
        return output_manager();
    }
    srand(time(NULL));
    int petal = rand()%constant::PETAL_SIZE;
    color col = color(rand() % 256, rand() % 256, rand() % 256);
    int shape = rand()%constant::SHAPE_SIZE;

    provisional_output = output_manager(petal,col,shape);
    return provisional_output;
}
