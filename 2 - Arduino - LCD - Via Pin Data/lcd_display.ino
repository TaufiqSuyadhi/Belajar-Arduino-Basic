// Tujuan program: Menampilkan text pada LCD 2x16 karakter

#include <LiquidCrystal.h>
const int PIN_RS = 2;
const int PIN_E  = 3;
const int PIN_DB4 = 4;
const int PIN_DB5 = 5;
const int PIN_DB6 = 6;
const int PIN_DB7 = 7;

LiquidCrystal lcd(PIN_RS,PIN_E, PIN_DB4, PIN_DB5, PIN_DB6, PIN_DB7);

void setup() {
  lcd.begin(16, 2); 
}

void loop() {
  lcd.clear();      // Bersihkan layar
  lcd.setCursor(0, 0);
  lcd.print("Hello Sahabat");
  lcd.setCursor(0, 1);
  lcd.print("Robonesia >>>"); 
  lcd.display();    // Tampilkan text
  delay(2000); 

  lcd.clear();      // Bersihkan layar
  lcd.setCursor(0, 0);
  lcd.print("Kita belajar");
  lcd.setCursor(0, 1);
  lcd.print("Arduino yuks!"); 
  lcd.display();    // Tampilkan text
  delay(2000);
}
