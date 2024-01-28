// Tujuan program: Menampilkan text bergeser pada LCD 2x16 karakter

#include <LiquidCrystal.h>
const int PIN_RS = 2;
const int PIN_E  = 3;
const int PIN_DB4 = 4;
const int PIN_DB5 = 5;
const int PIN_DB6 = 6;
const int PIN_DB7 = 7;

// Setting pin LCD
LiquidCrystal lcd(PIN_RS,PIN_E, PIN_DB4, PIN_DB5, PIN_DB6, PIN_DB7);

void setup() {
  lcd.begin(16, 2); 
}

void loop() 
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Belajar Robotika");
  lcd.setCursor(0, 1);
  lcd.print("di Robonesia");
    
  // Geser tampilan LCD
  for (int pos = 0; pos < 16; pos--) 
  {
    lcd.scrollDisplayLeft(); 
    delay(300);
  }
}
