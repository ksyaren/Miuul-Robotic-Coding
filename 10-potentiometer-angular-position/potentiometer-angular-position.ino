#include<Servo.h>


Servo servo_9;
const byte potentiometer =A2;

int pot_value;

void setup()
{
  servo_9.attach(9);
  Serial.begin(9600);
}

void loop()
{
  pot_value = analogRead(potentiometer);
  int servo_value = map(pot_value, 0, 1023, 0, 180);
  servo_9.write(servo_value);
  Serial.print("Servo = ");
  Serial.print(servo_value);
  Serial.println(" degree");
  delay(15);
}