

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  float rpm = sensorValue * (1745.0 / 1023);
  int rpmround = (int)rpm;
  Serial.println(rpmround);
  delay(100);
}
