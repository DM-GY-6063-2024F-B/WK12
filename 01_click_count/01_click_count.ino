int nClicks;

int pv2;

void setup() {
  pinMode(2, INPUT);
  Serial.begin(9600);

  pv2 = 0;
  nClicks = 0;
}

void loop() {
  int v2 = digitalRead(2);

  if (v2 == 1 && pv2 == 0) {
    nClicks += 1;
  }

  pv2 = v2;

  Serial.println("v2: " + String(v2) + " count: " + String(nClicks));

  delay(1);
}

