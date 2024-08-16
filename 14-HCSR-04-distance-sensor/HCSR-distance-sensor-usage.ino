#define TRIG_PIN 9
#define ECHO_PIN 10

void setup()
{
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(ECHO_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  long duration =pulseIn(ECHO_PIN, HIGH);
  long distance = duration * 0.034/2 ;
  
  Serial.print("Distance");
  Serial.print(distance);
  Serial.println("cm");
  delay(1000);
}