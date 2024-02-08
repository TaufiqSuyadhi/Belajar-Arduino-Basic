#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//LiquidCrystal_I2C lcd(I2C_addr,col,row)
LiquidCrystal_I2C lcd(0x27,16,2);   // 0x27 = alamat I2C bus untuk LCD 16x2 karakter

void setup()
{
  lcd.init();                 // Inisialisasi LCD 
  lcd.begin(16,2,10);    
  lcd.backlight();
}

void loop()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Belajar Robotika");
  lcd.setCursor(0, 1);
  lcd.print("    di Robonesia");
    
  // Geser tampilan LCD
  for (int pos = 0; pos < 16; pos--) 
  {
    lcd.scrollDisplayLeft(); 
    delay(300);
  }
}
