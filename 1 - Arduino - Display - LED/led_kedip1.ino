// Program goal : Mengendalikan nyala 1 buah LED blink

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(500);             // Tunda 1/2 detik

  digitalWrite(LED, LOW);
  delay(500);
}
