#include "./ColorSensor.h"
#include <string.h>
ColorSensor colorSensor(4,5,6,7,8); 

void setup() { 

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char *color = colorSensor.predict();
  if (strcmp(color, '\0'))
  {
    Serial.println(color); 
  }
}
