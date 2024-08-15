// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(13, 1);
  Serial.println("led yandi");
  delay(250); 
  digitalWrite(13, 0);
  Serial.println("led sondu");
  delay(250); 
}