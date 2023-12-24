//Tujuan Program: Menyalakan 8 LED berurutan & bergantian Bolak-balik

int pin;

void setup() {
  for (int pin = 2; pin < 10; pin++) {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
  }
}

void loop() {
  for (pin = 2; pin < 10; pin++) {
    digitalWrite(pin, LOW);
    delay(100); 
    digitalWrite(pin, HIGH);
  }

  // Balik urutannya
  for (pin = 9; pin > 1; pin--) {
    digitalWrite(pin, LOW);
    delay(100); 
    digitalWrite(pin, HIGH);
  }
}
