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
  myservo.write(180); // rotate the motor counter-clockwise
  //delay(2000); // keep rotating for 5 seconds (5000 milliseconds)
  //myservo.write(-90);
  //delay(2000); // keep rotating 😀
}
