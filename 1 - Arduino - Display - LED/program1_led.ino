//Tujuan Program: Mengendalikan nyala 1 buah LED blink

#define LED 2

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, LOW); // Menyalakan LED
  delay(250);             // Tunda 1/4 detik

  digitalWrite(LED, HIGH);// Mematikan LED
  delay(250);
}
