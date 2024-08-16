#include <LiquidCrystal.h>
const int RS = 12, E = 11, D4 = 5, D5 = 4, D6 = 3, D7 = 2;


LiquidCrystal lcd(RS, E, D4, D5, D6, D7 );


void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(2,0); // 0. satırın 2 sütunu
  lcd.print("Hello, World");
  
  
}

void loop()
{
  
}