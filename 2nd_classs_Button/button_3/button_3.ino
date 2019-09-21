//Increase LED Brightness on each press

int led = 9;
int button = 6;
int previous;
int current;
int state = LOW;
int brightness ;

void setup()
{
  Serial.begin (9600);
  pinMode( led, OUTPUT);
  pinMode (button, INPUT);

}

void loop()
{
  current = digitalRead (button);
  Serial.println(current);
  if (previous == LOW && current == HIGH)
  {
    if (brightness >= 255)
    {
      brightness = 0;
    }
    brightness = brightness + 20;
    analogWrite(led, brightness);
    Serial.println(brightness);
  }
  previous = current;

}
