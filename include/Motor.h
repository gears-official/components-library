/**
 * @file motor.h
 * @brief This file contains the definition of the class Motor.
 * @author Zafeer Hafeez (IIvexII)
 * @version 0.1 
*/
// add include guard
#ifndef MOTOR_H
#define MOTOR_H

class Motor
{
  private:
    int pos;
    int neg;
    int speedControl;
  public:
    // Constructor
    Motor(int positive, int negative, int speed);
    
    /**
     * @brief This function is used to move the motor forward.
     * @param None
     * @return None
    */
    void farward();

    /**
     * @brief This function is used to move the motor forward.
     * @param speed The speed of the motor.
     * @return None
    */
    void farward(int speed);
    
    /**
     * @brief This function is used to move the motor backward.
     * @param None
     * @return None
    */
    void backward();

    /**
     * @brief This function is used to move the motor backward.
     * @param speed The speed of the motor.
     * @return None
    */
    void backward(int speed);
    
    /**
     * @brief This function is used to set the speed of the motor.
     * @param speed The speed of the motor.
     * @return None
    */
    void setSpeed(short int speed);
};

#include "../lib/Motor.cpp"

#endif