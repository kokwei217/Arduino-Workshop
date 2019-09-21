int led = 8;
int button = 7 ;
boolean buttonState;

void setup () {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); //set led as output
  pinMode(button, INPUT);
  Serial.begin(9600);
}
int value;
void loop() {
  buttonState = digitalRead (button);
  if (buttonState == HIGH) {
    digitalWrite(led, HIGH);
  }
  else 
  {
    digitalWrite(led,LOW);
  }
  Serial.println(buttonState);

}

