int ldr = A0;
int value;
int led = 9;
int brightness;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (ldr , INPUT);
  pinMode (led , OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(ldr);
  Serial.println(value);
  brightness= map (value , 0 ,1023,0 , 255);
  analogWrite (led, brightness);
 
  
}
