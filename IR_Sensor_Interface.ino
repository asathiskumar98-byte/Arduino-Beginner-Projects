const int led =7;
const int IR_sensor = 8;

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(IR_sensor,INPUT); 
}

unsigned char sensor_state = 0;
void loop()
{
  sensor_state = digitalRead(IR_sensor);
  if(sensor_state == HIGH)
  {
    digitalWrite(led,LOW);
  }
  else
  {
    digitalWrite(led,HIGH);
  }
}