const int buttonPin =6;
const int ledPins[]= {8,9,10,11,12};

int buttonState =0;

void setup()
{
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  for (int i=0; i<5; i++)
  { pinMode(ledPins[i], OUTPUT);
  }
}

void loop()
{ 
  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH)
  {
    for (int i=4; i>=0; i--)
    { digitalWrite(ledPins[i], HIGH);
      delay(250);
      digitalWrite(ledPins[i], LOW);
    }
  } else {
    for (int i=0; i<5; i++)
    { digitalWrite(ledPins[i],HIGH);
      delay(250);
      digitalWrite(ledPins[i], LOW);
    }
  }
  
   
}