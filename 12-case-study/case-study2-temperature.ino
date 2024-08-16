const int tempPin =A0;
const int ledPin =8;
const int motorPin =11;


void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int tempReading = analogRead(tempPin);
  float voltage = tempReading *5.0 /1023.0;
  float temperature = voltage *100; // LM35 sıcaklık hesaplama
  
  if(temperature > 30) {
    digitalWrite(ledPin,HIGH);
    int motorSpeed =map(temperature,30, 50,0,255);
    motorSpeed = constrain(motorSpeed,0,255);
    analogWrite(motorPin, motorSpeed);
    Serial.println(temperature);
  }else{
    digitalWrite(ledPin,LOW);
    analogWrite(motorPin,0);
    Serial.println(temperature);
  }
  delay(1000);
}