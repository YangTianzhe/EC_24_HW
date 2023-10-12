//
// Created by yixin on 2023/10/2.
//

#ifndef HW1_ROBOT_H
#define HW1_ROBOT_H

#include <math.h>

/* field
--------
|  R   |     // red base
|      |
|      |
|      |
|      |
|  B   |    // blue base
--------
*/


struct RobotPos{
    float x;     // m   set down left as (0,0)
    float y;     // m
    float yaw;   // deg
    float pitch; // deg
};

RobotPos* moveRobot(RobotPos *pos, float dx, float dy);
RobotPos* rotateYawRobot(RobotPos *pos, float dyaw);
RobotPos* rotatePitchRobot(RobotPos *pos, float dpitch);

struct RobotHP{
    int hp;
    int max_hp;
};

struct Robot
{
    struct RobotPos pos;
    struct RobotHP hp;
};

Robot* initRobot(Robot* robot, int max_hp);

#endif //HW1_ROBOT_H
