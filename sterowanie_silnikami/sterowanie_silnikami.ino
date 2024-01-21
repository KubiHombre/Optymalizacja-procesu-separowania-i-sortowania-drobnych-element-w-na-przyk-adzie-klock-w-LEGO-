// Include the library
#include <Servo.h>

// Create the servo object
Servo myservo;
Servo nie360;
Servo nie360_2;

// Setup section to run once
void setup() {
  myservo.attach(5); // attach the servo to our servo object
  nie360.attach(2);
  nie360_2.attach(6);
  myservo.write(90); // stop the motor
}

// Loop to keep the motor turning!
void loop() {
  nie360.write(0);
  nie360_2.write(180);
  myservo.write(180); // rotate the motor counter-clockwise
  delay(5000); // keep rotating for 5 seconds (5000 milliseconds)

  nie360.write(180);
  nie360_2.write(0);
  delay(5000); // keep rotating 😀
  
}