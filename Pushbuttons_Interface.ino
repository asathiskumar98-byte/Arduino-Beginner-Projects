const int button = 8;
const int led =7;

unsigned char button_state;
void setup()
{
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
}

void loop()
{
  button_state = digitalRead(button);

  if(button_state == HIGH)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}