#ifndef SENSOR_H
#define SENSOR_H

#define ON_BLACK_LINE 0
#define ON_WHITE_LINE 1

// mode enum -> analog or digital
enum Mode {ANALOG, DIGITAL};


class Sensor
{
  private:
      int pin;
      Mode mode;
  public:
      // Constructor      
      Sensor(Mode mode, int pin);

      /////////////////////////
      //       getValue()
      /////////////////////////
      /**
       * Returns the value of the sensor
       * 
       * @return int
      */
      int getValue();

      /////////////////////////
      //       setPin()
      /////////////////////////
      /**
       * Sets the pin of the sensor
       * 
       * @return None
      */
      void setPin(int pin);

      /////////////////////////
      //        setMode()
      /////////////////////////
      /**
       * Sets the mode of the sensor
       * 
       * @return None
      */
      void setMode(Mode mode);

      /////////////////////////
      //        getPin()
      /////////////////////////
      /**
       * get the pin of the sensor
       * 
       * @return pin
      */
      int getPin();
      /////////////////////////
      //      getMode()
      /////////////////////////
      /**
       * set the mode of the sensor
       * 
       * @return mode
      */
      Mode getMode();
};

#include "../lib/Sensor.cpp"

#endif