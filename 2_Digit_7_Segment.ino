const int a = 3;
const int b = 4;
const int c = 5;
const int d = 6;
const int e = 7;
const int f = 8;
const int g = 9;
const int h = 10;
const int _7seg1 = 11;
const int _7seg2 = 12;

void Printdata(unsigned char data)
{
  if(data&0x01 == 0x01) { digitalWrite(a,HIGH); }
  else                  { digitalWrite(a,LOW);  }

  if(data&0x02 == 0x02) { digitalWrite(b,HIGH); }
  else                  { digitalWrite(b,LOW);  }

  if(data&0x04 == 0x04) { digitalWrite(c,HIGH); }
  else                  { digitalWrite(c,LOW);  }

  if(data&0x08 == 0x08) { digitalWrite(d,HIGH); }
  else                  { digitalWrite(d,LOW);  }

  if(data&0x10 == 0x10) { digitalWrite(e,HIGH); }
  else                  { digitalWrite(e,LOW);  }

  if(data&0x20 == 0x20) { digitalWrite(f,HIGH); }
  else                  { digitalWrite(f,LOW);  }

  if(data&0x40 == 0x40) { digitalWrite(g,HIGH); }
  else                  { digitalWrite(g,LOW);  }

  if(data&0x80 == 0x80) { digitalWrite(h,HIGH); }
  else                  { digitalWrite(h,LOW);  }
}

unsigned char i;
int segment[10] = {0x0C,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void setup()
{
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(h,OUTPUT);
  pinMode(_7seg1,OUTPUT);
  pinMode(_7seg2,OUTPUT);
}

void loop()
{
  Printdata(segment[2]);
  digitalWrite(_7seg1,HIGH);
  digitalWrite(_7seg2,LOW);
  delay(500);
  digitalWrite(_7seg1,LOW);
  digitalWrite(_7seg2,LOW);

  Printdata(segment[5]);
  digitalWrite(_7seg1,LOW);
  digitalWrite(_7seg2,HIGH);
  delay(500);
  digitalWrite(_7seg1,LOW);
  digitalWrite(_7seg2,LOW);
}