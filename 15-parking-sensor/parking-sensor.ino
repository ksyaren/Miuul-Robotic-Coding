#include <LiquidCrystal.h>

//HC-SRO4 Pins
const int trigPin =9;
const int echoPin =10;

// LCD Pins
const int RS= 12, E=11, D4=5, D5=4 , D6= 3, D7=2;
LiquidCrystal lcd(RS, E, D4, D5, D6, D7);

//Buzzer Pin 
const int buzzerPin =8;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  
  lcd.begin(16,2);
}

void loop() {
  //distance sensor
  digitalWrite(trigPin ,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.034/2;
  
  //lcd screen
  
  lcd.clear();
  lcd.print("Distance: ");
  lcd.print(distance);
  lcd.print("cm");
  
  //buzzer control
  
  if (distance < 10){
    tone(buzzerPin,1000); //make high noice
  }
   else if (distance < 20){
    tone(buzzerPin, 500);
  } 
  else {
    noTone(buzzerPin);
  }
  
 delay(100);
}