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
void Motor::farward(int speed)
{
    digitalWrite(pos, HIGH);
    digitalWrite(neg, LOW); 
    analogWrite(speedControl,speed); 
}

////////////////////////////////////
//           backward()
////////////////////////////////////
void Motor::backward()
{
    digitalWrite(pos, LOW);
    digitalWrite(neg, HIGH); 
}
void Motor::backward(int speed)
{
    digitalWrite(pos, LOW);
    digitalWrite(neg, HIGH); 
    analogWrite(speedControl,speed); 
}

////////////////////////////////////
//           speed()
////////////////////////////////////
void Motor::setSpeed(short int speed)
{
    analogWrite(speedControl,speed); 
}