void setup(){
  pinMode(2,INPUT_PULLUP);
  Serial.begin(9600);
}
void loop(){
  if (digitalRead(2)==LOW)
{
  Serial.print("tilt detected");
}
  else
  {
    Serial.print("no tilt detected");
  }
}