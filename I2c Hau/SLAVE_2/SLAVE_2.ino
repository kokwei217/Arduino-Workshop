//SLAVE CODE
#include <Wire.h>
int led=13;


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Wire.begin (8);   //slave says i live in this address
  Wire.onReceive (readWire);
  Serial.begin(9600);
    
}

void loop() {
}

boolean state = false;
 void readWire ()
 {
  while (Wire.available()>0)
  {
    int in = Wire.read();  //set a variable  to store read data
    if(in==0)
    {
      state =!state;
      digitalWrite (led ,state);
      
    }
    
  }
  
}
