int pir = 2;

void setup() {
  Serial.begin(9600);
  pinMode(pir, INPUT);
}

void loop() {
  int value = digitalRead(pir);

  if (value == HIGH) {
    Serial.println("Motion Detected");
  } else {
    Serial.println("No Motion");
  }

  delay(500);
}
