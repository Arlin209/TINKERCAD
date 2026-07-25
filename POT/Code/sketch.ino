void setup(){
  Serial.begin(9600);
}
void loop(){
  int value= analogRead(A0);
  Serial.print("Value = ");
  Serial.println(value);
  delay(100);
}