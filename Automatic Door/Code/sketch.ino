#include <Servo.h>

Servo door;

int trig = 9;
int echo = 10;

void setup() {
  door.attach(3);

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);

  digitalWrite(trig, LOW);

  long duration = pulseIn(echo, HIGH);
  int distance = duration * 0.034 / 2;

  if (distance < 15)
    door.write(90);
  else
    door.write(0);

  delay(200);
}