#define motor 3
#define pot A0

void setup()
{
  pinMode(pot, INPUT);
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
}
int value =0;

void loop()
{
  value = analogRead(pot);
  value = map(value,0 ,1023, 0, 255);
  analogWrite(motor,value);
  Serial.println(value);
  delay(10);
}