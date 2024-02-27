#ifndef IBTMOTOR_H
#define IBTMOTOR_H

#include <Arduino.h>

class IBTMotor {
    private:
        int speed;
        int R_PWM;
        int L_PWM;
        int R_ENB;
        int L_ENB;
    public:
        /**
         * @brief Construct a new IBTMotor object
         * 
         * @param R_PWM -> Right PWM pin
         * @param L_PWM -> Left PWM pin
         * @param R_ENB -> Right Enable pin
         * @param L_ENB -> Left Enable pin
        */
        IBTMotor(int R_PWM, int L_PWM, int R_ENB, int L_ENB);

        /**
         * @brief Move the motor forward
         * 
         * @param speed -> Speed of the motor
         * @return void
        */
        void forward(int speed);

        /**
         * @brief Move the motor backward
         * 
         * @param speed -> Speed of the motor
         * @return void
        */
        void backward(int speed);

        /**
         * @brief Stop the motor
         * 
         * @return void
        */
        void stop();
};

#include "../lib/IBTMotor.cpp"

#endif