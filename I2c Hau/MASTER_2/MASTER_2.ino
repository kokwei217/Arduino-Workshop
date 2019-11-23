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
  current = digitalRead (button);
  if ( previous == HIGH && current == LOW)

  {
    Wire.beginTransmission (8);
    Wire.write (out);
    Wire.endTransmission();

  }
  previous = current;


}
