#include <Arduino.h>
#include <TM1637Display.h>

#define CLK A5
#define DIO A4

#define TEST_DELAY   2000

TM1637Display display(CLK, DIO);

void setup() {
  Serial.begin(9600);
}

void loop() { 
  display.setBrightness(5); 
  int sensorValue = analogRead(A0);
  float rpm = sensorValue * (1745.0 / 1023);
  int rpmround = (int)rpm;
  display.showNumberDec(rpmround);
  Serial.println(rpmround);
  delay(1000);
}
