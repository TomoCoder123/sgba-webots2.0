/*
 * wall_follower_multi_ranger_onboard.c
 *
 *  Created on: Aug 7, 2018
 *      Author: knmcguire

The same wallfollowing strategy was used in the following paper:

 @article{mcguire2019minimal,
  title={Minimal navigation solution for a swarm of tiny flying robots to explore an unknown environment},
  author={McGuire, KN and De Wagter, Christophe and Tuyls, Karl and Kappen, HJ and de Croon, Guido CHE},
  journal={Science Robotics},
  volume={4},
  number={35},
  year={2019},
  publisher={Science Robotics}

 */

#include "wallfollowing_multiranger.h"
#include <math.h>
#include <stdio.h>
// variables
static float refDistanceFromWall = 0.0f;
static float maxForwardSpeed = 0.2f;
static float maxTurnRate = 0.5f;
static float direction = 1.0f;
static float firstRun = false;
static float prevHeading = 0.0f;
static float wallAngle = 0.0f;
static bool aroundCornerBackTrack = false;
static float stateStartTime;
static float rangerValueBuffer = 0.2f;
static float angleValueBuffer = 0.01f;
static float rangerThresholdLost = 0.3f;
static const float inCornerAngle = 0.8f;
static const float waitForMeasurementSeconds = 1.0f;
static float cornerCompare = 0.0f;

static StateWF stateWF = 0;
float timeNow = 0.0f;

void wallFollowerInit(float refDistanceFromWallNew, float maxForwardSpeed_ref)
{
  //printf("-------------------WALLFOLLOWER INIT------------");
  refDistanceFromWall = refDistanceFromWallNew;
  maxForwardSpeed = maxForwardSpeed_ref;
  firstRun = true;
}

// Static helper functions
static bool logicIsCloseTo(float real_value, float checked_value, float margin)
{
  //printf("REAL VALU: %f\n", real_value);
  //printf("Checked VALUE: %f\n", checked_value);
  if (real_value > checked_value - margin && real_value < checked_value + margin)
  {
    return true;
  }
  else
  {
    return false;
  }
}

static float wraptopi(float number) // puts in radians
{
      if (number > (float)M_PI)
  {
    return (number - (float)(2 * M_PI));
  }
  else if (number < (float)(-1 * M_PI))
  {
    return (number + (float)(2 * M_PI));
  }
  else
  {
    return (number);
  }
}

// Static command functions
static void commandTurn(float *cmdVelX, float *cmdAngW, float ref_rate)
{
  *cmdVelX = 0.0f; //x and y are left and right
  *cmdAngW = direction * ref_rate;//AngW = angular velocity
}

static void commandAlignCorner(float *cmdVelY, float *cmdAngW, float ref_rate, float range,
                               float wanted_distance_from_corner)
{

  if (range > wanted_distance_from_corner + 0.3f)
  {
    *cmdAngW = direction * ref_rate;
    *cmdVelY = 0;
  }
  else
  {
    if (range > wanted_distance_from_corner)
    {
      *cmdVelY = direction * (-1.0f * maxForwardSpeed / 3.0f);
    }
    else
    {
      *cmdVelY = direction * (maxForwardSpeed / 3.0f);
    }
    *cmdAngW = 0;
  }
}

static void commandHover(float *cmdVelX, float *cmdVelY, float *cmdAngW)
{
  *cmdVelX = 0.0f;
  *cmdVelY = 0.0f;
  *cmdAngW = 0.0f;
}

static void commandForwardAlongWall(float *cmdVelX, float *cmdVelY, float range)
{
  *cmdVelX = maxForwardSpeed;
  bool check_distance_wall = logicIsCloseTo(refDistanceFromWall, range, 0.1f);
  *cmdVelY = 0;
  if (!check_distance_wall)
  {
    if (range > refDistanceFromWall)
    {
      *cmdVelY = direction * (-1.0f * maxForwardSpeed / 2.0f);
    }
    else
    {
      *cmdVelY = direction * (maxForwardSpeed / 2.0f);
    }
  }
}

static void commandTurnAroundCornerAndAdjust(float *cmdVelX, float *cmdVelY, float *cmdAngW, float radius, float range)
{
  *cmdVelX = maxForwardSpeed;
  *cmdAngW = direction * (-1 * (*cmdVelX) / radius);
  bool check_distance_to_wall = logicIsCloseTo(refDistanceFromWall, range, 0.1f);
  if (!check_distance_to_wall)
  {
    if (range > refDistanceFromWall)
    {
      *cmdVelY = direction * (-1.0f * maxForwardSpeed / 3.0f);
    }
    else
    {
      *cmdVelY = direction * (maxForwardSpeed / 3.0f);
    }
  }
}

static void commandTurnAndAdjust(float *cmdVelY, float *cmdAngW, float rate, float range)
{
  *cmdAngW = direction * rate;
  *cmdVelY = 0.0f;
}

static StateWF transition(StateWF newState)
{
  stateStartTime = timeNow;
  return newState;
}

void adjustDistanceWall(float distanceWallNew)
{
  refDistanceFromWall = distanceWallNew;
}

int wallFollower(CommandVel_t* commandVel, float frontRange, float sideRange, float currentHeading,
                     int directionTurn, float timeOuter)
{

  direction = directionTurn;

  timeNow = timeOuter;

  if (firstRun)
  {
   // printf("prevSet1");
    prevHeading = currentHeading;
    aroundCornerBackTrack = false;
    firstRun = false;
  }

  /***********************************************************
  * Handle state transitions
  ***********************************************************/
  printf("Wall Following state: %d\n",stateWF);
  switch (stateWF)
  {

  case forward://0 to 2
    printf(" %f<%f\n",frontRange,(refDistanceFromWall + rangerValueBuffer));
    if (frontRange < refDistanceFromWall + rangerValueBuffer) //going forward, sees a wall 
    {
      printf("transitioning to turnToFindWall");

      stateWF = transition(turnToFindWall);//starts turning to find a wall.
    }
    break;

  case hover:
    break;

  case turnToFindWall: //2
    // check if wall is found
    printf("sideRange: %f\n", sideRange);
    printf("frontRange: %f\n", frontRange);
    printf("refDistanceFromWall: %f\n", refDistanceFromWall);

    bool sideRangeCheck = sideRange < (refDistanceFromWall / (float)cos(0.78f) + rangerValueBuffer); 
    bool frontRangeCheck = frontRange < (refDistanceFromWall / (float)cos(0.78f) + rangerValueBuffer);
    //float refDistanceFromWall;
    printf(sideRangeCheck ? "true" : "false");
    printf(frontRangeCheck ? "true\n" : "false\n");


    if (sideRangeCheck && frontRangeCheck) {//rotate until 45 45 90 triangle forms between side range and front range.
      prevHeading = currentHeading; 
      wallAngle = direction * (1.57f - (float)atan(frontRange / sideRange) + angleValueBuffer); //gets the angle to the wall relative to front.
      stateWF = transition(turnToAlignToWall);
      printf("transitioning to turnToAlignToWall");
    }
    if (sideRange < refDistanceFromWall + rangerValueBuffer && frontRange > refDistanceFromWall + rangerThresholdLost) // if going along wall.
    {
      aroundCornerBackTrack = false;
      prevHeading = currentHeading;
      stateWF = transition(findCorner);
    }
    break;

  case turnToAlignToWall:
  
    printf("Current heading:%f - Prev Heading: %f = %f\n",currentHeading,prevHeading,(currentHeading - prevHeading) );
     printf("WallAngle: %f\n", wallAngle);
    bool alignWallCheck = logicIsCloseTo(wraptopi(currentHeading - prevHeading), wallAngle, angleValueBuffer);///compares change in angle to wallAngle/ only  when currentHeading and prevHeading are updated.
    if (alignWallCheck) //checks if it rotated the wall angle,
    {
      printf("transitioning to forwardAlongWall");
      stateWF = transition(forwardAlongWall);
    }
    break;

  case forwardAlongWall:
    // If side range is out of reach,
    //    end of the wall is reached
    if (sideRange > refDistanceFromWall + rangerThresholdLost)
    {
      stateWF = transition(findCorner);//?????? why sideRange, is it referring to door?
    }
    // If front range is small
    //    then corner is reached
    if (frontRange < refDistanceFromWall + rangerValueBuffer)
    {
      //printf("prevSet4");
      prevHeading = currentHeading;
      stateWF = transition(rotateInCorner); //goes to state 6
    }
    break;

  case rotateAroundWall:
    if (frontRange < refDistanceFromWall + rangerValueBuffer)
    {
      stateWF = transition(turnToFindWall);
    }
    break;

  case rotateInCorner:
    // Check if heading goes over 0.8 rad
    cornerCompare = fabs(wraptopi(currentHeading-prevHeading));
    //printf("currentHeading-prevHeading: %f\n", cornerCompare); 
    bool checkHeadingCorner = logicIsCloseTo(fabs(wraptopi(currentHeading - prevHeading)), inCornerAngle, angleValueBuffer);
    if (checkHeadingCorner)
    {
      stateWF = transition(turnToFindWall);  
    } 
    break;

  case findCorner:
    if (sideRange <= refDistanceFromWall)
    {
      stateWF = transition(rotateAroundWall);
    }
    break;

  default:
    stateWF = transition(hover);
  }

  /***********************************************************
   * Handle state actions
   ***********************************************************/

  float cmdVelXTemp = 0.0f;
  float cmdVelYTemp = 0.0f;
  float cmdAngWTemp = 0.0f;

  switch (stateWF)
  {
  case forward:
    cmdVelXTemp = maxForwardSpeed;
    cmdVelYTemp = 0.0f;
    cmdAngWTemp = 0.0f;
    break;

  case hover:
    commandHover(&cmdVelXTemp, &cmdVelYTemp, &cmdAngWTemp);
    break;

  case turnToFindWall:
    commandTurn(&cmdVelXTemp, &cmdAngWTemp, maxTurnRate);
    cmdVelYTemp = 0.0f;
    break;

  case turnToAlignToWall:
    if (timeNow - stateStartTime < waitForMeasurementSeconds)
    {
      commandHover(&cmdVelXTemp, &cmdVelYTemp, &cmdAngWTemp);
    }
    else
    { // then turn again
      commandTurn(&cmdVelXTemp, &cmdAngWTemp, maxTurnRate);
      cmdVelYTemp = 0.0f;
    }
    break;

  case forwardAlongWall:
    commandForwardAlongWall(&cmdVelXTemp, &cmdVelYTemp, sideRange);
    cmdAngWTemp = 0.0f;
    break;

  case rotateAroundWall:
    // If first time around corner
    //first try to find the corner again

    // if side range is larger than prefered distance from wall
    if (sideRange > refDistanceFromWall + rangerThresholdLost)
    {

      // check if scanning has already occured
      if (wraptopi(fabs(currentHeading - prevHeading)) > inCornerAngle)
      {
        aroundCornerBackTrack = true;
      }
      // turn and adjust distnace to corner from that point
      if (aroundCornerBackTrack)
      {
        // go back if it already went into one direction
        commandTurnAndAdjust(&cmdVelYTemp, &cmdAngWTemp, -1 * maxTurnRate, sideRange);
        cmdVelXTemp = 0.0f;
      }
      else
      {
        commandTurnAndAdjust(&cmdVelYTemp, &cmdAngWTemp, maxTurnRate, sideRange);
        cmdVelXTemp = 0.0f;
      }
    }
    else
    {
      // continue to turn around corner
      //printf("prevSet5");
      prevHeading = currentHeading;
      aroundCornerBackTrack = false;
      commandTurnAroundCornerAndAdjust(&cmdVelXTemp, &cmdVelYTemp, &cmdAngWTemp, refDistanceFromWall, sideRange);
    }
    break;

  case rotateInCorner:
    commandTurn(&cmdVelXTemp, &cmdAngWTemp, maxTurnRate); //just turns it like normal based on what var direction is
    cmdVelYTemp = 0.0f;
    break;

  case findCorner:
    commandAlignCorner(&cmdVelYTemp, &cmdAngWTemp, -1 * maxTurnRate, sideRange, refDistanceFromWall);
    cmdVelXTemp = 0.0f;
    break;

  default:
    //State does not exist so hover!!
    commandHover(&cmdVelXTemp, &cmdVelYTemp, &cmdAngWTemp);
  }
  //printf("CMDVEL X: %f", cmdVelXTemp);
  commandVel->cmdVelX = cmdVelXTemp;
  //printf("CMDVEL X: %f\n", commandVel->cmdVelX);

  commandVel->cmdVelY = cmdVelYTemp;
  commandVel->cmdAngW = cmdAngWTemp;
  printf("Wall Follower() state: %d\n",stateWF);
  return stateWF;

}
