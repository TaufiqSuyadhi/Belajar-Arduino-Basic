# Arduino & LCD (Interface via Pin I2C - SD+SCL)

## Deskripsi Proyek
Pada proyek ini kita mempelajari dan mendemonstrasikan cara mengendalikan operasi komponen Liquid Crystal Display atau LCD menggunakan mikrokontroler yang tertanam pada board Arduino, dengan antar-muka via fitur komunikasi I2C menggunakan modul I2C serial LCD text.

## Kebutuhan Proyek (HW & SW)
![kebutuhan-proyek-lcd-i2c](https://github.com/TaufiqSuyadhi/Belajar-Arduino-Basic/assets/11900221/72c29c87-3768-483b-819b-2bdf64432ea1)

## Library yang Dibutuhkan
- Wire.h (Tersedia secara default di dalam software Arduino IDE)
- LiquidCrystal_I2C.h ([Click untuk download!](https://www.arduinolibraries.info/libraries/liquid-crystal-i2-c))

## Kode Tambahan (I2C bus scanner)
Dalam proyek ini, diperlukan program tambahan untuk membaca I2C bus address, yaitu program I2C bus scanner yang dibuat oleh Nick Gammon ([Click untuk download!](https://gammon.com.au/forum/?id=10896&reply=6#reply6))

## Skematik & Wiring
![skematik-wiring  Interfacing LCD via I2C](https://github.com/TaufiqSuyadhi/Belajar-Arduino-Basic/assets/11900221/e30659ab-b084-4bff-85a7-a63b5b293645)

## Contoh Program
- [Program 1](https://github.com/TaufiqSuyadhi/Belajar-Arduino-Basic/blob/main/3%20-%20Arduino%20-%20LCD%20-%20via%20Pin%20I2C/lcd_i2c.ino)
- [Program 2](https://github.com/TaufiqSuyadhi/Belajar-Arduino-Basic/blob/main/3%20-%20Arduino%20-%20LCD%20-%20via%20Pin%20I2C/lcd_i2c_geserKiri.ino)

## Tutorial
- [Video tutorial](https://www.youtube.com/watch?v=hic3yqDhHVE&t)
- [Artikel tutorial](...)
