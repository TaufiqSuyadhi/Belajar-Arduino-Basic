// Program goal : Menyalakan 8 LED berurutan & bergantian

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
    delay(300); 
    digitalWrite(pin, HIGH);
  }
}
