#include<SPI.h>

void setup()
{
  pinMode(10,OUTPUT);
  SPI.begin();
  delay(100);
}

void loop()
{
  digitalWrite(10,LOW);
  SPI.transfer(0x80);
  digitalWrite(10,HIGH);
  delay(100);

  digitalWrite(10,LOW);
  SPI.transfer(0x40);
  digitalWrite(10,HIGH);
  delay(100);

  digitalWrite(10,LOW);
  SPI.transfer(0x20);
  digitalWrite(10,HIGH);
  delay(100);

  digitalWrite(10,LOW);
  SPI.transfer(0x10);
  digitalWrite(10,HIGH);
  delay(100);

  digitalWrite(10,LOW);
  SPI.transfer(0x08);
  digitalWrite(10,HIGH);
  delay(100);

  digitalWrite(10,LOW);
  SPI.transfer(0x04);
  digitalWrite(10,HIGH);
  delay(100);

  digitalWrite(10,LOW);
  SPI.transfer(0x02);
  digitalWrite(10,HIGH);
  delay(100);

  digitalWrite(10,LOW);
  SPI.transfer(0x01);
  digitalWrite(10,HIGH);
  delay(100);
}