// Tujuan Program : Menampilkan hasil pengukuran suhu (Temperature) dan kelembaban (Humidity) oleh sensor DHT22 pada LCD 16x2 karakter
// Board          : Arduino Nano 33 IoT

// Library sensor DHT yang harus diinstall pada Arduino IDE:
// - DHT Sensor: https://github.com/adafruit/DHT-sensor-library
// - Adafruit Unified Sensor: https://github.com/adafruit/Adafruit_Sensor

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "DHT.h"

//LiquidCrystal_I2C lcd(I2C_addr,col,row)
LiquidCrystal_I2C lcd(0x27,16,2);   // 0x27 = alamat I2C bus untuk LCD 16x2 karakter 
#define DHTPIN 2     // Pin digital yang terkoneksi dengan sensor DHT

// Uncomment tipe sensor DHT yang digunakan
//#define DHTTYPE DHT11   // DHT 11
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

// Inisialisasi sensor DHT (Pin & Type)
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  dht.begin();  
  lcd.init();                      // Inisialisasi LCD  
  lcd.begin(16,2,10);    
  lcd.backlight();
}

void loop() {
  delay(2000);  // Tunda waktu 2 detik untuk setiap pengukuran data sensor
  float h = dht.readHumidity();     // Ukur humiditas
  float t = dht.readTemperature();  // Ukur suhu dalam Celcius
  
  //Tampilkan hasil pengukuran suhu dan humidity pada LCD
  lcd.clear();              // Bersihkan display LCD
  lcd.setCursor(0, 0);
  lcd.print("Humi.: ");     // Menampilkan data Humidity
  lcd.setCursor(7, 0);
  lcd.print(h);
  lcd.setCursor(15, 0);
  lcd.print("%");
    
  lcd.setCursor(0, 1);      // Menampilkan data temperature
  lcd.print("Temp.: ");
  lcd.setCursor(7, 1);
  lcd.print(t); 
  lcd.setCursor(15, 1);
  lcd.print("C");
}
