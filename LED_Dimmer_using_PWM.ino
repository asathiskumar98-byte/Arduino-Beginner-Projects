const int pwmpin = 11; //PWM Pin 3,5,6,9,10,11
int i;

void setup()
{

}

void loop()
{
  for(i=0;i<255;i++)
  {
    analogWrite(pwmpin,i);
    delay(2);
  }
  delay(2000);
  for(i=255;i>0;i--)
  {
    analogWrite(pwmpin,i);
    delay(2);
  }
  delay(2000);
}
