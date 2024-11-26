void setup() {
  for (int i = 4; i < 8; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  int a0 = analogRead(A0);

  for (int i = 4; i < 8; i++) {
    int threshold = map(i, 4, 7, 4000, 1000);
    digitalWrite(i, a0 > threshold);
  }

  delay(20);
}
