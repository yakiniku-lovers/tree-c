//
// Created by Shohei Matsugu on 2017/07/09.
//

#ifndef TREE_C_EVALUATOR_H
#define TREE_C_EVALUATOR_H

#include <vector>
#include "emotion.h"
#include "user_data.h"

class evaluator{
private:

public:
    user_data eval(std::vector<user_data> input);
};


#endif //TREE_C_EVALUATOR_H
