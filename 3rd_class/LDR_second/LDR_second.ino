int ldr = A0;
int value;
int led1 = 9;
int led2 = 3;
int brightness;
int maximum = 0;  //brightness minimum
int minimum = 100; //brightness max
int average; //brghtness avg

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (ldr , INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(ldr);
  brightness = map (value , 0 ,1023,0 , 255);
  if(brightness < minimum )
  {
    minimum = brightness;
  }
  else if (brightness > maximum)
  {
    maximum = brightness;

  }

  average=(minimum+maximum)/2;

  Serial.println (average);
  

  
  
}
