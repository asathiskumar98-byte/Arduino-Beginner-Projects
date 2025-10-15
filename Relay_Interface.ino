const int button =7;
const int relay = 8;

void setup()
{
  pinMode(relay,OUTPUT);
  pinMode(button,INPUT); 
}

unsigned char button_state;
void loop()
{
  button_state = digitalRead(button);
  if(button_state == HIGH)
  {
    digitalWrite(relay,HIGH);
  }
  else
  {
    digitalWrite(relay,LOW);
  }
}