//
// Created by yixin on 2023/10/2.
//

#include "../Inc/main.h"
#include "../Inc/robot.h"
#include "../Inc/Attack.h"

int main() {
    Robot robot_blue,robot_red;
    initRobot(&robot_blue,100);
    initRobot(&robot_red,100);
    moveRobot(&robot_blue.pos, 1, 20000);
    rotateYawRobot(&robot_blue.pos, 90);
    rotatePitchRobot(&robot_blue.pos, 90);
    AttackWithProbability(&robot_blue,&robot_red,100,0.8);
    return 0;
}
