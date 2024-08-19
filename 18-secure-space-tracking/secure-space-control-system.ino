#include <LiquidCrystal.h>

//HC-SR04 pins
const int trigPin=9;
const int echoPin=10;

//LCD pins
const int RS=12, E=11, D4=5, D5=4, D6=3, D7=2;
LiquidCrystal lcd(RS, E,D4 ,D5, D6, D7);
const int pirPin=7;
const int alarmPin=8;

void setup(){
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(pirPin,  INPUT);
  pinMode(alarmPin, OUTPUT);
  lcd.begin(16,2);
  lcd.print("System Active");
  Serial.begin(9600);
}

void loop(){
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration *0.034/2;
  Serial.println(distance);
  
  int pirState =digitalRead(pirPin);
  Serial.println("PIR");
  Serial.println(pirState);
  
  
  if (distance <60 && pirState == HIGH){
     
    digitalWrite(alarmPin,HIGH);
    lcd.clear();
    lcd.print("Movement");
  }else 
  {
    digitalWrite(alarmPin, LOW);
    lcd.clear();
    lcd.print(" No Movement");
  }
  
  delay(1000);
}
