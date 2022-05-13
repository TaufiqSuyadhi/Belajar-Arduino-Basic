#define led_1 9
#define led_2 11
#define led_3 13

#define swt_1 2
#define swt_2 4
#define swt_3 6

void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);

  pinMode(swt_1, INPUT);
  pinMode(swt_2, INPUT);
  pinMode(swt_3, INPUT);  
}

void loop() {
  int kondisi_swt1 = digitalRead(swt_1);
  int kondisi_swt2 = digitalRead(swt_2);
  int kondisi_swt3 = digitalRead(swt_3);

  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);
  
  digitalWrite(swt_1, HIGH);
  digitalWrite(swt_2, HIGH);
  digitalWrite(swt_3, HIGH);
  
  if(kondisi_swt1 == LOW) {digitalWrite(led_1, LOW);}
  if(kondisi_swt2 == LOW) {digitalWrite(led_2, LOW);}
  if(kondisi_swt3 == LOW) {digitalWrite(led_3, LOW);}
}

