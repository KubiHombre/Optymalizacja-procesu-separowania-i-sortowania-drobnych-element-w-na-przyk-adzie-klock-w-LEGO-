// Include the library
#include <Servo.h>

// Create the servo object
Servo myservo;

// Setup section to run once
void setup() {
  myservo.attach(5); // attach the servo to our servo object
  //myservo.write(90);
}

// Loop to keep the motor turning!
void loop() {
  int n = 90;
  int p1 = 40;
  int p2 = 140;
  myservo.write(p1);
  delay(2000);
  myservo.write(p2);
  delay(2000);
}
