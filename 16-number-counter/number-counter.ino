int segmentPins[] = {2,3,4,5,6,7,8};

void setup() {
  for(int i=0; i<7; i++){
    pinMode(segmentPins[i], OUTPUT);
  }
}

void clearDisplay() {
   for(int i=0; i<7; i++){
    digitalWrite(segmentPins[i], HIGH);
   }
}

void display0()
{
  clearDisplay();
  digitalWrite(segmentPins[0], LOW);
  digitalWrite(segmentPins[1], LOW);
  digitalWrite(segmentPins[2], LOW);
  digitalWrite(segmentPins[3], LOW);
  digitalWrite(segmentPins[4], LOW);
  digitalWrite(segmentPins[5], LOW);
}


void display1()
{
  clearDisplay();
  digitalWrite(segmentPins[1], LOW);
  digitalWrite(segmentPins[2], LOW);
 
}

void display2()
{
  clearDisplay();
  digitalWrite(segmentPins[0], LOW);
  digitalWrite(segmentPins[1], LOW);
  digitalWrite(segmentPins[3], LOW);
  digitalWrite(segmentPins[4], LOW);
  digitalWrite(segmentPins[6], LOW);
  
}

void display3()
{
  clearDisplay();
  digitalWrite(segmentPins[0], LOW);
  digitalWrite(segmentPins[1], LOW);
  digitalWrite(segmentPins[2], LOW);
  digitalWrite(segmentPins[3], LOW);
  digitalWrite(segmentPins[6], LOW);
  
}

  void display4()
{
  clearDisplay();
  digitalWrite(segmentPins[1], LOW);
  digitalWrite(segmentPins[2], LOW);
  digitalWrite(segmentPins[5], LOW);
  digitalWrite(segmentPins[6], LOW);
  
}

void display5(){
  clearDisplay();
  digitalWrite(segmentPins[0], LOW);
  digitalWrite(segmentPins[2], LOW);
  digitalWrite(segmentPins[3], LOW);
  digitalWrite(segmentPins[5], LOW);
  digitalWrite(segmentPins[6], LOW);
  
}





void display6()
{
  clearDisplay();
  digitalWrite(segmentPins[0], LOW);
  digitalWrite(segmentPins[2], LOW);
  digitalWrite(segmentPins[3], LOW);
  digitalWrite(segmentPins[4], LOW);
  digitalWrite(segmentPins[5], LOW);
  digitalWrite(segmentPins[6], LOW);
  
}

void display7()
{
  clearDisplay();
  digitalWrite(segmentPins[0], LOW);
  digitalWrite(segmentPins[1], LOW);
  digitalWrite(segmentPins[2], LOW);
 
}

void display8()
{
  clearDisplay();
  digitalWrite(segmentPins[0], LOW);
  digitalWrite(segmentPins[1], LOW);
  digitalWrite(segmentPins[2], LOW);
  digitalWrite(segmentPins[3], LOW);
  digitalWrite(segmentPins[4], LOW);
  digitalWrite(segmentPins[5], LOW);
  digitalWrite(segmentPins[6], LOW);
  
}

void display9()
{
  clearDisplay();
  digitalWrite(segmentPins[0], LOW);
  digitalWrite(segmentPins[1], LOW);
  digitalWrite(segmentPins[2], LOW);
  digitalWrite(segmentPins[3], LOW);
  digitalWrite(segmentPins[5], LOW);
  digitalWrite(segmentPins[6], LOW);
  
}

void loop() {
  display0();
  delay(2000);
  display1();
  delay(2000);
  display2();
  delay(2000);
  display3();
  delay(2000);
  display4();
  delay(2000);
  display5();
  delay(2000);
  display6();
  delay(2000);
  display7();
  delay(2000);
  display8();
  delay(2000);
  display9();
  delay(2000);
}