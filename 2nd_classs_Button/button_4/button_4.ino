int button = 7;
int led = 8;
int previous = LOW;
int current;
int ledstate = LOW ;
bool updated = false; //only high and low
unsigned long int  lastpress = 0 ;// only stores postive value , no sign so always positve , long int = extended size variable
void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode ( button , INPUT);
  pinMode ( led , OUTPUT);

}

void loop() {
  current = digitalRead( button);
  Serial.println (current);
  if (previous == LOW && current == HIGH)
  {
    lastpress = millis() ;
    //     Serial.println ( lastpress);
    updated = true;
  }

  else if ( (millis () - lastpress) >= 2000 && current == LOW && previous == LOW && updated == true)
  {
    ledstate = !ledstate;
    digitalWrite (led , ledstate);
    updated = false ;
  }
  previous = current;
}
