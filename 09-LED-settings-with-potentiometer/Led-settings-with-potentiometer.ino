#define pot A0
#define led 3

void setup()
{
  Serial.begin(9600);
  
}
int value = 0;
void loop()
{  
  value= analogRead(pot);
  value =map(value, 0,1023,0,255);
  Serial.println(value);
  analogWrite(led,value);
  
}