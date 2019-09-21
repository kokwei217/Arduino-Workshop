int number;
int led = 9;

void setup() {
  // put your setup code here, to run once: 
  Serial.begin (9600);
  pinMode (led , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available () > 0)
  {
    number = Serial.parseInt();
    analogWrite(led , number);
  }
}
