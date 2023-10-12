//
// Created by ytz20 on 2023/10/12.
//

#ifndef HW1_ATTACK_H
#define HW1_ATTACK_H

#include "robot.h"
#include <stdlib.h>

enum AttackReturnType
{
    MISS    = 0,
    SURVIVE = 1,
    DIE     = 2,
};

AttackReturnType AttackWithProbability(Robot *dst, Robot *src, int hurt_amount, float probability);
AttackReturnType AttackWithCertainty(Robot *dst, Robot *src, int hurt_amount);

#endif //HW1_ATTACK_H
