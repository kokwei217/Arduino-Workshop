int led1= 9;
int led2 = 10;
char input;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (led1, OUTPUT);
  pinMode(led2, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available () > 0 )
  {
    input = Serial.read ();

    switch (input)
    {
      case 'a' :
      digitalWrite (led1, HIGH);
      digitalWrite (led2, LOW);
      break;

      case 'b' :
      digitalWrite (led1, LOW);
      digitalWrite (led2, HIGH);
      break;

      default:
      digitalWrite (led1 , LOW);
      digitalWrite (led2 , LOW);
    }
  }

}
