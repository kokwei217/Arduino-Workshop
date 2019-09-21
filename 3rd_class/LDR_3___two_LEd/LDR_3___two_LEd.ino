int ldr = A0;
int value;
int led1 = 9;
int led2 = 3;
int brightness;
int threshold = 161 ;


void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (ldr , INPUT);
  pinMode (led1 , OUTPUT);
  pinMode( led2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(ldr);
  brightness = map (value , 0 ,1023,0 , 255);
  Serial.println(brightness);
  if(brightness < threshold)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  }

  else
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  }
  

  
  
}
