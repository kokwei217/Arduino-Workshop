int led=9;
int button = 6;
int previous;
int current;
int state = LOW;

void setup() 
{
  Serial.begin (9600);
  pinMode( led, OUTPUT);
  pinMode (button, INPUT);

}

void loop() 
{
  current= digitalRead (button);
  Serial.println(current);
    if(previous== LOW && current == HIGH)
     {
      state = !state ; //state is changed
      digitalWrite(led , state);
      Serial.println("test");
    }
  previous = current;
}
