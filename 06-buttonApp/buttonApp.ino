const int ledPin = 12;
const int buttonPin = 2;

int buttonState =0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  
  if(buttonState ==1)
  { Serial.println("led yandi");
   digitalWrite(ledPin,1);
  }
  else {
    Serial.println("led sondu");
    digitalWrite(ledPin, 0);
  }
}