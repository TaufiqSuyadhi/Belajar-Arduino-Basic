// Tujuan Program : Menampilkan hasil pengukuran suhu (Temperature) dan kelembaban (Humidity) oleh sensor DHT22 pada serial monitor Arduino IDE  
// Board          : Arduino Nano 33 IoT

// Library sensor DHT yang harus diinstall pada Arduino IDE:
// - DHT Sensor: https://github.com/adafruit/DHT-sensor-library
// - Adafruit Unified Sensor: https://github.com/adafruit/Adafruit_Sensor

#include "DHT.h"

#define DHTPIN 2     // Pin digital yang terkoneksi dengan sensor DHT

// Uncomment tipe sensor DHT yang digunakan
//#define DHTTYPE DHT11   // DHT 11
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

// Inisialisasi sensor DHT (Pin & Type)
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600); // Baud rate 
  dht.begin();  
}

void loop() {
  delay(2000);  // Tunda waktu 2 detik untuk setiap pengukuran data sensor
  float h = dht.readHumidity();     // Ukur humiditas %
  float t = dht.readTemperature();  // Ukur suhu dalam Celcius
  float f = dht.readTemperature(true); // Ukur suhu dalam Fahrenheit

  // Untuk memeriksa kegagalan pengukuran & mencoba pembacaan lagi
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Gagal membaca data sensor DHT!"));
    return;
  }

  Serial.print(F("Humidity: "));
  Serial.print(h);  
  Serial.print(F("%  Temperature: "));
  
  Serial.print(t);            // Suhu dalam Celcius
  Serial.print(F("°C "));
  
  Serial.print(f);            // Suhu dalam Fahrenheit
  Serial.println(F("°F"));
}
