//
// Created by ytz20 on 2023/10/12.
//

#include "../Inc/Attack.h"


AttackReturnType AttackWithProbability(Robot *dst, Robot *src, int hurt_amount, float probability)
{
    float rand_value = 1.0 * rand() / RAND_MAX;
    if (rand_value <= probability) //Hit
        return AttackWithCertainty(dst,src,hurt_amount);
    else //Miss
        return MISS;
}
AttackReturnType AttackWithCertainty(Robot *dst, Robot *src, int hurt_amount)
{
    if(dst->hp.hp <= hurt_amount) //Die
    {
        dst->hp.hp = 0;
        return DIE;
    }
    else //Survive
    {
        dst->hp.hp = dst->hp.hp - hurt_amount;
        return SURVIVE;
    }
}