//Master code
#include <Wire.h>
int button =9;

void setup() {
  // put your setup code here, to run once:
  Wire.begin(); //Wire.begin(address), addres = specify addresss of slave devices, if not specified, join as master
  pinMode (button , INPUT);
}

byte out = 0;

void loop() {
  if(digitalRead(button) == HIGH)
  {
    out = 1;
    Wire.beginTransmission (8); //send to this address
    Wire.write(out);
    Wire.endTransmission ();
  }
  else
  {
   out = 0;
   Wire.beginTransmission (8);
   Wire.write(out);
   Wire.endTransmission ();
  }
}
