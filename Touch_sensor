int touch_Pin =5;
void setup() {
  pinMode(touch_Pin, INPUT);
  Serial.begin(9600);

}

void loop() {
  if (digitalRead(touch_Pin) == HIGH)
  Serial.println("Sensor is touched");
  else{
    (digitalRead(touch_Pin) == LOW);
  Serial.println("Sensor is not touched");
  }
  delay(500);
}
