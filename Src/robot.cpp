//
// Created by yixin on 2023/10/2.
//

#include "../Inc/robot.h"

RobotPos* moveRobot(RobotPos *pos, float dx, float dy){
    pos->x = pos->x + dx;
    pos->y = pos->y + dy;
    return pos;
}

RobotPos* rotateYawRobot(RobotPos *pos, float dyaw)
{
    pos->yaw = fmod(pos->yaw + dyaw,360);
    return pos;
}

RobotPos* rotatePitchRobot(RobotPos *pos, float dpitch)
{
    float target_pitch = pos->pitch + dpitch;
    if(target_pitch > 360)
        pos->pitch = 360;
    else if(target_pitch < 0)
        pos->pitch = 0;
    else
        pos->pitch = target_pitch;
    return pos;
}


Robot* initRobot(Robot* robot, int max_hp)
{
    robot->pos.x = 0;
    robot->pos.y = 0;
    robot->pos.yaw = 0;
    robot->pos.pitch = 0;
    robot->hp.hp = max_hp;
    robot->hp.max_hp = max_hp;
    return robot;
}