# Arduino & Sensor DHT22 (Temperature & Humidity)

## Deskripsi Proyek
Pada proyek ini kita akan mempelajari dan mendemonstrasikan cara mengendalikan operasi fungsi sensor DHT22 yang merupakan sensor pendeteksi suhu (Temperature) dan kelembaban (Humidity) ruangan menggunakan mikrokontroler yang tertanam pada board Arduino.

## Kebutuhan Proyek (HW & SW)
![Kebutuhan proyek - arduino - sensor dht22](https://github.com/TaufiqSuyadhi/Belajar-Arduino-Basic/assets/11900221/a636fbdd-7e64-46ee-ac04-48dd8cd6cc1e)

## Library yang Dibutuhkan
- wire.h (Default di Arduino IDE)
- LiquidCrystal_I2C.h ([Download!](https://www.arduinolibraries.info/libraries/liquid-crystal-i2-c))
- DHT.h ([Download1](https://www.arduino.cc/reference/en/libraries/dht-sensor-library/) & [Download2](https://www.arduinolibraries.info/libraries/dht-sensor-library))
- Adafruit Unified Sensor ([Download1](https://www.arduino.cc/reference/en/libraries/adafruit-unified-sensor/) & [Download2](https://www.arduinolibraries.info/libraries/dht-sensor-library))

## Kode Tambahan (I2C bus scanner)
Dalam proyek ini, diperlukan program tambahan untuk membaca I2C bus address, yaitu program I2C bus scanner yang dibuat oleh Nick Gammon ([Click untuk download!](https://gammon.com.au/forum/?id=10896&reply=6#reply6))

## Skematik & Wiring
![skematik - arduino - sensor dht22](https://github.com/TaufiqSuyadhi/Belajar-Arduino-Basic/assets/11900221/12b25c1e-24d9-4b91-99f6-bb4cd66d9c84)

## Contoh Program
- [Program 1](https://github.com/TaufiqSuyadhi/Belajar-Arduino-Basic/blob/main/5%20-%20Arduino%20-%20Sensor%20DHT22/sensor_dht22_serialMonitor.ino)
- [Program 2](https://github.com/TaufiqSuyadhi/Belajar-Arduino-Basic/blob/main/5%20-%20Arduino%20-%20Sensor%20DHT22/sensor_dht22_lcdi2c.ino)

## Tutorial
- [Video tutorial](https://www.youtube.com/watch?v=YDtBhDbGnG0&t=2463s)
- [Artikel tutorial]()
