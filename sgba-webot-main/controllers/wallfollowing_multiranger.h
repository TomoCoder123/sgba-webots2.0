/*
 * wallfollowing_multirange_onboard.h
 *
 *  Created on: Aug 7, 2018
 *      Author: knmcguire
 */

#ifndef SRC_WALLFOLLOWING_MULTIRANGER_ONBOARD_H_
#define SRC_WALLFOLLOWING_MULTIRANGER_ONBOARD_H_
#include <stdint.h>
#include <stdbool.h>

typedef enum
{
    forward,//0
    hover, //1
    turnToFindWall, //2
    turnToAlignToWall, //3
    forwardAlongWall, //4
    rotateAroundWall, //5
    rotateInCorner, //6
    findCorner//7
} StateWF;

typedef struct CommandVel_s{
    float cmdVelX;
    float cmdVelY;
    float cmdAngW;
} CommandVel_t;


int wallFollower(CommandVel_t *commandVel, float frontRange, float sideRange, float currentHeading,
                     int directionTurn, float timeOuter);

void adjustDistanceWall(float distanceWallNew);

void wallFollowerInit(float refDistanceFromWallNew, float maxForwardSpeed_ref);
#endif /* SRC_WALLFOLLOWING_MULTIRANGER_ONBOARD_H_ */
