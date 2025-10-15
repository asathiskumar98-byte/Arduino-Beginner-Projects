void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}
unsigned char data;
void loop()
{
  if(Serial.available())
  {
    data = Serial.read();
    if(data == 'a')
    {
      digitalWrite(13,HIGH);
    }
    if(data == 'b')
    {
      digitalWrite(13,LOW);
    }
  }
  if(Serial.available())
  {
    data = Serial.read();
    if(data == 'c')
    {
      digitalWrite(12,HIGH);
    }
    if(data == 'd')
    {
      digitalWrite(12,LOW);
    }
  }
  if(Serial.available())
  {
    data = Serial.read();
    if(data == 'e')
    {
      digitalWrite(11,HIGH);
    }
    if(data == 'f')
    {
      digitalWrite(11,LOW);
    }
  }
}


