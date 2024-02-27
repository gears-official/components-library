#include <Arduino.h>
#include "../include/IBTMotor.h"

////////////////////////////////////
//           Constructor
////////////////////////////////////
/**
    * @brief Construct a new IBTMotor object
    * 
    * @param R_PWM -> Right PWM pin
    * @param L_PWM -> Left PWM pin
    * @param R_ENB -> Right Enable pin
    * @param L_ENB -> Left Enable pin
    * 
    * @return void
*/
IBTMotor::IBTMotor(int R_PWM, int L_PWM, int R_ENB, int L_ENB) {
    this->R_PWM = R_PWM;
    this->L_PWM = L_PWM;
    this->R_ENB = R_ENB;
    this->L_ENB = L_ENB;
    pinMode(R_PWM, OUTPUT);
    pinMode(L_PWM, OUTPUT);
    pinMode(R_ENB, OUTPUT);
    pinMode(L_ENB, OUTPUT);

    digitalWrite(R_ENB, HIGH);
    digitalWrite(L_ENB, HIGH);
}

////////////////////////////////////
//           forward()
////////////////////////////////////
/**
    * @brief Move the motor forward
    * 
    * @param speed -> Speed of the motor
    * @return void
*/
void IBTMotor::forward(int speed) {
    analogWrite(R_PWM, speed);
    analogWrite(L_PWM, 0);
}

////////////////////////////////////
//           backward()
////////////////////////////////////
/**
    * @brief Move the motor backward
    * 
    * @param speed -> Speed of the motor
    * @return void
*/
void IBTMotor::backward(int speed) {
    analogWrite(R_PWM, 0);
    analogWrite(L_PWM, speed);
}

////////////////////////////////////
//           stop()
////////////////////////////////////
/**
    * @brief Stop the motor
    * 
    * @return void
*/
void IBTMotor::stop() {
    analogWrite(R_PWM, 0);
    analogWrite(L_PWM, 0);
}