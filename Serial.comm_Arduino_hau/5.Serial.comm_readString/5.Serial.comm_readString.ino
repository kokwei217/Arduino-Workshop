//Serial.available ()
//gets the number of bytes available for reading 
//returns number of bytes available to read\

//Serial.readStringUntil ()   , read a string until smth
//Serial.read() - reads incoming serial data , only reads character.

String abc;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  Serial.println ("ready");

}

void loop() {
  // put your main code here, to run repeatedly:
 if (Serial.available () > 0 ) // if serial monitor receives anything
 {
  abc = Serial.readStringUntil ('\n');
  abc.trim(); //only applies to string, trim away the string terminator
  Serial.println(abc);
 }
}
