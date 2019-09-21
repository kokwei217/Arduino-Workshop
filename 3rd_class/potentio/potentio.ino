//analogRead/analogWrite takes value ranging from 0 to 255
//potentiometer values range from 0 to 1023
//map(value , fromLow, fromHigh , toLow , toHigh)
//''value'' refferes to value to be converted
//'froLOw' lower boundary of values currrent range
//"from high' upper boundary of values curretn range
//"tolow" lower boundary off target value
//"toHigh" upper boundary of target value

int potio = A0; //analog in
int input;  //store potentiometer value
int led = 9;
int brightness;

void setup() {
  Serial.begin ( 9600 );
  pinMode ( potio , INPUT);
  pinMode ( led , OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  input = analogRead(potio);
  Serial.println(input);
  brightness= map (input , 0 ,1023,0 , 255);
  analogWrite (led,brightness);
}

