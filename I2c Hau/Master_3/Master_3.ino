//Master code
#include <Wire.h>
int button = 9;
int previous = LOW ;
int current;

void setup() {
  // put your setup code here, to run once: //use serial monitor check
  Wire.begin();
  pinMode (button , INPUT);
  Serial.begin(9600);
}

byte out = 0;

void loop() {
  if (Serial.available() > 0)
  {
    char input = Serial.read();
    if (input == 'c')
    {
      Wire.beginTransmission(8);
      Wire.write(out);
      Wire.endTransmission();
    }
    if (input == 'v')
    {
      Wire.beginTransmission(9);
      Wire.write(out);
      Wire.endTransmission();
    }

  }

}
