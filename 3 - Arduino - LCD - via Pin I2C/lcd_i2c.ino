#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//LiquidCrystal_I2C lcd(I2C_addr,col,row)
LiquidCrystal_I2C lcd(0x27,16,2);   // 0x27 = alamat I2C bus untuk LCD 16x2 karakter 

void setup(){
  lcd.init();                      // Inisialisasi LCD  
  lcd.begin(16,2,10);    
  lcd.backlight();      // Menyalakan back light LCD
}

void loop(){
  lcd.clear();         // Bersihkan display LCD
  lcd.setCursor(0,0);
  lcd.print("Hi Sahabat");      // Tampilkan teks pada baris atas LCD  
  lcd.setCursor(0,1);
  lcd.print("      Robonesia!");     // Tampilkan teks pada baris bawah LCD 
  delay(2000);

  lcd.clear();        // Bersihkan display LCD
  lcd.setCursor(0,0);
  lcd.print("Ayo belajar");      // Tampilkan teks pada baris atas LCD  
  lcd.setCursor(0,1);
  lcd.print("untuk Indonesia!");     // Tampilkan teks pada baris bawah LCD 
  delay(2000);
}
