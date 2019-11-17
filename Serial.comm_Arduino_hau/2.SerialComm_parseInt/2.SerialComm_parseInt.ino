int number;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  Serial.println("ready");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0)
  {
    number = Serial.parseInt();
    Serial.println( number);
  }

}
