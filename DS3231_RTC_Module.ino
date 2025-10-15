#include<Wire.h>

void setup()
{
  Wire.begin();
  Serial.begin(9600);
  //DS3231_Write(00,00,00,4,01,01,26);
  //DS3231_Write();
}

void loop()
{
  delay(1000);
  Serial.println("---------------");
  Serial.print("Time-");
  Serial.print(DS3231_Read(0x02));
  Serial.print(':');
  Serial.print(DS3231_Read(0x01));
  Serial.print(':');
  Serial.println(DS3231_Read(0x00));
  Serial.print("Date-");
  Serial.print(DS3231_Read(0x04));
  Serial.print('/');
  Serial.print(DS3231_Read(0x05));
  Serial.print('/');
  Serial.println(DS3231_Read(0x06));
  Serial.println("---------------");
}

char decimal_to_bcd(unsigned char value)
{
  unsigned char msb,lsb,hex;
  msb = value/10;
  lsb = value%10;
  hex = ((msb<<4) + lsb);
  return hex;
}

void DS3231_Write(char _second,char _minute,char _hour,char _day,char _date,char _month,char _year)
{
  Wire.beginTransmission(0x68);
  Wire.write(0x00);
  Wire.write(decimal_to_bcd(_second));
  Wire.write(decimal_to_bcd(_minute));
  Wire.write(decimal_to_bcd(_hour));
  Wire.write(decimal_to_bcd(_day));
  Wire.write(decimal_to_bcd(_date));
  Wire.write(decimal_to_bcd(_month));
  Wire.write(decimal_to_bcd(_year));
  Wire.endTransmission();
}


uint8_t DS3231_Read(uint8_t addr)
{
  byte data;
  Wire.beginTransmission(0x68);
  Wire.write(addr);
  Wire.endTransmission();
  delay(5);
  Wire.requestFrom(0x68,1);
  delay(10);
  if(Wire.available())
  {
    data = Wire.read();
    data = ((data>>4)*10)+(data & 0x0F);
  }
  return data;
}