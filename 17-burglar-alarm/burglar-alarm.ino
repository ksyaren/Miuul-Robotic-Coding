int buzzer=12;
int pir=13;
int value=0;

void setup(){
  pinMode(12,OUTPUT);
  pinMode(13,INPUT);
  Serial.begin(9600);
}

void loop(){
  value =digitalRead(pir);
  
  if (value ==HIGH){
    tone(buzzer,300);
    Serial.println("There is a burglar");
    delay(1000);
  }else {
    noTone(buzzer);
    delay(1000);
  }
}
    