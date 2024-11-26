int THRESHOLD = 500;
int DEBOUNCE = 50;

int tapCount = 0;

int prevTapValue = 0;
long prevTapTime = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int tap = (analogRead(A0) > THRESHOLD);
  long now = millis();

  if(tap != prevTapValue && now - prevTapTime > DEBOUNCE) {
    tapCount += tap;
    prevTapTime = now;
  }

  prevTapValue = tap;

  Serial.println(String(tap) + " " + tapCount);
  delay(1);
}
