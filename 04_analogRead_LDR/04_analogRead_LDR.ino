void setup() {
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int a0v = analogRead(A0);
  Serial.println(a0v);

  if (a0v < 200) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }

  delay(20);
}
