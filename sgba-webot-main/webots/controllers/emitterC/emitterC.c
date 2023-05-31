/*
 * File:          emitterC.c
 * Date:
 * Description:
 * Author:
 * Modifications:
 */

/*
 * You may need to add include files like <webots/distance_sensor.h> or
 * <webots/motor.h>, etc.
 */
#include <webots/robot.h>
#include <webots/emitter.h>
#include <string.h>
#include <stdio.h>
/*
 * You may want to add macros here.
 */
#define TIME_STEP 32

/*
 * This is the main program.
 * The arguments of the main function can be specified by the
 * "controllerArgs" field of the Robot node
 */
int main(int argc, char **argv) {
  /* necessary to initialize webots stuff */
  wb_robot_init();
  printf("hello");

  WbDeviceTag emitter = wb_robot_get_device("emitter");


  /*
   * You should declare here WbDeviceTag variables for storing
   * robot devices like this:
   WbDeviceTag my_sensor = wb_robot_get_device("my_sensor");
   *  WbDeviceTag my_actuator = wb_robot_get_device("my_actuator");
   */

  /* main loop
   * Perform simulation steps of TIME_STEP milliseconds
   * and leave the loop when the simulation is over
   */
   
  char message[128];
  sprintf(message, "pissng%d", 'i');

   
  while (wb_robot_step(TIME_STEP) != -1) {
    
      wb_emitter_send(emitter, message, strlen(message) + 1);


    /*
     * Read the sensors :
     * Enter here functions to read sensor data, like:
     *  double val = wb_distance_sensor_get_value(my_sensor);
     */

    /* Process sensor data here */

    /*
     * Enter here functions to send actuator commands, like:
     * wb_motor_set_position(my_actuator, 10.0);
     */
  };

  /* Enter your cleanup code here */

  /* This is necessary to cleanup webots resources */
  wb_robot_cleanup();

  return 0;
}
