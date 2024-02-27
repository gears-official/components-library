#include <Arduino.h>
#include "../include/Motor.h"

////////////////////////////////////
//           Constructor
////////////////////////////////////

Motor::Motor(int positive, int negative, int speed) 
{
    // Assigning pins
    pos = positive;
    neg = negative;
    speedControl = speed;

    // Setting pins as output
    pinMode(neg, OUTPUT);
    pinMode(pos, OUTPUT);
    pinMode(speedControl, OUTPUT); 

    // Making negtive pin as ground
    digitalWrite(neg, LOW);
}

////////////////////////////////////
//           farward()
////////////////////////////////////
void Motor::farward()
{
    digitalWrite(pos, HIGH);
    digitalWrite(neg, LOW); 
}

////////////////////////////////////
//           backward()
////////////////////////////////////
void Motor::backward()
{
    digitalWrite(pos, LOW);
    digitalWrite(neg, HIGH); 
}

////////////////////////////////////
//           speed()
////////////////////////////////////
void Motor::setSpeed(short int speed)
{
    analogWrite(speedControl,speed); 
}