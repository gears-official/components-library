#include "Sensor.h"

// Constructor
Sensor::Sensor(Mode mode, int pin)
{
    this->pin = pin;
    this->mode = mode;
    pinMode(this->pin, INPUT);
}

/////////////////////////
//       getValue()
/////////////////////////
/**
 * Returns the value of the sensor
 *
 * @return int
 */
int Sensor::getValue()
{
    if (mode == ANALOG)
    {
        return analogRead(pin);
    }
    else
    {
        return digitalRead(pin);
    }
}

/////////////////////////
//       setPin()
/////////////////////////
/**
 * Sets the pin of the sensor
 *
 * @return None
 */
void Sensor::setPin(int pin)
{
    pinMode(this->pin, INPUT);
    this->pin = pin;
}

/////////////////////////
//        setMode()
/////////////////////////
/**
 * Sets the mode of the sensor
 *
 * @return None
 */
void Sensor::setMode(Mode mode)
{
    this->mode = mode;
}

/////////////////////////
//        getPin()
/////////////////////////
/**
 * get the pin of the sensor
 *
 * @return pin
 */
int Sensor::getPin()
{
    return this->pin;
}

/////////////////////////
//      getMode()
/////////////////////////
/**
 * set the mode of the sensor
 *
 * @return mode
 */
Mode Sensor::getMode()
{
    return this->mode;
}
}
;
