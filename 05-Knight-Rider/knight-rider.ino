// C++ code
//
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  for(int b = 8 ; b < 13 ; b++)
  {
    digitalWrite(b, HIGH);
    delay(500);
  }
  
  for(int b = 12 ; b > 7 ; b--)
  {
    digitalWrite(b, LOW);
    delay(500);
  }
}

