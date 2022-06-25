class ColorSensor
{
  private:
    int S0;
    int S1;
    int S2;
    int S3;
    int sensorOut;

    int getRedValue();
    int getGreenValue();
    int getBlueValue();

  public:
    ColorSensor(int S0, int S1, int S2, int S3, int sensorOut);
    char* predict();
    
};
ColorSensor::ColorSensor(int S0, int S1, int S2, int S3, int sensorOut)
{
  this->S0 = S0;
  this->S1 = S1;
  this->S2 = S2;
  this->S3 = S3;

  this->sensorOut = sensorOut;
 
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  
  pinMode(sensorOut, INPUT);

  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);
}
char* ColorSensor::predict()
{
    int red = getRedValue();
    delay(200);
    int green = getGreenValue();
    delay(200);
    int blue = getBlueValue();
    delay(200);

    if (red > 180 && green > 180 && blue > 180)
    {
      return '\0';
    }
    else if (red < green && red < blue)
    {
       return "Red";
    }
    else if (green < red && green < blue){
      return "green";
    }
    else if (blue < red && blue < green)
    {
      return "blue";
    }
    delay(200);
}

int ColorSensor::getRedValue()
{
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);

  int value = pulseIn(sensorOut, LOW);

  return value;
}
int ColorSensor::getGreenValue()
{
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);

  int value = pulseIn(sensorOut, LOW);

  return value;
}
int ColorSensor::getBlueValue()
{
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);

  int value = pulseIn(sensorOut, LOW);

  return value;
}
