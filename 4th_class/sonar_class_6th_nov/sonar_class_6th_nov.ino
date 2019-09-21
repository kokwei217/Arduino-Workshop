#include <NewPing.h>

NewPing Sonar(9 , 6 , 200 );  // (trig, echo, max distance)or just two parameters , max distance will be 400-500 (default) pin is pwn

void setup() {
  // put your setup code here, to run once:
  Serial.begin (115200);

}

void loop() {
  // put your main code here, to run repeatedly: 
  Sonar.ping_cm () ;
  Serial.println ( Sonar.ping_cm());
  
}
