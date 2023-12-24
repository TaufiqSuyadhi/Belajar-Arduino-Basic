//Tujuan Program: Menyalakan 8 LED berurutan & bergantian

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
    delay(300); 
    digitalWrite(pin, HIGH);
  }
}
