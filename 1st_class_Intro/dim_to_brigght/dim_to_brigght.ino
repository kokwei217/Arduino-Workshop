//dim to bright, reset

int led = 9;
int brightness = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (led, OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, brightness);
  Serial.println(brightness);
  if(brightness=255){
    brightness = 0;
  }
   brightness++;
}
