#include <ESP32Servo.h>

Servo m1;

void setup() {
  Serial.begin(115200);
  m1.attach(26); // Attach the servo to pin 26
  m1.write(0);   // Initialize servo position to 0 degrees
  pinMode(25, INPUT);   // Set pin 25 as input for motion sensor
}

void loop() {
  int motion = digitalRead(25);

  if (motion == HIGH) {
    m1.write(90);
    Serial.println("Motion detected: Servo at 90 degrees");
  } else {
    m1.write(0);
    Serial.println("No motion: Servo at 0 degrees");
  }

  delay(100); 
}
