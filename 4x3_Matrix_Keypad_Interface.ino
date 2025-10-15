const int C1 = 9;
const int C2 = 8;
const int C3 = 7;
const int C4 = 6;

const int R1 = 13;
const int R2 = 12;
const int R3 = 11;
const int R4 = 10;

void Keypad()
{
  digitalWrite(R1,LOW);
  digitalWrite(R2,HIGH);
  digitalWrite(R3,HIGH);
  digitalWrite(R4,HIGH);
  if(digitalRead(C1) == LOW)
  {
    Serial.print('1');
    delay(400);
  }
  if(digitalRead(C2) == LOW)
  {
    Serial.print('2');
    delay(400);
  }
  if(digitalRead(C3) == LOW)
  {
    Serial.print('3');
    delay(400);
  }
  if(digitalRead(C4) == LOW)
  {
    Serial.print('A');
    delay(400);
  }

  digitalWrite(R1,HIGH);
  digitalWrite(R2,LOW);
  digitalWrite(R3,HIGH);
  digitalWrite(R4,HIGH);
  if(digitalRead(C1) == LOW)
  {
    Serial.print('4');
    delay(400);
  }
  if(digitalRead(C2) == LOW)
  {
    Serial.print('5');
    delay(400);
  }
  if(digitalRead(C3) == LOW)
  {
    Serial.print('6');
    delay(400);
  }
  if(digitalRead(C4) == LOW)
  {
    Serial.print('B');
    delay(400);
  }

  digitalWrite(R1,HIGH);
  digitalWrite(R2,HIGH);
  digitalWrite(R3,LOW);
  digitalWrite(R4,HIGH);
  if(digitalRead(C1) == LOW)
  {
    Serial.print('7');
    delay(400);
  }
  if(digitalRead(C2) == LOW)
  {
    Serial.print('8');
    delay(400);
  }
  if(digitalRead(C3) == LOW)
  {
    Serial.print('9');
    delay(400);
  }
  if(digitalRead(C4) == LOW)
  {
    Serial.print('C');
    delay(400);
  }

  digitalWrite(R1,HIGH);
  digitalWrite(R2,HIGH);
  digitalWrite(R3,HIGH);
  digitalWrite(R4,LOW);
  if(digitalRead(C1) == LOW)
  {
    Serial.print('*');
    delay(400);
  }
  if(digitalRead(C2) == LOW)
  {
    Serial.print('0');
    delay(400);
  }
  if(digitalRead(C3) == LOW)
  {
    Serial.print('#');
    delay(400);
  }
  if(digitalRead(C4) == LOW)
  {
    Serial.print('D');
    delay(400);
  }
}

void setup()
{
  pinMode(C1,INPUT_PULLUP);
  pinMode(C2,INPUT_PULLUP);
  pinMode(C3,INPUT_PULLUP);
  pinMode(C4,INPUT_PULLUP);

  pinMode(R1,OUTPUT);
  pinMode(R2,OUTPUT);
  pinMode(R3,OUTPUT);
  pinMode(R4,OUTPUT);

  Serial.begin(9600);
}

void loop()
{
 Keypad(); 
}