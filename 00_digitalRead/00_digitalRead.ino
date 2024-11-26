void setup() {
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  int v2 = digitalRead(2);
  Serial.println(v2);

  delay(10);
}
