//SLAVE CODE
#include <Wire.h>
int led=13;


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Wire.begin (8);   //slave says i live in this address
    
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Wire.available()>0)
  {
    int in = Wire.read();  //set a variable  to store read data
    if(in==0)
    {
      digitalWrite (led ,LOW);
      
    }
    else
    {
      digitalWrite (led, HIGH);
    }
  }
  
}
