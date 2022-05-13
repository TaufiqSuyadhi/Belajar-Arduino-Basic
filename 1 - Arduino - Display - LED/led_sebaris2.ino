/* Program goal : Menyalakan 8 LED berurutan & bergantian
                  Bolak-balik */

int pin;

void setup() {
  for (int pin = 6; pin < 14; pin++) {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
  }
}

void loop() {
  for (pin = 6; pin < 14; pin++) {
    digitalWrite(pin, LOW);
    delay(100); 
    digitalWrite(pin, HIGH);
  }
  
  // Balik urutannya
  for (pin = 13; pin > 5; pin--) {
    digitalWrite(pin, LOW);
    delay(100); 
    digitalWrite(pin, HIGH);
  }
}
