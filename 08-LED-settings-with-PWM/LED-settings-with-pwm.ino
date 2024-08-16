// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop()
{ 
  
  for( int i=0; i<255; i++)
  {
    analogWrite(11,i);
    Serial.println(i);
    delay(50);
  }
}