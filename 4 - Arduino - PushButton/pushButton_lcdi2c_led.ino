// Tujuan Program : Mengendalikan display LCD 16x2 karakter & LED dengan trigger dari switch Push-Button (PB)

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//LiquidCrystal_I2C lcd(I2C_addr,col,row)
LiquidCrystal_I2C lcd(0x27,16,2);   // 0x27 = alamat I2C bus untuk LCD 16x2 karakter 

#define PB1 2
#define PB2 3
#define PB3 4
#define PB4 5

#define led1 6
#define led2 7
#define led3 8
#define led4 9

void setup() {
  lcd.init();                      // Inisialisasi LCD  
  lcd.begin(16,2,10);    
  lcd.backlight();
  
  pinMode(PB1, INPUT); 
  pinMode(PB2, INPUT);   // Pin PB = INPUT
  pinMode(PB3, INPUT); 
  pinMode(PB4, INPUT); 
  
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);   // Pin LED = OUTPUT
  pinMode(led3, OUTPUT); 
  pinMode(led4, OUTPUT);
}

void loop() {
  int kondisi_PB1 = digitalRead(PB1); // Baca data/kondisi Push-Button
  int kondisi_PB2 = digitalRead(PB2);
  int kondisi_PB3 = digitalRead(PB3);
  int kondisi_PB4 = digitalRead(PB4);

  digitalWrite(led1, HIGH); 
  digitalWrite(led2, HIGH); // Matikan seluruh LED
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, HIGH);
  
  digitalWrite(PB1, HIGH); 
  digitalWrite(PB2, HIGH); // Kondisikan pin PB = HIGH
  digitalWrite(PB3, HIGH); 
  digitalWrite(PB4, HIGH);
    
  if(kondisi_PB1 == LOW) {    // Cek kondisi PB1
    digitalWrite(led1, LOW);  // Nyalakan LED1
    lcd.clear();              // Bersihkan display LCD
    lcd.setCursor(0,0);
    lcd.print("Hi Sahabat");      
    lcd.setCursor(0,1);
    lcd.print("      Robonesia!");     
    delay(2000); 
    lcd.clear();    
    }
  
  if(kondisi_PB2 == LOW) {    // Cek kondisi PB2
    digitalWrite(led2, LOW);  // Nyalakan LED2
    lcd.clear();              // Bersihkan display LCD
    lcd.setCursor(0,0);
    lcd.print("Ayo belajar");      
    lcd.setCursor(0,1);
    lcd.print("    ELEKTRONIKA,");     
    delay(2000); 
    lcd.clear(); 
    }

  if(kondisi_PB3 == LOW) {    // Cek kondisi PB3
    digitalWrite(led3, LOW);  // Nyalakan LED3
    lcd.clear();              // Bersihkan display LCD
    lcd.setCursor(0,0);
    lcd.print("EMBEDDED SYSTEM,");  
    lcd.setCursor(0,1);
    lcd.print("PROGRAMMING,");    
    delay(2000); 
    lcd.clear(); 
    }
    
  if(kondisi_PB4 == LOW) {    // Cek kondisi PB4
    digitalWrite(led4, LOW);  // Nyalakan LED4
    lcd.clear();              // Bersihkan display LCD
    lcd.setCursor(0,0);
    lcd.print("dan ROBOTIKA");      
    lcd.setCursor(0,1);
    lcd.print("   di ROBONESIA!");     
    delay(2000); 
    lcd.clear(); 
    }
}
