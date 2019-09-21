//dim to bright, bright back to dim

int led = 9;
int brightness = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (led, OUTPUT);
 
}

void loop() {
  for(brightness = 0; brightness < 255 ; brightness++)
  {
    analogWrite (led,brightness);
    Serial.println ( brightness);
  }

  for (brightness = 255;brightness >0;brightness --)
  {
    analogWrite ( led , brightness);
    Serial.println( brightness);
   
  }
}
