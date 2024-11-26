void setup() {
  Serial.begin(9600);
}

void loop() {
  int aIn = analogRead(A0);

  Serial.println(aIn);

  delay(1);
}
