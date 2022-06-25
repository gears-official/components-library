#define ON_BLACK_LINE 0

class Sensor
{
  public:
      int pin;
      // Constructor      
      Sensor(int p)
      {
        pinMode(p, INPUT);
        pin = p;
      }

      /////////////////////////
      //       getValue()
      /////////////////////////
      bool getValue()
      {
        return digitalRead(pin);
      }
};
